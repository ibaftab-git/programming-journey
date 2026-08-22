#include<stdio.h>
#include<string.h>
#include<stdbool.h>

    typedef struct date {
        int day;
        int month;
        int year;
    } date;

    int main (){

        bool flag = true;

       date fst, scnd, thrd;
       fst.day = 25;
       fst.month = 11;
       fst.year = 2005;

       scnd.day = 04;
       scnd.month = 01;
       scnd.year = 2026;

       fst = thrd;// another question...

        if (fst.day != scnd.day) flag = false;
        if (fst.month != scnd.month) flag = false;
        if (fst.year != scnd.year) flag = false;

        if (flag == true )printf("dates are same");
        else printf("dates are different");

        return 0;
    }

    
    