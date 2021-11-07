#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, cnt;
    cin >> n >> k;
    cnt = k;
    for(int i=1;i<n;i++) {
        cnt *= k-1;
    }
    cout << cnt;
    return 0;
}