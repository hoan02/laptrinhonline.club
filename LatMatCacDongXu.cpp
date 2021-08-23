#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n+1]={};	//0-ngua, 1-xap
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j+=i) a[j]=1-a[j];
		}
		int d=0;
		for(int i=1;i<=n;i++) d+=a[i]==0;
		printf("%d\n",d);
	}
}