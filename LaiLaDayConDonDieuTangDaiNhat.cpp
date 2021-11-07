#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    int a[100005], b[100005];
	cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
	int res= 1;
    b[1]= a[1];	
	for(int i=2; i<=n; i++){
// Tại mỗi lần lặp, dùng hàm lower_bound (hàm tìm kiếm nhị phân) tìm kiếm vị trí thích hợp (pos)
// để đặt a[i] vào mảng b nhằm đảm bảo rằng tại mỗi pos sẽ có một phần tử nhỏ nhất là đuôi của dãy con tăng có độ dài pos.    
		int pos= lower_bound(b+1, b+1+res, a[i]) - b;		
		b[pos]= a[i];
		res= max(res, pos);
	}	
	cout << res;
    return 0;
}