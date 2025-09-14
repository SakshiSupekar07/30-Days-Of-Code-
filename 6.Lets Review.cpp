//Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

//Note: 0 is considered to be an even index.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
            if (i % 2 == 0) cout << s[i];
        cout << " ";
        for (int i = 0; i < s.size(); i++)
            if (i % 2 != 0) cout << s[i];
        cout << endl;
    }

   return 0;
}
