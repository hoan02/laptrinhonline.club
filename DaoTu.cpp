#include<stdio.h>
char x[10005][100];
int main()
{
    int n=0;
    while(scanf("%s",x[n++])!=EOF);
    for(n--;n>=0;n--) printf("%s ",x[n]);
}