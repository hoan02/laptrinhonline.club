#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, sum=0;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++){
    	cin >> a[i];
	}	
	for(int i=0;i<n-1;i++){
   	 	for(int j=i+1;j<n;j++){
       	 	sum+=abs(a[i]-a[j]);
   	 	}
	}
	cout << sum;
    return 0;
}