#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            int moves;
            string sequence;
            cin >> moves >> sequence;
            for (int j = 0; j < moves; j++) {
                if (sequence[j] == 'D') {
                    a[i] = (a[i] + 1) % 10;
                } else if (sequence[j] == 'U') {
                    a[i] = (a[i] + 9) % 10;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
