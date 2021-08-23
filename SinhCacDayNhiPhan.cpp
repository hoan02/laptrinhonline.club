#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
void quayLui(string x){
	if(n==x.length()){
		cout << x << endl;
	}
	else{
		quayLui(x+"0");
		quayLui(x+"1");
	}
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	cin >> n;
	quayLui("");
	return 0;
}