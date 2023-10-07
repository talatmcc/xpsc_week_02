#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 6; i <= n; i++)
    {
        int count = 0;
        for (int j = 2; j <= i/2 ; j ++ )
        {
            if ((i % j == 0) && (isPrime(j)))
            {
                count++;
            }
        }
        if (count == 2)
        {
            v.push_back(i);
        }
    }
    cout << v.size() << endl;
    return 0;
}