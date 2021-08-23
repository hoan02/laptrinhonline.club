#include<bits/stdc++.h> 
using namespace std; 
typedef long long LL; 
bool ktra() {   
    LL a,b;     
    scanf("%lld%lld",&a,&b);    
    LL x=round(pow(a*b,1.0/3));     
    return (x*x*x==a*b && a%x==0 && b%x==0); 
} 
int main() {   
    int n;  
    scanf("%d",&n);     
    while(n--) printf(ktra()?"Yes\n":"No\n"); 
}
