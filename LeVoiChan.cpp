#include<bits/stdc++.h>
using namespace std;
int f[2000005], *F=f+1000000;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, x;
    cin >> n;
    int a[n+5]={0};
    for(int i=1; i<=n; i++){
        cin >> x;
        a[i] = a[i-1]+(x%2?-1:1);
    }
    long long cnt=0 ,t=1, u=0;
    F[0]=1;
    for(int i=1; i<=n; i++){
        while(u < a[i]){
            u++;
            t += F[u];
        }
        while(u > a[i]){
            t -= F[u];
            u--;
        }
        cnt += t;
        t++;
        F[a[i]]++;
    }
    cout << cnt;
	return 0;
}