#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    double t, s, p;
    cin >> t >> s >> p;
    double x = t/s, ls = 1 + p*0.01, l = 1;
    int cnt = 0;
    while(l < x){
        l *= ls;
        cnt++;
    } 
    cout << cnt;
	return 0;
}