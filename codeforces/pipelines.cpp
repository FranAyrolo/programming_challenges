#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, k, temp;
    long int max_splitters, min_splitters, pos_k;
    int ret;
    
    cin >> n >> k;
    
    max_splitters = k-1;
    min_splitters = 0;
    
    
    
    if (1 + (k-1*(k-2)) / 2 < n) {
        while (min_splitters < max_splitters-1) {
            pos_k = (max_splitters - min_splitters) / 2;
            temp = 1 + (pos_k-1*(pos_k-2)) / 2;
            cout << temp << "\n";
            if (temp < n) {
                min_splitters = pos_k;
            }
            else if (temp > n) {
                max_splitters = pos_k;
            }
            else {
                cout << pos_k;
                break;
            }
        }
    }
    else if ((1 + (k-1*(k-2)) / 2) == n) {
        cout << k;
    }
    else {
        printf("-1");
    }
    
    
    return 0;
    ret++;
}

//1 + (k-1(k-2)) / 2
