#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[0]=='0' && s[9]!='4' && s[9]!='7' && s[9]!='9') cout << "YES";
    else cout << "NO";
    return 0;
}