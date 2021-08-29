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
int quantidadeDias (char inpt[50]){
    int day, month, year, countDays=0, countYears=-2, sumLeapYears=0;
    sscanf(inpt,"%d %d %d",&day, &month, &year);
    for (int i = year; i <= 2020; i++)
    {
        countYears++;
        if (leapYear(i)==1)
        {
            sumLeapYears++;
        }
        

    }
    switch (month)
    {
    case 1:
        countDays+=334;
        countDays+=(31 - day);
        break;
    case 2:
        countDays+=306;
        countDays+=(28-day);
        break;
    case 3:
        countDays+=275;
        countDays+=(31-day);
        break;
    case 4:
        countDays+=245;
        countDays+=(30-day);
        break;
    case 5:
        countDays+=214;
        countDays+=(31-day);
        break;
    case 6:
        countDays+=184;
        countDays+=(30-day);
        break;
    case 7:
        countDays+=153;
        countDays+=(31-day);
        break;
    case 8:
        countDays+=122;
        countDays+=(31-day);
        break;
    case 9:
        countDays+=92;
        countDays+=(30-day);
        break;
    case 10:
        countDays+=61;
        countDays+=(31-day);
        break;
    case 11:
        countDays+=31;
        countDays+=(30-day);
        break;
    case 12:
        countDays+=(31-day);
        break;

    default:
        break;
    }
    countDays += (countYears*365)+sumLeapYears+261;
    if (year == 2020 && month>2)
    {
        countDays--;
    }
    
    return countDays;
}
int main(){
    char input1[50];
    while (fgets(input1,50,stdin)!=NULL)
    {
        printf("%d\n",quantidadeDias(input1));
    }
    
    return 0;
}