#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+5], x[n+5];
    fill(x, x+n+5, -1);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                x[i] = j;
                goto
            }
        }
    }
    for(int i=0;i<n;i++) cout << x[i] << " ";
    return 0;
}