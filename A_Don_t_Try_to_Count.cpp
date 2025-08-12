#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string x, s;
        cin >> x >> s;

        int count = 0; 
        bool found = false;

        for (int i = 0; i < 6; i++) {
            if (x.find(s) != string::npos) {
                found = true;
                break;
            }
            x += x; 
            count++;
        }

        if (found)
            cout << count << "\n";
        else
            cout << -1 << "\n";
    }
}
