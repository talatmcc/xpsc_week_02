#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int count = 0;

    while (n.size() > 1)
    {
        int sum = 0;
        for (char d : n)
        {
            sum += d - 48;
        }
        count++;
        n = to_string(sum);
    }

    cout << count;

    return 0;
}
