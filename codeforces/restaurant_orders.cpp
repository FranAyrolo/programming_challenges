#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    multiset<pair<int, int>> orders;
    pair<int, int> input;
    int n_orders, l, r, time(0), max_orders(0);
    
    cin >> n_orders;
    loop(ii, n_orders) {
        cin >> l >> r;
        input = {r, l};
        orders.insert(input);
    }
    
    for (auto it = orders.begin(); it != orders.end(); it++) {
        if ((*it).first > time && (*it).second > time) {
            time = (*it).first;
            max_orders++;
        }
    }
    
    cout << max_orders << "\n";
    
    return 0;
}
