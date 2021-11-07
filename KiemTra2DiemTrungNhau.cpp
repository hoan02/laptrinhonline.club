#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>Point;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
    cin >> n;
    Point A[n+5];
    map<Point,int> M;
    for(int i=0;i<n;i++){
        cin >> A[i].first >> A[i].second;
        M[A[i]]++;
    }
    for(auto p:M){
        if(p.second>1){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
	return 0;
}