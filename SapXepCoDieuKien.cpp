#include<bits/stdc++.h>
using namespace std;

struct Cmp{
    bool operator()(int a ,int b){
        return a%3==b%3?a>b:a%3>b%3;
    }
};

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    priority_queue<int, vector<int>, Cmp> A;
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        A.push(x);
    }
    while(!A.empty()){
        cout << A.top() << " ";
        A.pop();
    }
    return 0;
}