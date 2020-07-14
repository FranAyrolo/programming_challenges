#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int n;
    string temp;
    vector<string> wordlist;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp.length() > 10) {
            string alternative = "";
            alternative += temp[0];
            alternative += to_string(temp.length() -2);
            alternative += temp[temp.length()-1];
            wordlist.push_back(alternative);
        }
        else {
            wordlist.push_back(temp);
        }
    }
    

    for (string word : wordlist) {
        cout << word << endl;
    }
    return 0;
}
