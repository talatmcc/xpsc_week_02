#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[9][9];

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int r = 2; r <= 8; r++)
        {
            for (int c = 1; c <= 7; c++)
            {
                if (arr[c][r] == '#')
                {
                    if (
                        arr[r][c] == '#' &&
                        arr[r - 1][c - 1] == '#' &&
                        arr[r - 1][c + 1] == '#' &&
                        arr[r + 1][c - 1] == '#' &&
                        arr[r + 1][c + 1] == '#')
                    {
                        cout << r << " " << c << endl;
                    }
                }
            }
        }
    }
    return 0;
}