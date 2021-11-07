#include<bits/stdc++.h>
using namespace std;

map<char,int> M={{'C',12},{'H',1},{'O',16},{'(',0}};

int main()
{
    int n;
    cin >> n;
    while(n--){
        stack<int> S;
        string s;
        cin >> s;
        for(char c:s){
            if(M.find(c)!=M.end()){
                S.push(M[c]);
            }
            else if(c==')'){
                int sum=0;
                while(S.top()){
                    sum+=S.top();
                    S.pop();
                }
                S.top()=sum;
            }
            else{
                S.top()*=c-'0';
            }
        }
        int SUM=0;
        while(S.size()){
            SUM+=S.top();
            S.pop();
        }
        cout << SUM <<"\n";
    }
    return 0;
}