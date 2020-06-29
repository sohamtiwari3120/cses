#include<iostream>
#define MOD 1000000007
#define ln "\n"
#define ll long long
using namespace std;
int main()
{
    //using modular exponention
    // if n is even, x^n = (x^2)^(n/2)
    // if n is odd, x^n=x.x^(n-1)=x.(x^2)^((n-1)/2)
    ll x = 2;
    int n;
    cin>>n;
    ll result = 1;
    while(n>0)
    {
        if((n&1)==1)
            result = (result*x)%MOD;
        // n=n/2;
        n=n>>1;
        x = ((x*x))%MOD;
    }
    cout<<result<<ln;
}