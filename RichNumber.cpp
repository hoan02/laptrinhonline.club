#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, sum=0;
	cin >> a;
	if(a<1){
		cout << "Poor Number";
		return 0;
	}
	for(int i=1;i<a;i++){
		if(a%i==0) sum+=i;
	}
	if(sum>a) cout <<"Rich Number";
	else cout <<"Poor Number";
	return 0;
}