/*


       Author: Vatsal Mangukiya
       Date: 3rd October,2023

       Question: 61.	C program to add two time periods using structures.



*/
#include <stdio.h>

struct Time
{
       int hours;
       int  minutes;
       int seconds;
};

void addTime(struct Time t1, struct Time t2, struct Time *result) {
    result->seconds = t1.seconds + t2.seconds;
    result->minutes = t1.minutes + t2.minutes + (result->seconds / 60);
    result->hours = t1.hours + t2.hours + (result->minutes / 60);

    result->seconds %= 60;
    result->minutes %= 60;
    result->hours %= 24;
}
int main(){

       struct Time time1,time2,result;
         printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    addTime(time1, time2, &result);

    printf("Sum of the time periods: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);


}
