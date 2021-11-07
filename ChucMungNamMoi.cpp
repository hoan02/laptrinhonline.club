#include<bits/stdc++.h>
using namespace std;

void out(string s, int w)
{
    w=(w-s.length())/2;
    cout<<string(w,'-')+s+string(w,'-')<<endl;
}
int main()
{
    int n;
    string p,s;
    cin>>n>>p;
    s=p;
    for(int i=1;i<(n+1)/2;i++) 
    {
        out(s,3*n);
        s+=p+p; 
    }
    out("CHUC MUNG NAM MOI",3*n);
    for(int i=1;i<(n+1)/2;i++) 
    {
        s.resize(s.length()-6);
        out(s,3*n);
    }   
}