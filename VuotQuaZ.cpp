#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll a,b;
	cin >> a;
	while(b<=a){
		cin >> b;
	}
	ll sum=0,count=0;
	for(int i=a;i<=INT_MAX;i++,a++){
		sum+=a;
		count++;
		if(sum > b) break;
	}
	cout << count;
	return 0;
}