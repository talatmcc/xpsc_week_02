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
        string s;
        cin >> s;
        string str = "Timur";
        bool ok = true;
        
        if (str.length() != s.length())
        {
            ok = false;
        }
        else
        {
            map<char, int> freq_str, freq_s;
            for (char c : str)
            {
                freq_str[c]++;
            }
            for (char c : s)
            {
                freq_s[c]++;
            }
            
            for (char c : str)
            {
                if (freq_str[c] != freq_s[c])
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
