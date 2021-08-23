#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  x,y,a,b;cin>>x>>y>>a>>b;
	int max1=x>y?x:y;
	int max2=a>b?a:b;
	if((x+a==y||x+b==y||y+a==x||y+b==x)&&max1==max2) cout<<"YES";
	else cout<<"NO";
	return 0;
}