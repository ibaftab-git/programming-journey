#include <stdio.h>
#include <string.h>

#define MAX 50

/* -------- Means of TIME -------- */
struct TIME {
    int hour;
    int minute;
};

/* -------- TRAIN_INFO structure -------- */
struct TRAIN_INFO {
    int train_no;
    char train_name[50];
    struct TIME dep_time;
    struct TIME arr_time;
    char start_station[50];
    char end_station[50];
};

/* -------- Convert TIME to minutes -------- */
int timeToMinutes(struct TIME t) {
    return t.hour * 60 + t.minute;
}

/* -------- Sort trains by train number -------- */
void sortByTrainNo(struct TRAIN_INFO t[], int n) {
    int i, j;
    struct TRAIN_INFO temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (t[i].train_no > t[j].train_no) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}

/* (a) Trains from a particular station (sorted) */
void listFromStation(struct TRAIN_INFO t[], int n, char station[]) {
    int i;
    sortByTrainNo(t, n);

    printf("\nTrains departing from %s:\n", station);
    for (i = 0; i < n; i++) {
        if (strcmp(t[i].start_station, station) == 0) {
            printf("Train No: %d  Name: %s\n",
                   t[i].train_no, t[i].train_name);
        }
    }
}

/* (b) Trains at a particular station at exact time */
void listAtExactTime(struct TRAIN_INFO t[], int n,
                     char station[], struct TIME time) {
    int i;

    printf("\nTrains from %s at %02d:%02d:\n",
           station, time.hour, time.minute);

    for (i = 0; i < n; i++) {
        if (strcmp(t[i].start_station, station) == 0 &&
            t[i].dep_time.hour == time.hour &&
            t[i].dep_time.minute == time.minute) {

            printf("Train No: %d  Name: %s\n",
                   t[i].train_no, t[i].train_name);
        }
    }
}

/* (c) Trains within next one hour */
void listWithinOneHour(struct TRAIN_INFO t[], int n,
                       char station[], struct TIME time) {
    int i;
    int given = timeToMinutes(time);

    printf("\nTrains from %s within next one hour:\n", station);

    for (i = 0; i < n; i++) {
        int dep = timeToMinutes(t[i].dep_time);

        if (strcmp(t[i].start_station, station) == 0 &&
            dep >= given && dep <= given + 60) {

            printf("Train No: %d  Name: %s\n",
                   t[i].train_no, t[i].train_name);
        }
    }
}

/* (d) Trains between start and end station */
void listBetweenStations(struct TRAIN_INFO t[], int n,
                          char start[], char end[]) {
    int i;

    printf("\nTrains from %s to %s:\n", start, end);

    for (i = 0; i < n; i++) {
        if (strcmp(t[i].start_station, start) == 0 &&
            strcmp(t[i].end_station, end) == 0) {

            printf("Train No: %d  Name: %s\n",
                   t[i].train_no, t[i].train_name);
        }
    }
}

/* -------- Main function -------- */
int main() {
    struct TRAIN_INFO t[MAX] = {
        {101, "Express",    {9, 30},  {15, 0},  "Delhi",  "Mumbai"},
        {205, "Superfast",  {10, 0},  {18, 0},  "Delhi",  "Chennai"},
        {150, "Passenger", {9, 45},  {14, 30}, "Delhi",  "Mumbai"},
        {310, "Mail",      {11, 0},  {20, 0},  "Mumbai","Delhi"}
    };

    int n = 4;
    struct TIME time = {9, 30};

    listFromStation(t, n, "Delhi");
    listAtExactTime(t, n, "Delhi", time);
    listWithinOneHour(t, n, "Delhi", time);
    listBetweenStations(t, n, "Delhi", "Mumbai");

    return 0;
}
