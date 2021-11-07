#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int a[N];
int tree[N*4];   //da chung minh max la 4*n

void buildTree(int id, int l, int r){
	if(l == r){
		tree[id] = a[l]; // left hay right deu duoc
		return;
	}
	
	int m = (l + r)/2;
	buildTree(id*2, l, m);
	buildTree(id*2+1, m+1, r);
	tree[id] = (tree[id*2]>tree[id*2+1])?tree[id*2]:tree[id*2+1];
}

int getVal(int id, int l, int r, int u, int v){
	if(u > r || v < l) return -1000005;  //ko tra loi dc max nen phai cho ve gia tri nho de so sanh
	if(u <= l && r <= v) return tree[id];
	int m = (l + r)/2;
	return max(getVal(id*2, l, m, u, v), getVal(id*2+1, m+1, r, u, v));	
}


int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, t;
	cin >> n >> t;
	for(int i=1; i<=n; i++) cin >> a[i];
	buildTree(1, 1, n);
	while(t--){
		int x, y;
		cin >> x >> y;
		cout << getVal(1, 1, n, x, y) <<"\n";
	}
	return 0;
}