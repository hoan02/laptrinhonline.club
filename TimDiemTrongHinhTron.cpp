#include<bits/stdc++.h>
using namespace std;

void gpt(double a, double b, double f(double)){
    double eps =  1e-8;     // sai so ->8
    while(b - a >= eps){
        double c = (a + b) / 2;
        f(a) * f(b) <= 0 ? b = c : a = c;
    }
    cout << setprecision(8) << fixed << (a + b) / 2;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	gpt(3, 3.5 , sin);

    
	return 0;
}