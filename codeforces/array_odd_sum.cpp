#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n_cases, len, temp, n_odds;
    vector<int> a;
    vector<string> output;
    
    
    cin >> n_cases;
    
    for (int i = 0; i < n_cases; i++) {
        cin >> len;
        n_odds = 0;
        
        for (int j = 0; j < len; j++) {
            cin >> temp;
            if (temp % 2 == 1) {
                n_odds++;
            }
            a.push_back(temp);
        }
        
        
        if (n_odds % 2 != 0) {
            output.push_back("YES");
        }
        else {
            if (n_odds == 0) {
                output.push_back("NO");
            }
            else if (n_odds == len) {
                output.push_back("NO");
            }
            else {
                output.push_back("YES");
            }
        }
        
        a.clear();
    }
    
    for (int i = 0; i < n_cases; i++) {
        cout << output.at(i) << "\n";
    }
    
    
    
    return 0;
}
