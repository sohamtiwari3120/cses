#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define ll long long
#define FOR(i, k, n) for (i = k; i < n; i++)
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    vector<ll> set1, set2;
    FOR(i, 0, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // FOR(i, 0, n)
    // cout << arr[i] << " ";
    // cout << ln;

    int copy = n-1;
    set1.push_back(arr[copy--]);

    ll sum1 = 0, sum2 = 0;

    while (copy >= 0)
    {
        sum1 = accumulate(set1.begin(), set1.end(), 0);
        sum2 = accumulate(set2.begin(), set2.end(), 0);
        if (sum1 > sum2)
            set2.push_back(arr[copy--]);
        else
            set1.push_back(arr[copy--]);
    }

    sum1 = accumulate(set1.begin(), set1.end(), 0);
    sum2 = accumulate(set2.begin(), set2.end(), 0);
    cout << "set1" << ln;
    for (auto it = set1.begin(); it != set1.end(); it++)
        cout << *it << " ";
    cout << ln;
    cout << "set2" << ln;
    for (auto it = set2.begin(); it != set2.end(); it++)
        cout << *it << " ";
    cout << ln;
    cout<<"difference  : "<<abs(sum1-sum2)<<ln;
    // cout<<abs(sum1-sum2)<<ln;
    return 0;
}
// 1 10 5 8 9 -> 1 -> |(1, 10, 5) - (8, 9)|