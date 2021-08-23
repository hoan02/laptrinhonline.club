#include<bits/stdc++.h>
using namespace std;
map<int,int> M;
int main()
{
    int n,x,t=0,res=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(M[x]>t) t=M[x];
        if(res<i-t) res=i-t;
        M[x]=i;
    }
    printf("%d",res);
}