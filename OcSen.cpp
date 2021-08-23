#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,h;
	cin >> a >> b >> h;
	if(h==a){
        cout << "1";
    }
    else{
        if((h-b)%(a-b)==0)
            cout << (h-b)/(a-b);
        else
            cout << (h-b)/(a-b)+1;
    }
    return 0;
}