#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int f = arr[0];
        int k = 1;
        for (int i = 1; i < n; i++)
        {
            if (f != arr[i])
            {
                break;
            }
            k++;
        }
        cout << n - k << endl;
    }
    return 0;
}