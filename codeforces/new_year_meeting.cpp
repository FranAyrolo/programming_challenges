#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int input, result;
    vector<int> friends = {};
    
    loop(i, 3) {
        cin >> input;
        friends.push_back(input);
    }
    
    sort(friends.begin(), friends.end());
    
    result = friends.at(1) - friends.at(0) + friends.at(2) - friends.at(1);
    cout << result << "\n";
    return 0;
}
