#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n, x;
	cin >> n;
    map<int,bool> A;
    while(n--){
        cin >> x;
        if(A[x] == false){
            cout << x << " ";
            A[x] = true;
        }
    }
	return 0;
}