#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int year = x/365;
    int month =(x-year*365)/30;
    int day =x-year*365-month*30;
    printf("%d nam\n%d thang\n%d ngay",year,month,day);
    return 0;
}