#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, t, sum=0;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> t;
        sum += t/k;
    }
    cout << sum*k*3;
    return 0;
}