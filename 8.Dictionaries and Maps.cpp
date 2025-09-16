//Given names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for. For each queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for is not found, print Not found instead. 


#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of entries
    map<string, string> phoneBook;

    // Reading phone book entries
    for (int i = 0; i < n; i++) {
        string name, phone;
        cin >> name >> phone;
        phoneBook[name] = phone;
    }

    string query;
    // Process queries until EOF
    while (cin >> query) {
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
