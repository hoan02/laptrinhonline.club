#include<bits/stdc++.h>
using namespace std;

void test(int a, int b){
	int sum=0;
	for(int i=a;i<=b;i++){
		cout << i << " ";
		sum+=i;
	}
	cout << "Tong=" << sum << endl;
}

int main()
{
	int a[1000],b[1000],d=0;
	for(int i=0;i<=1000;i++){
		cin >> a[i] >> b[i];
		if(a[i]>b[i]) swap(a[i],b[i]);
		if(a[i]<=0) break;
		d++;
	}
	for(int i=0;i<d;i++){
		test(a[i],b[i]);
	}
	return 0;
}