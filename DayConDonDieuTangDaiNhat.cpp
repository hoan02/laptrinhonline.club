#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
    int n;
    cin >> n;
    int arr[4005]={},F[4005]={};
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
        F[i] = 1;
        for(int j=i-1; j>=1; j--)
        {
            if(arr[i]>arr[j])
            {
                F[i]=max(F[i], F[j]+1);
            }
        }
    }
    
    int cnt = 1;
    for(int i=1; i<=n; i++)
        if (F[i] >= cnt)
            cnt = F[i];
    cout << cnt;
    return 0;
}