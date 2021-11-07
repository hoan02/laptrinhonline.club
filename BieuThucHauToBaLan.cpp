#include<bits/stdc++.h>
using namespace std;
map<char,int> ut={{'*',2},{'/',2},{'+',1},{'-',1},{'(',0}};
int f(int a,int b, char o) 
{
	if(o=='+') return a+b;
	if(o=='-') return a-b;
	if(o=='*') return a*b;
	if(o=='/') return a/b;
}
int main()
{
	string x,h;
	stack<char> S;
	getline(cin,x);
	for(char c:x)
	if('0'<=c && c<='9')  h+=c; 
	else if(c=='(') S.push(c); 
	else if(ut.find(c)!=ut.end()) 
	{
		while(S.size() && ut[S.top()]>=ut[c]) {h+=S.top();S.pop();}
		S.push(c);
	}
	else //c==')'
	{
		while(S.top()!='(') {h+=S.top();  S.pop();}	
		S.pop();
	}
	while(S.size()) {h+=S.top(); S.pop();}
	cout<<h<<"\n";
	stack<int> O;
	for(auto c:h)
	if('0'<=c && c<='9') O.push(c-'0'); 
	else
	{
		int k=O.top(); O.pop();
		O.top()=f(O.top(),k,c);
	}
	cout<<O.top();
}