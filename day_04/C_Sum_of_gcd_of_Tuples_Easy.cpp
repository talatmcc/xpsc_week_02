#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int gcd(int a, int b) {
    int count = 1;
    int gcd = 1;
    int small = (a<b)? a:b;
    while (count <= small) {
        if( a % count == 0 && b % count == 0){
            gcd = count;
        }
        count++;
    }
    return gcd;
}
int main()
{
    int k;
    cin >> k;
    long long sum = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int l = 1; l <= k; l++)
            {
                int x = gcd(i,j);
                int y = gcd(x,l);
                sum  = sum +  y;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}