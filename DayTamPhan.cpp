#include<bits/stdc++.h>
using namespace std;

int n, d=0;

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
	for(int i=0;i<3;i++){ // 0 1 2
		if(x.size()==0 or (x.back()!=i and (x.back()+i)%3!=0)){
			x.push_back(i);
			Try(x);
			x.pop_back();
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