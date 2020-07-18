#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    set<pair<int, int>> setA, setB;
    int n_A, n_B, index, profit;
    long long unsigned int profit_A(0), profit_B(0);
    
    cin >> n_A;
    
    loop(i, n_A) {
        cin >> index >> profit;
        setA.insert({index, profit});
    }

    cin >> n_B;
    
    loop(i, n_B) {
        cin >> index >> profit;
        setB.insert({index, profit});
    }
    
    auto ita = setA.begin(), itb = setB.begin();
    
    while (ita != setA.end() || itb != setB.end()) {
        if (ita == setA.end()) {
            while (itb != setB.end()) {
                profit_B += (*itb).second;
                itb = setB.erase(itb);
            }
            break;
        }
        else if (itb == setB.end()){
            while (ita != setA.end()) {
                profit_A += (*ita).second;
                ita = setB.erase(ita);
            }
            break;
        }
        else if ((*ita).first == (*itb).first){
            ita++;
            itb++;
        }
        else if ((*ita).first < (*itb).first){
            profit_A += (*ita).second;
            ita = setA.erase(ita);
        }
        else if ((*ita).first > (*itb).first){
            profit_B += (*itb).second;
            itb = setB.erase(itb);
        }
    }
    
    //A partir de acá se garantiza que ambos sets solo contienen los pares con elementos quimicos en común
    
    
    
    cout << "\ntest_out\n";
    cout << "\nSET A\n";
    for (auto it = setA.begin(); it != setA.end(); it++) {
        cout << (*it).first << " " << (*it).second << "\n";
    }
    cout << "\nSET B\n";
    for (auto it = setB.begin(); it != setB.end(); it++) {
        cout << (*it).first << " " << (*it).second << "\n";
    }
    cout << "profits: " << profit_A << ", " << profit_B << "\n";
    
    return 0;
}
