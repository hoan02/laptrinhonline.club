#include<bits/stdc++.h>
using namespace std;
class test{
private:
		
public:
	int a, b;
    void getInfo(){
        cin >> a >> b;
    }
    void change(){
        cout << __gcd(a,b) <<" "<< a*b/__gcd(a,b);
    }
};

int main(){
    test t;
    while(1){
        t.getInfo();
        if(t.a==0 || t.b==0) return 0;
        t.change();
        cout << endl;
    }
    return 0;
}