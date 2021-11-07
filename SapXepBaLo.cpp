#include<bits/stdc++.h>
using namespace std;

int dp[105][10005]; 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, q;
	cin >> n;
	int w[n+5], v[n+5];
	for(int i=1;i<=n;i++) cin >> w[i] >> v[i]; 
	cin >> q;   
    for(int i=0;i<=n;i++){
    	for(int j=0;j<=10005;j++){
    		if(!i or !j){
    			dp[i][j] = 0;
			}
/*xet lay vat*/
			else if(w[i] <= j){    
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
/*khong xet lay vat*/			
			else{
				dp[i][j] = dp[i-1][j];
			}                    
		}
	}
    int x;
    while(q--){
		cin >> x;
		cout << dp[n][x] << "\n";
	}  
    return 0; 
}
