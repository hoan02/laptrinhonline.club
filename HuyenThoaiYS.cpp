#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt=0;
    cin >> n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-2;i++){
        if(a[i]==1 && a[i+1]==1 && (a[i+2]==0 || a[i+2]==1)){
            cnt++;
            i+=2;
        }
    }
    cout << cnt;
    return 0;
}