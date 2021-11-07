#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, k , x;
    cin >> n;
    vector<int>a(n+5);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> k >> x;
    a.insert(a.begin() + k, x);
    for(int i=0;i<=n;i++){
        cout << a[i] << " ";
    }
	return 0;
}