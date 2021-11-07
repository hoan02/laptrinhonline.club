#include <iostream>
using namespace std;
class gfg {
}
public:
    unsigned int countSetBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};
/* Program to test function countSetBits */
int main()
{
    gfg g;
    long long n, sum=0;
    cin >> n;
    while(n)
    {
        sum += g.countSetBits(n);
        n--;
    }
    cout << sum;
    return 0;
}