// boi chung nho nhat
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    ll a,b;
    cin >> n >> a;
    n--;
// tim BCNN cua tung so tu a[n-1] -> a[1] voi a[0]
// moi vong while gan a[0] = BCNN cua chung
    while(n--)
    {
        cin >> b;
        ll x=__gcd(a,b);// UCLN
        a*=b/x;
    }
   	cout << a;
}