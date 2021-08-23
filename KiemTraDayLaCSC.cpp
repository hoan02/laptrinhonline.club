#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int  a[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    int csc=1;
    int cs=a[2]-a[1];
    for(int i=3;i<=n;i++) if(a[i]-a[i-1]!=cs) csc=0;
    if(csc)printf("\nDay la day cap so cong voi cong sai %d",cs); else printf("\nDay khong la day cap so cong");
}