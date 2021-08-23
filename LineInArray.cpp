#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double a[13][13], sum=0;
    char x[3];
    scanf("%d", &n);
    scanf("\n%c", &x);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<12;i++){
        sum+=a[n][i];
    }
    if(strcmp(x,"M")==0) sum/=12;
    printf("%.1lf", sum);
    return 0;
}