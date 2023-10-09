//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int lenOfLongSubarr(int a[], int n, int s)
    {
        // Complete the function
        int sum = 0;
        int ans = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];

            if (sum == s)
            {
                ans = i + 1;
            }
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }

            if (mp.find(sum - s) != mp.end())
            {
                ans = max(ans, i - mp[sum - s]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    // code

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n, k) << endl;
    }

    return 0;
}
// } Driver Code Ends