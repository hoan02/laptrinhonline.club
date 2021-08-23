#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	vector<int>a;
	int x;
	double sum=0;
	while(true){
		cin >> x;
		if(x<0) break;
		a.push_back(x);
		sum+=x;
	}
	cout << roundf(sum/a.size()*100)/100;	
	return 0;
}