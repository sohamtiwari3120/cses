#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define ll long long
#define FOR(i, k, n) for (i = k; i < n; i++)
int main()
{
    int i;
    string arr;
    getline(cin, arr);
    int n = arr.length();
    unordered_map<char, int> umap;
    FOR(i, 0, n)
    {
        umap[arr[i]]++;
    }
    char result[n];
    i = 0;
    int flag = 1;
    if((n&1)==0)
    {
        i=0;
        for (auto x : umap)
        {
            if ((x.second % 2) != 0)
            {
                flag = 0;
                cout << "NO SOLUTION" << ln;
                break;
            }
            int copy = x.second / 2;
            while (copy > 0)
            {
                result[i] = x.first;
                result[(n - 1) - i] = x.first;
                i++;
                copy--;
            }
        }
    }
    else if((n&1)==1)
    {
        i=0;
        flag = 2;
        char odd;
        int odd_count = 0;
        for (auto x : umap)
        {
            if ((x.second % 2) != 0)
            {
                if(flag==2)
                {
                    flag=1;
                    odd=x.first;
                    odd_count = x.second;
                    continue;
                }
                else if(flag==1)
                {
                    flag = 0;
                    cout << "NO SOLUTION" << ln;
                    break;
                }
            }
            int copy = x.second / 2;
            while (copy > 0)
            {
                result[i] = x.first;
                result[(n - 1) - i] = x.first;
                i++;
                copy--;
            }
        }
        if(flag==1)
        {
            while(odd_count>0)
            {
                result[i]=odd;
                i++;
                odd_count--;
            }
        }

    }
    if (flag == 1)
    {
        FOR(i, 0, n)
            cout<<result[i];
        cout<<ln;
    }
    return 0;
}