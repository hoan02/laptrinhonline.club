#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a[n+5]={0,1,2,4};
    for(int i=4;i<=n;i++){
    	a[i] = a[i-1] + a[i-2] + a[i-3];
	}
	cout << a[n];
    return 0;
}
