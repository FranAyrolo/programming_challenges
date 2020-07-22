#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test_cases;
    long int abound, bbound, i, cases, dummy;
    vector<long int> results = {};
    
    cin >> test_cases;
    
    loop(ii, test_cases) {
        cin >> abound >> bbound;
        i = abound;
        cases = 0;
        while (i <= bbound) {
            dummy = (int)sqrt(i);
            if (i == dummy*dummy) cases++;
            i++;
        }
        results.push_back(cases);
    }
    
    for (auto line : results) {
        cout << line << "\n";
    }
    
    
    
    return 0;
}
