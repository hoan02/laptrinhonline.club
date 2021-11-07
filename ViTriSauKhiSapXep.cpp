#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> TT;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
    cin >> n;
    TT a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a, a+n);
    for(int i=0;i<n;i++) cout << a[i].second <<" ";
	return 0;
}