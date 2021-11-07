//Can bang 2 ve, lay max Left
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, x;
    priority_queue<int> L;
    priority_queue<int, vector<int>, greater<int>> R;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        i%2?L.push(x):R.push(x);
        if(i>1 && L.top() > R.top()){     //swap L.top <-> R.top
            L.push(R.top()); R.pop();
            R.push(L.top()); L.pop();
        }
        cout << L.top() << " ";
    }
	return 0;
}