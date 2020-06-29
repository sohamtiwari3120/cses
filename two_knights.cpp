#include<bits/stdc++.h>
using namespace std;
#define FOR(i, k, n) for(i=k; i<n; i++)
typedef long long ll;
#define ln "\n"
int main()
{
    int n;
    cin>>n;
    ll result[n];
    int i;
    result[0]=0;//k=1
    result[1]=6;//k=2
    int ctr = 0;
    FOR(i, 3-1, n)
    {
        int k = i+1;
        ll sq = k*k;
        ctr += k - 2;
        result[i]=(ll)(sq*(sq-1)/2)-8*(ctr);
    }
    FOR(i, 0, n)
        cout<<result[i]<<ln;
    return 0;
}
// for k>=3
// result <- k*2C2 - 8 * (ctr+k-2)