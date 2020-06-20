#include<iostream>
using namespace std;
#define FOR(i, k, n) for(i=k;i<n;i++)
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int i;
    ll total = (ll)n*(n+1)/2;
    ll sum = 0;
    int temp;
    FOR(i, 0, n-1)
    {
        cin>>temp;
        sum+=temp;
    }
    cout<<total-sum<<endl;
}