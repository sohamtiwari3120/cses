#include<bits/stdc++.h>
using namespace std;
#define FOR(i, k, n) for(i=k;i<n;i++)
#define ln "\n"
typedef long long ll;
int main()
{
    int t;
    ll x, y;
    cin>>t;
    ll result[t];
    int i = 0;
    while(t>0)
    {
        cin>>y>>x;
        if(y>x)
        {
            if((y&1)==0)
            {
                result[i]=(y*y)-(x-1);
            }
            else
            {
                result[i]=(y-1)*(y-1)+1+(x-1);
            }

        }
        else
        {
            /* code */
            if((x&1)==1)
            {
                result[i]=x*x-(y-1);
            }
            else
            {
                result[i]=(x-1)*(x-1)+1+(y-1);
            }

        }
        t--;
        i++;
    }
    t=i;
    FOR(i, 0, t)
        cout<<result[i]<<ln;
    return 0;
}