#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int x;
    cin >> x;
    while(x--){
        string name[]={"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"};
        queue<pair<string,int>> Q;
        for(string x:name) Q.push({x,1}); //khoi dan tan suat = 1
        int n;
        cin >> n;
        while(n>Q.front().second){  // n>tan suat
            Q.push(Q.front());      // dau -> cuoi
            Q.back().second*=2;     // cuoi *2
            n-=Q.front().second;    // giam n theo front
            Q.pop();
        }
        cout << Q.front().first <<"\n";
    }
    return 0;
}