#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	string s ;
    cin>>s;
    sort(s.begin(), s.end());
    do{
		cout << s << '\n';
	}
    while(next_permutation(s.begin(), s.end()));
// https://www.cplusplus.com/reference/algorithm/next_permutation/    
	return 0;
}