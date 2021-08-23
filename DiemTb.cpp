#include<bits/stdc++.h>
using namespace std;

struct sv
{
	char ten[30];
	int diem;
};

int main()
{
	int n;
	sv A[105];
	scanf("%d",&n);
	double tong=0;
	for(int i=1;i<=n;i++)
	{
	cin>>A[i].ten>>A[i].diem;	
	tong += A[i].diem;
	}
	printf("DIEM TRUNG BINH %0.1lf\n",tong/n);
	for(int i=1;i<=n;i++)
		if(A[i].diem>=(tong/n)) printf("%s %d\n",A[i].ten,A[i].diem);
	return 0;
}