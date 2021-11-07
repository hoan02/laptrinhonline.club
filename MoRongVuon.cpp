#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, n, t, c;
    cin >> s >> n >> t;
    c = t/n - n;
    for(int i=1;i<c+1/2;i++){
        if(i*(c-i) == s){
            cout << c-i <<" "<< i;
            break;
        }
    }
	return 0;
}