#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ln "\n"
#define FOR(i, k, n) for(i=k; i<n; i++)
int noOfFactors(int n, int a)
{
    int ctr = 0;
    while(n>0 && n%a==0)
    {
        n/=a;
        ctr++;
    }
    return ctr;
}
int main()
{
    int n;
    // ll twos=0;
    ll fives=0;
    cin>>n;
    int i;
    //in the factorial of any number there are always more twos than 5s
    // FOR(i, 2, n+1)
    // {
    //     if(((i%2)!=0)&&((i%5)!=0))
    //         continue;
    //     // twos+=noOfFactors(i, 2);
    //     fives+=noOfFactors(i, 5);
    // }


    //better method 1
    // for(i=5;i<n+1;i+=5)
    //     fives+=noOfFactors(i, 5);


    //BEST METHOD!!
    i=5;
    while(n/i>=1)
    {
        fives+=n/i;
        i*=5;
    }
    cout<<fives<<ln;
    return 0;
}