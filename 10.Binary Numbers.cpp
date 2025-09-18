//Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 1's in 's binary representation. When working with different bases, it is common to show the base as a subscript. 


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
   int maxCount = 0, currentCount = 0;

    while (n > 0) {
        if (n % 2 == 1) {      // if last bit is 1
            currentCount++;
            if (currentCount > maxCount)
                maxCount = currentCount;
        } else {
            currentCount = 0;  // reset when we see 0
        }
        n = n / 2;             // move to next bit
    }

    cout << maxCount;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
