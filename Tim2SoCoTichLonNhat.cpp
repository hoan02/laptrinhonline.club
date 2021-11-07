#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n+5], x, y;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    x = a[0]*a[1];
    y = a[n-1]*a[n-2];
    if(y>=x) cout << y;
    else cout << x;
    return 0;
}