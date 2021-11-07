#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, p, a, b;
    cin >> n >> p;
    a = p/2;
    b = n/2 - p/2;
    if(a<b) cout << a;
    else cout << b;
    return 0;
}