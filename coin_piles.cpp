#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define ll long long
int main()
{
    int t, a, b;
    cin >> t;
    string result[t];
    while (t > 0)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            cout << "YES" << ln;
            t--;
            continue;
        }
        if (a == 0 || b == 0)
        {
            cout << "NO" << ln;
            t--;
            continue;
        }
        if(abs(a-b)>max(a, b)/2)// (3, 9) should be false, but (6, 9) should be true
        {
            cout << "NO" << ln;
            t--;
            continue;
        }
        ll temp = (ll)(a) + (ll)(b);
        temp %= 3;
        if (temp == 0)
            cout << "YES" << ln;
        else
        {
            cout << "NO" << ln;
        }

        t--;
    }
    return 0;
}