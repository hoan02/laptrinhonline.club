#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int a[1005]={};
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a[x]++;
	}
	int max=0;
	for(int i=0;i<1000;i++){
		if(a[i]!=0 && a[i]>max) max=a[i];
	}
	for(int i=1000;i>0;i--){
		if(a[i]==max){
			cout << i;
			break;
		}
	}	
}