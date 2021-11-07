#include<bits/stdc++.h>
using namespace std;

bool check(string &s){
    int tmp = 0;
    for(int i=0;i<s.length();i++){
        tmp *= 10;
        tmp += s[i] - '0';
        tmp %= 11;
    }
    return tmp == 0;
}

int main()
{
   
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}