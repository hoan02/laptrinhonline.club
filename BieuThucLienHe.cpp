#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,r;
	scanf("%d%d",&a,&b);
	for(r=0;r<fabs(b);r++){
		if((a-r)%b==0){
			printf("%d %d",(a-r)/b,r);
			break;
		}
	}
}