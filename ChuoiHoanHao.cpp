#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    map<char,int> A;
    for(char x:S) A[x]++;
    for(auto p:A){
        if(p.second % 2){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}