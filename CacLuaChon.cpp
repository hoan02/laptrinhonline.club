#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    map<double,string> M;
    for(int i=1;i<=n;i++)
    {
        string s;
        double x;
        cin >> s >> x;
        if(x>=8) M[x]=s;
    }
    if(!M.empty()) cout << M.rbegin()->second;
    else cout << "Diem toi thieu khong dat";
    return 0;
}