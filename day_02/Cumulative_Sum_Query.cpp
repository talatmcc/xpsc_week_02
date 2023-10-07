#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int v[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        v[i] = sum;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        if (i == 0)
        {
            cout << v[j] << endl;
        }
        else
        {
            int ans = v[j] - v[i - 1];
            cout << ans << endl;
        }
    }
    return 0;
}