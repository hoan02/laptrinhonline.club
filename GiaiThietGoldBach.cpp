#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check[100005]={false};   // false - so nto     
                        // true - ko la so nto

vector<ll> Save;
ll n;

void sang(ll n){
    for(ll i = 2; i <= n; i++){
        if(!check[i]){
            Save.push_back(i);
            for(ll j=i*i; j<=n; j+=i){
                check[j]=true;
            }
        }            
    }
}

void sol(){
    ll m = Save.size(), cnt = 0;
    for(ll i = 0; i < m; i++){
        for(ll j = i; j < m; j++){
            ll x = n - Save[i] - Save[j];
            if(x >= Save[j] and !check[x]){
                cnt++;
            }
        }
    }
    cout << cnt;    
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    sang(n);
    sol();
    
	return 0;
}