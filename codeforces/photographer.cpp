#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)
#define it_loop(cont) for(auto it = cont.begin(); it != cont.end(); it++)

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);    
    int n, d, a, b, baja, alta;
    multiset<pair<int, int>> costos;
    vector<int> atendidos = {};
    
    cin >> n >> d >>  a >> b;
    
    loop (i, n) {
        cin >> baja >> alta;
        costos.insert({a*baja + b*alta, i+1});
    }
    
    auto it_c = costos.begin();
    while (d > 0 && it_c != costos.end()) {
        if ((*it_c).first <= d) {
            atendidos.push_back((*it_c).second);
            d -= (*it_c).first;
            it_c++;
        }
        else {
            break;
        }
    }
    
    cout << atendidos.size() << "\n";
    it_loop(atendidos) {
        cout << *it << " ";
    }
    cout << "\n";
    
    return 0;
}
