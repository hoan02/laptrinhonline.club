#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, cnt=0;
	cin >> n >> m;
	
	if(n<=0){
		cout << "ERROR";
		return 0;
	}
	int x = m;
	while(x>n){
	    if(x%2==0){
		    x /= 2;
	    	cnt++;
//			cout << " * ";
	    }
	    else{
	        x++;
	        cnt++;
//			cout << " - ";
	    }
	}
	cout << n - x + cnt;
	return 0;
}