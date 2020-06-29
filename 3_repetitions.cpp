#include<iostream>
using namespace std;
#define FOR(i, k, n) for(i=k; i<n; i++)
#define ll long long int
int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    int i=0;
    int max_freq=1;
    int freq=1;
    FOR(i, 1, n)
    {
        if(s[i]==s[i-1])
            freq+=1;
        else
        {
            if(max_freq<freq)
                max_freq=freq;
            freq=1;
        }
    }
    if(max_freq<freq)
        max_freq=freq;
    cout<<max_freq<<endl;
    return 0;
}