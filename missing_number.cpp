#include<iostream>
using namespace std;
#define FOR(i, k, n) for(i=k;i<n;i++)
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int i;
    ll total = n*(n+1);
    ll sum = 0;
    int temp;
    cout<<n+1<<endl;
    cout<<total<<endl;
    FOR(i, 0, n-1)
    {
        cin>>temp;
        sum+=temp;
    }
    cout<<total-sum<<endl;
}