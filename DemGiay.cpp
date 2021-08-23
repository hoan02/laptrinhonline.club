#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, size;
	char side;
	unordered_map<int,int>left, right;
	cin >> n;	
	for(int i=0;i<n;i++){
		cin >> side >> size;
		if(side == 'L') left[size]++;
		else right[size]++;
	}
	int count=0;
	for(int i=0;i<=100;i++){
		count += min(left[i], right[i]);
	}
	cout << count;
}