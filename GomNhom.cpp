#include<bits/stdc++.h>
using namespace std;

int f[]={};

int main()
{
    int n, Max=0;
    cin >> n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(f[a[i]]+f[a[i]+1]>Max) Max=f[a[i]]+f[a[i]+1];
    }
    cout << Max;
    return 0;
}