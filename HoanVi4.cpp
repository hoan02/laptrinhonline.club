#include<bits/stdc++.h>
using namespace std;

int n, d=0, a[25];

void xuat(vector<int>x){
	for(int i=0;i<x.size();i++){
		cout << x[i] << " ";
	}
	cout << "\n";
}
void Try(vector<int> x){
	if(x.size() == n){
		xuat(x);
		d++;
		return;
	}
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			if(x.size()==0 or (a[i]==0 and (x.back()+i)%4!=0)){
				x.push_back(i);
				a[i]=1;
				Try(x);
				a[i]=0;
				x.pop_back();
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	cin >> n;
	vector<int>x;
	Try(x);
	cout << d;
	return 0;
}