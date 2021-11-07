#include<bits/stdc++.h>
using namespace std;

int test(int x, int y){
	if(y==1){cout << x*2; return 0;}
	int sum = x;
	while(x >= y){
		sum += x/y;
		x = x/y + x%y; 
	}
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t, n, m, k;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        cout << test(n/m, k) << "\n";
    }
	return 0;
}