//  by TICHPX
//  https://ideone.com/h2hTA3?fbclid=IwAR1fwlGmYZX0WrooM4q8xqAkQBVjwODTe2YxMDiIMoZ5SchBZIAQePzn4YI

#include<bits/stdc++.h>
using namespace std;

int leap_year(int y)
{
    return y%400==0 or (y%100!=0 && y%4==0);
}

class day
{
    int d, m, y;
    friend istream &operator>>(istream &is, day &p)
    {
        char c;          // de luu dau '/'
        cin >> p.d >> c >> p.m >> c >> p.y;
        return is;
    }
    friend ostream &operator<<(ostream &os, day p)
    {
        os << p.d << "/" << p.m << "/" << p.y;
        return os;
    }
    friend day operator++(day &X)
    {
        int t[]={0,31,28+leap_year(X.y),31,30,31,30,31,31,30,31,30,31};
		if(X.d==t[X.m]) {X.d=1;X.m++;} else X.d++;
		if(X.m==13) {X.m=1;X.y++;}
		return X;
    }
};


int main()
{
    day X;
    int n;
    cin >> X >> n;
    while(n--)
    {
        ++X;
        cout << X << "\n";
    }
    return 0;
}