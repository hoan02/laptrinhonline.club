#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    if(n<0) cout << "ERROR";
    else cout << double(n*0.5) + int(n/50)*5;
	return 0;
}