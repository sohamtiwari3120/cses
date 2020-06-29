#include<iostream>
using namespace std;
#define ll long int
void recursive(ll n)
{
    while(n!=1)
    {
        cout<<n<<" ";
        if((n&1)==1)
            n=3*n+1;
        else
        {
            n/=2;
        }
        
    }
    cout << n << " ";
}
int main()
{
    ll n;
    cin>>n;
    recursive(n);
    return 0;
}