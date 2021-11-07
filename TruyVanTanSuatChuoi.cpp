#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	map<string, int>m;
	int n; cin>>n; 
	for(int i=0; i<n; i++){
		string s; 
		cin >> s;
		m[s]++; 
	}
	int k; 
    cin>>k;
	for(int i=0; i<k; i++){
		string x; 
		cin >> x; 
		cout << m[x] << "\n";
	} 
	return 0;
}