#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int m = n+1;
    int i = n + 1;
    set<char> my_set;
    while (true)
    {
        string s = to_string(i);
        for (char c : s)
        {
            // cout<<c<<" ";
            my_set.insert(c);
        }
        // for (auto it = my_set.begin(); it != my_set.end(); ++it)
        // {
        //     cout << *it<<" ";
        // }
        cout<<endl;
        if (my_set.size() == s.size())
        {
            cout << s << endl;
            break;
        }
        else{
            my_set.clear();
            i++;
        }
    }
    return 0;
}