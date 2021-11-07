#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    map<string,bool> M;
    int n;
    getline(cin,s);
    cin>>n;
    while(n--) {cin>>x; M[x]=true;}
    stringstream si(s);
    while(si>>x) cout<<(M[x]?string(x.size(),'*'):x)<<" ";
}