#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void test(int x){
	if(x==1){
		cout << "1/1";
		return;
	}
	else{
		ll t=1, m=1;
		for(int i=2;i<=x;i++){
			t=t*i+m;
			m*=i;
			ll UCLN=__gcd(t,m);
			t/=UCLN;
			m/=UCLN;
		}
	cout << t << "/" << m;	
		
	}
}
	
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		test(a[i]);
		cout << endl;
	}
	return 0;
}