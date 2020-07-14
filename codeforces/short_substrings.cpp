#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n_cases;
    vector<string> cases;
    vector<string> output;
    string temp;
    
    cin >> n_cases;
    
    for (int i = 0; i < n_cases; i++) {
        cin >> temp;
        cases.push_back(temp);
    }
    
    for (auto it = cases.begin(); it < cases.end(); it++) {
        string current = *it;
        string result = "";
        
        result += current[0];
        
        for (long unsigned int j = 1; j < current.length() - 1; j += 2) {
            result += current[j];
        }
        result += current[current.length() - 1];
        
        output.push_back(result);
    }
    
    
    for (string out : output) {
        cout << out << "\n";
    }
    
	return 0;
}

