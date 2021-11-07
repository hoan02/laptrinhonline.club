#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int x, y;
	cin >> x >> y;
	if(y==1){cout << x*2; return 0;}
	int sum = x;
	while(x >= y){
		sum += x/y;
		x = x/y + x%y; 
	}
	cout << sum;
	return 0;
}