#include <stdio.h>

bool leap_year(int year) {
    if((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int years(int from, int to) {
    int i = from + 1;
    int days = 0;
    for(i; i < to; i++) {
        if(leap_year(i)) {
            days = days + 366;
        } else {
            days = days + 365;
        }
    }
    return days;
}

int birth_year(int day, int month, int year) {
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    int days = 0;
    if(leap_year(year) && month > 2) {
        for (i = 0; i < month; ++i) {
            days = days + months[i];
        }
        days = 366 - days + day;
    } else {
        for (i = 0; i < month; ++i) {
            days = days + months[i];
        }
        days = 365 - days + day;
    }
    return days;
}

int last_year(int day, int month, int year) {
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    int days = 0;
    if(leap_year(year) && month > 2) {
        for (i = 0; i < month - 1; ++i) {
            days = days + months[i];
        }
        days = days + 1 + day;
    } else {
        for (i = 0; i < month - 1; ++i) {
            days = days + months[i];
        }
        days = days + day;
    }
    return days;
}

int main(int argc, char **argv) {
    int age1,age2,age3,age;
    age1 = birth_year(12,15,1993);
    age2 = years(1993,2016);
    age3 = last_year(12,10,2016);
    age = age1 + age2 + age3;
    //age = years(1993,2016);
    printf("%d",age);
    return 0;
}