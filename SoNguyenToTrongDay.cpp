#include<bits/stdc++.h>
using namespace std;

int ktNguyenTo(int n){
    if(n<2) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n % i ==0) return 0;
        }
    }
    return 1;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        if(ktNguyenTo(a[i])) cout << a[i] << " ";
    }
	return 0;
}