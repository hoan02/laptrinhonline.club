#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> V(1,1);
    while(n>1){
        int nho = 0;
        for(int &x:V){
            nho += x * n;
            x = nho % 10;
            nho /= 10;
        }
        while(nho){
            V.push_back(nho%10);
            nho /= 10;
        }
        n--;
    }
    for(auto it=V.rbegin(); it!=V.rend(); it++){
        cout << *it;
    }
    return 0;
}