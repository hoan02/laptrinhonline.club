//Tichpx
//Best First Search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,q,MAX=1e4+1;
    cin>>n>>q;
    int a[n]; for(int &x:a) cin>>x; sort(a,a+n,greater<int>());
    map<int,int> M;
    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > Q;
    Q.push({0,0}); 
    M[0]=0;
    while(Q.size())
    {
        int u=Q.top().second, v=Q.top().first; Q.pop();
        for(int x:a)
        if(x+u<MAX && M.find(x+u)==M.end())
        {
            M[x+u]=v+1;
            Q.push({v+1,x+u});
        }
    }
    while(q--)
    {
        int z;  cin>>z;
        if(M.find(z)==M.end()) M[z]=-1;
        cout<<M[z]<<"\n";
    }   
    return 0;
}