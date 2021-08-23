#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[20];
	cin >> a;
	int n=strlen(a), check=0;
	for(int i=0;i<=n/2;i++){
		if(a[i]!=a[n-1-i]){
			check++;
			cout << "NO";
			break;
		}
	}
	if(!check) cout << "YES";
	return 0;
}