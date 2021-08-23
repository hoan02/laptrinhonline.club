#include<bits/stdc++.h>
using namespace std;

void tongle(int a,int b, int sum)
{
	if(a>b) swap(a,b);
	for(int i=a+1;i<b;i++){
		if(i%2!=0) sum+=i;
	}
	cout << sum << "\n";
}
int main()
{
	int n,a[100],b[100],sum=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> b[i];
	}
	for(int i=1;i<=n;i++){
		tongle(a[i],b[i],sum);
	}
	return 0;
}
