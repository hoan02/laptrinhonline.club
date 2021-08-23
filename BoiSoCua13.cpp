#include<stdio.h>
#include<math.h>
#define csc(a,b,d) ((b-a)/d+1)*(b+a)/2
int main()
{
    long long a,b,s,x,y;
    scanf("%lld%lld",&a,&b);
    if(a>b){x=b;y=a;
    }
    else{x=a;y=b;
    }
    s=csc(x,y,1);
    while(x%13) x++;
    while(y%13) y--;
    printf("%lld",s-csc(x,y,13));
    return 0;
}