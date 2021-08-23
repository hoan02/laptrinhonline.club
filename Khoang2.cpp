#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, count1=0, count2=0;
	cin >> n;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i]>=10 && a[i]<=20) count1++;
		else count2++;
	}
	cout << count1 << " trong\n";
	cout << count2 << " ngoai";
	return 0;
}