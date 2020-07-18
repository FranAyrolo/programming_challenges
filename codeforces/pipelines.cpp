#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)

inline long long int pascal(long int k);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, k, max_supply, temp;
    long int max_splitters, min_splitters, pos_k(0);
    int ret;
    
    cin >> n >> k;
    
    max_splitters = k;
    min_splitters = 0;
    max_supply = pascal(k);
    
    
    if (max_supply > n) {
        while (min_splitters < max_splitters) {
            pos_k = (min_splitters + max_splitters) / 2;
            temp = max_supply - pascal(pos_k);
            
            if (temp < n) {
                min_splitters = pos_k +1;
            }
            else if (temp > n) {
                max_splitters = pos_k;
            }
        }
        cout << k - pos_k << "\n";
    }
    else if (max_supply == n) {
        cout << k << "\n";
    }
    else {
        cout << "-1\n";
    }
    
    
    return 0;
    ret++;
}

inline long long int pascal(long int k) {
    return 1 + ((k-1) * k) / 2;
}

//1 + (k-1(k-2)) / 2
