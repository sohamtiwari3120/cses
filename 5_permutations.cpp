#include <iostream>
using namespace std;
#define FOR(i, k, n) for (i = k; i < n; i++)

int main()
{
    int n;
    cin>>n;
    int i;
    int arr[n];
    int limit = n/2;
    int val = 2;
    FOR(i, 0, limit)
    {
        arr[i]=val;
        val+=2;
    }
    val=1;
    FOR(i, limit, n)
    {
        arr[i]=val;
        val+=2;
    }
    if(abs(arr[limit]- arr[limit-1])==1&&n!=1)
        cout<<"NO SOLUTION"<<endl;
    else
    {
        FOR(i, 0, n)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}

// BRUTE FORCE ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <iostream>
// using namespace std;
// #define FOR(i, k, n) for (i = k; i < n; i++)
// void swap(int *arr, int l, int r)
// {
//     int temp = arr[l];
//     arr[l] = arr[r];
//     arr[r] = temp;
// }
// void permute(int *arr, int l, int r, int n, int *no_of_solutions)
// {
//     int i;
//     if (l == r)
//     {
//         int flag = 1;
//         FOR(i, 1, n)
//         {
//             if (abs(arr[i] - arr[i - 1]) == 1)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag == 1)
//         {
//             *no_of_solutions = *no_of_solutions + 1;
//             if (*no_of_solutions == 1)
//             {
//                 FOR(i, 0, n)
//                 cout << arr[i] << " ";
//                 cout << endl;
//             }
//         }
//     }
//     else
//     {
//         int i;
//         FOR(i, l, r + 1)
//         {
//             swap(arr, l, i);
//             permute(arr, l + 1, r, n, no_of_solutions);
//             swap(arr, l, i);
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int i;
//     int no_of_solutions = 0;
//     FOR(i, 0, n)
//     arr[i] = i + 1;
//     permute(arr, 0, n - 1, n, &no_of_solutions);
//     if (no_of_solutions == 0)
//         cout << "NO SOLUTION" << endl;
//     return 0;
// }