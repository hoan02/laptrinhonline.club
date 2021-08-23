#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int test(int a, int b){
	int count=0;
	int check[b-a+5];
	fill(check, check+b-a+5, 1);
	for(int i=2; i*i<=b; i++){
		for(int j=max(i*i, (a+i-1)/i*i); j<=b; j+=i){
			check[j-a]=0;
		}
	}
	if(1>=a) check[1-a]=0;
	for(int i=a; i<=b; i++){
		if(check[i-a]) count++;
	}
	return count;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int L[n+5], R[n+5];
	for(int i=0; i<n; i++){
		cin >> L[i] >> R[i];		
	}
	for(int i=0;i<n;i++){
		cout << test(L[i], R[i]) << endl;
	}
	return 0;
}