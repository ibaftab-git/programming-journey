

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int width = 20, height = 20;
int x, y, foodx, foody, score;
int tailX[100], tailY[100];
int nTail;
int gameOver;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void Setup() {
    gameOver = 0;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    foodx = rand() % width;
    foody = rand() % height;
    score = 0;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO cursorInfo;

cursorInfo.dwSize = 100;
cursorInfo.bVisible = FALSE;   // hide cursor

SetConsoleCursorInfo(hOut, &cursorInfo);    
}

void Draw() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD cursorPosition = {0, 0};
SetConsoleCursorPosition(hConsole, cursorPosition);

    for (int i = 0; i < width + 2; i++) printf("*");
    printf("\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) printf("#");

            if (i == y && j == x)
                printf("O"); // head
            else if (i == foody && j == foodx)
                printf("F"); // food
            else {
                int print = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o");
                        print = 1;
                    }
                }
                if (!print) printf(" ");
            }

            if (j == width - 1) printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < width + 2; i++) printf("#");
    printf("\n");

    printf("Score: %d\n", score);
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 75: dir = LEFT; break;   // Left arrow
            case 77: dir = RIGHT; break;  // Right arrow
            case 72: dir = UP; break;     // Up arrow
            case 80: dir = DOWN; break;   // Down arrow
            case 'x': gameOver = 1; break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
        default: break;
    }

    // Collision with walls
    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = 1;

    // Collision with tail
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    // Eating food
    if (x == foodx && y == foody) {
        score += 10;
        foodx = rand() % width;
        foody = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();

    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(150); // speed control`
    }

    printf("Game Over!\n");
    return 0;
}
