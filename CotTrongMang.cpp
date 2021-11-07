#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    double sum = 0;
    char S;
    cin >> n;
    cin >> S;
    double a[13][13];
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){	
            cin >> a[i][j];
            if(i==n) sum += a[i][j];	
		}	
	}	
    cout << setprecision(1) << fixed;
    if(S=='S') cout << sum;
    if(S=='M') cout << sum / 12;
	return 0;
}
