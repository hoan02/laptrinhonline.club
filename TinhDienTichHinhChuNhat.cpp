#include <stdio.h>
int main()
{
    int cv, dc;
    scanf("%d%d", &cv, &dc);
    printf("%d", (cv*cv/4-dc*dc)/2);
}