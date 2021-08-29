#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int leapYear(int year){
    int leap = 0;
    if (year%4==0 && year%100!=0)
    {
        leap = 1;
    }
    else if(year%400==0)
    {
        leap = 1;
    }   

    return leap;
}
int main (){
    int input;
    while (scanf("%d", &input)!=EOF)
    {   
        printf("%d\n",leapYear(input));
    }
    return 0;
}