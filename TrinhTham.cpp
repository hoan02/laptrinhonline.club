//https://utcedu.sharepoint.com/sites/KHM05.3-1-1-21.N24/Shared%20Documents/Forms/AllItems.aspx?id=%2Fsites%2FKHM05%2E3%2D1%2D1%2D21%2EN24%2FShared%20Documents%2FGeneral%2FRecordings%2FBai%207%2E%20danh%20sach%20lien%20ket%20%28tiep%29%2D20211008%5F094815%2DMeeting%20Recording%2Emp4&parent=%2Fsites%2FKHM05%2E3%2D1%2D1%2D21%2EN24%2FShared%20Documents%2FGeneral%2FRecordings&p=true&originalPath=aHR0cHM6Ly91dGNlZHUuc2hhcmVwb2ludC5jb20vOnY6L3MvS0hNMDUuMy0xLTEtMjEuTjI0L0VYXzRLWm9uMzh4S3RORzdNcTZKaFRRQmNIcEVOaEpQZk5CZXVkcVFIbDJLelE_cnRpbWU9VVJiZ3A5eUsyVWc
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	list<int> L;
    int n, k;
    cin >> n >> k;
    int a[n+5];
    for(int i=1;i<=n;i++){
        cin >> a[i];
        while(L.size() && L.back().second <= x) L.pop_back();
        L.push_back({i, x});
        if(i - L.front().first >= k) L.pop_front();
        if(i >= k) cout << L.front().second << " ";
    }
    return 0;
}