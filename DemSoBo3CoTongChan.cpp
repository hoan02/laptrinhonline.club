#include<bits/stdc++.h>
using namespace std;

long C(int n, int k){
    long x=1;
    for(int i=1; i<=k; i++, n--)
        x = x*n/i;
    return x;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n, x, a=0, b=0; // a-le   b-chan
	cin >> n;
	while(n--){
        cin >> x;
		x%2?a++:b++;
    }
    cout << C(b, 3) + b*C(a, 2);
	return 0;
}