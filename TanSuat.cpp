#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int n,x;
    int a[4005],*p=a+2000;
    fill(a,a+4005,0);
    cin>>n;
    for(int i=1;i<=n;i++){
		cin>>x;
		p[x]++;
	}
    for(int i=1;i<=2000;i++){
    	if(p[i])
			cout << i << " xuat hien " << p[i] << " lan" << endl;
	}
	return 0;
}