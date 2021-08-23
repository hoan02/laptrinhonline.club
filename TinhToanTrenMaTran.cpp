#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n+1][m+1];
	int sum[n+1]={};
	int max[m+1];
	fill(max,max+m+1,0);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
			sum[i]+=a[i][j];
			if(a[i][j]>max[j]) max[j]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		cout << sum[i] << " ";
	}
	cout << endl;
	for(int j=1;j<=m;j++){
		cout << max[j] << " ";
	}
	double SUM=0;
	int cnt=0;
	for(int i=2;i<=n;i+=2){
		for(int j=1;j<=m;j+=2){
			if(a[i][j]%3==0){
				SUM+=a[i][j];
				cnt++;
			}
		}
	}
	cout << endl;
	printf(cnt?"%.3lf":"khong co so thoa man", SUM/cnt);
	return 0;
}
