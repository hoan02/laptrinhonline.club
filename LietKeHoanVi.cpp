#include<bits/stdc++.h>
#define MAX 20
#define endl "\n"
using namespace std;
 
int n;
int Bool[100]={0};
int A[100];
 
void Try(int k) {
    for (int i=1;i<=n;i++) {
        if (!Bool[i]) {
            A[k] = i;
            Bool[i] = 1; // danh dau
            if (k == n){
            	for(int i=1;i<=n;i++){
        			cout << A[i];
        		}
        		cout << endl;	
			}  
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}
 
int main() {
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);	
    cin >> n;
    Try(1);
    return 0;
}