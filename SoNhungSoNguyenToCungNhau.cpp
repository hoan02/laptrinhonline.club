#include<bits/stdc++.h>
using namespace std;

int phi(int x) {
    int res = x;
    for (int i=2; i*i<=x;i++){
        if (x%i==0) {
            while(x%i==0) {x /= i;}
            res -= res/i;
        }
    }
    if (x!=1) res -= res/x;
    return res;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        cout << phi(x) << "\n";
    }
	return 0;
}