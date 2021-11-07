#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct node{
    int elem;
    vector<node *> child;
    node(int n){  //tao ra cay
        elem = n;
        for(int i=1; i*i<=n; i++){
            if(n%i==0) child.push_back(new node((i-1)*(n/i+1)));
        }
    }
};

void inOrder(node *v){
    if(!v) return;
    if(v->child.size()) inOrder(v->child[0]);
    cout << v->elem << " ";
    for(int i=1; i<v->child.size(); i++) inOrder(v->child[i]);
}

void preOrder(node *v){
    if(!v) return;
    cout << v->elem << " ";
    for(auto p:v->child) preOrder(p);
}

void postOrder(node *v){
    if(!v) return;
    for(auto p:v->child) postOrder(p);
    cout << v->elem << " ";
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    node *T = new node(n);
    preOrder(T); cout << endl;
    inOrder(T); cout << endl;
    postOrder(T);
    return 0;
}