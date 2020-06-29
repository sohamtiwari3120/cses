#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, k, n) for (i = k; i < n; i++)
#define ln "\n"
void printArr(vector<int> arr, int n)
{
    int k;
    FOR(k, 0, n)
    cout << arr[k] << " ";
    cout << ln;
}
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll i, j;
    FOR(i, 0, n)
    arr[i] = n - i;
    ll sum = n * (n + 1) / 2;
    ll halfSum;
    if (sum % 2 == 1)
    {
        cout << "NO" << ln;
        return 0;
    }
    cout << "YES" << ln;
    halfSum = sum / 2;
    vector<int> set1;
    vector<int> set2;
    int ctr1 = 0, ctr2 = 0;
    FOR(i, 0, n)
    {
        if((n&1)==0)
        {
            if (arr[i] % 4 == 0 || arr[i] % 4 == 1)
            {
                set1.push_back(arr[i]);
                ctr1++;
            }
            else if (arr[i] % 4 == 3 || arr[i] % 4 == 2)
            {
                set2.push_back(arr[i]);
                ctr2++;
            }
        }
        else if ((n&1)==1)
        {
            if (arr[i] % 4 == 0 || arr[i] % 4 == 3)
            {
                set1.push_back(arr[i]);
                ctr1++;
            }
            else if (arr[i] % 4 == 1 || arr[i] % 4 == 2)
            {
                set2.push_back(arr[i]);
                ctr2++;
            }
        }

    }
    cout << ctr1 << ln;
    printArr(set1, ctr1);
    cout << ctr2 << ln;
    printArr(set2, ctr2);
    return 0;
}
// BRUTE FORCE
// ll limit = pow(2, n-1);
// ll flag=0;
// FOR(i, 1, limit)
// {
//     ll temp = 0;
//     ll ctr = 0;
//     vector<ll> set1;
//     vector<ll> set2;
//     FOR(j, 0, n)
//         set2.push_back(arr[j]);
//     FOR(j, 0, n)
//     {
//         if ((i & (1 << j)) != 0)
//         {
//             temp += arr[j];
//             set1.push_back(arr[j]);
//             remove(set2.begin(), set2.end(), arr[j]);
//             ctr++;
//             if (temp == halfSum)
//             {
//                 flag=1;
//                 cout<< "YES" << ln;
//                 cout << ctr << ln;
//                 prllArr(set1, ctr);
//                 cout<<n-ctr<<ln;
//                 prllArr(set2, n-ctr);
//             }
//         }
//         if(flag==1)
//             break;

//     }
//     if(flag==1)
//         break;
// }
// if(flag==0)
//     cout<<"NO"<<ln;
// return 0;