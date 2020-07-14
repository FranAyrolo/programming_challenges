#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, c;
    int tA(0), tB(0), comeA(0), comeB(0);
    deque<int> chocs{};
    
    cin >> n;
    
    loop(i, n) {
        cin >> c;
        chocs.push_back(c);
    }
    
    while (!chocs.empty()) {
        if (tA <= tB) {
            tA += chocs.front();
            chocs.pop_front();
            comeA++;
        }
        else {
            tB += chocs.back();
            chocs.pop_back();
            comeB++;
        }
    }
    
    cout << comeA << " " << comeB << "\n";
    
    return 0;
}
