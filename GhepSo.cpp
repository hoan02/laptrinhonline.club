#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
    string x = a+b, y = b+a;
	int n = x.length();
    for(int i=0;i<n;i++){
        if(x[i] > y[i]){
            cout << y << "\n" << x;
            break;
        }
    }
    cout << x <<"\n" << y;
	return 0;
}
