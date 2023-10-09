#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int x;
        cin >> s >> x;

        int count = 0;
        int hours = stoi(s.substr(0, 2));
        int minutes = stoi(s.substr(3, 2));

        while (true) {
            string time_str = "";
            if (hours < 10) {
                time_str += '0';
            }
            time_str += to_string(hours);
            time_str += ':';
            if (minutes < 10) {
                time_str += '0';
            }
            time_str += to_string(minutes);

            if (isPalindrome(time_str)) {
                count++;
            }

            minutes += x;
            hours += minutes / 60;
            minutes %= 60;
            hours %= 24;

            if (hours == stoi(s.substr(0, 2)) && minutes == stoi(s.substr(3, 2))) {
                break; 
            }
        }

        cout << count << endl;
    }

    return 0;
}
