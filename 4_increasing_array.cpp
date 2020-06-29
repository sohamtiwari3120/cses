#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, k, n) for (i = k; i < n; i++)
#define ll long long int
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    int i;
    ll steps = 0;
    cin >> arr[0];
    FOR(i, 1, n)
    {
        cin >> arr[i];
        if(arr[i]<arr[i-1])
        {
            steps+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<steps<<endl;
    return 0;
}