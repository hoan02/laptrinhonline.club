#include<bits/stdc++.h>
using namespace std;

void test(int n){
	for(int i=0;i<n;i++){
		cout << "*";
	}
	cout << "\n";
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		test(i);
	}
	return 0;
}