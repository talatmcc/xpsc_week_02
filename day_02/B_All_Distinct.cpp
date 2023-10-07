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
        set<int> s;
        vector<int> dis(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        // sort(v.begin() , v.end());
        // for( int i = 0 ; i<n ; i++){
        //     if((v[i] != v[i+1]) && (v[i] > )){
        //         dis.push_back(v[i]);
        //     }
        // }
        if (n % 2 == 0)
        {
            if (s.size() % 2 == 0)
            {
                cout << s.size() << endl;
            }
            else
            {
                cout << s.size() - 1 << endl;
            }
        }
        else
        {
            if (s.size() % 2 == 1)
            {
                cout << s.size() << endl;
            }
            else{
                cout << s.size() - 1 << endl;
            }
        }
    }
    return 0;
}