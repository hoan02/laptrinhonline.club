#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	priority_queue<pair<int,int>, vector<int,int>, greater<pair<int,int>>> Q;
    //second: dinh
    //first: do dai tu xuat phat -> dinh
    int n, m, s;
    map<int,int> M;  // M[i]: do dai duong di ngan nhat tu xuat phat toi dinh
    cin >> n >> m;
    vector<pair<int,int>> A[n+5];
    //vd: A[1] = <(16,2),(14,4)> 
    for(int i=1;i<=m;i++){
        int u, v, w;
        A[u].push_back({w,v});
    }
    cin >> s; // dinh xuat phat
    for(int i=1;i<=n;i++) M[i]=1e9;
    M[s] = 0;
    Q.push({0,s});
    while(Q.size()){
        pair<int,int>u=Q.top(); Q.pop();
        if(M[u.second] < u.first) continue; // neu dinh da xet co duong di tot hon thi bo qua
        for(auto v:A[u.second]){
            if(u.first + v.first < M[v.second]){
                M[v.second] = u.first  + v.first;
                Q.push({u.first + v.first, v.second});
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(M[i]==1e9) cout <<"Khong di duoc";
        else cout << "\n" << s <<
    }


	return 0;
}