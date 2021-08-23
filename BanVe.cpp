#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n;
	cin>>n;
	int sum1=0,sum2=0;
	while(n-->0){
		int a;
		cin>>a;
		if(a==25) sum1+=a;
		else{
			sum2+=a-25;
		}
	}
	if(sum1>=sum2) cout<<"YES";
	else cout<<"NO";
	return 0;
}