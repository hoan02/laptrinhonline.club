#include<bits/stdc++.h>
using namespace std;
map<int,int>A;
int main()
{
    int n,x,t=0,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(A[x]>t) t=A[x];
        if(cnt<i-t) cnt=i-t;
        A[x]=i;
    }
    printf("%d",cnt);
}