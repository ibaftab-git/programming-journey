#include<stdio.h>
#include<string.h>

typedef struct nameAgeSalary nAs;

// struct nameAgeSalary
// {
//   char name [29];
//   int age ;
//   int salary;
//   } ;

// int main (){

    
//     nAs first, second;

                    //both are same


//we dont have to write everty time struct nmageslry evertime...
//we typedef it, now nameAgesalary >- nAs...

int main (){
    
typedef struct nameAgeSalary{
    char name [29];
    int age ;
    int salary;
  } nAs;
    
    nAs first, second;

    first.age = 25;
    first.salary = 80000;
    strcpy(first.name, "Rahgir");

    second.age = 28;
    second.salary = 75000;
    strcpy(second.name, "justh");

    printf("Name of 1st :%s\n", first.name);
    printf("Age of 2nd is :%d", second.age);


    return 0;
}