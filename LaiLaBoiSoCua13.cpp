#include<bits/stdc++.h>
#define csc(a,b,d) ((b-a)/d+1)*(b+a)/2

using namespace std;

int main()
{
    long long a,b,s;
    scanf("%lld %lld",&a,&b);
    if(a>b) swap(a,b);
    s=csc(a,b,1);
    while(a%13) a++;
    while(b%13) b--;
    printf("%lld",s-csc(a,b,13));
    return 0;
}