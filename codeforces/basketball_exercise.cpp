#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)
#define SIZE 100000

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unsigned int players[2][SIZE];
    int n, ret;
    
    cin >> n;
    
    loop(i, n) {
        ret = scanf("%u", &players[0][i]);
    }
    loop(i, n) {
        ret = scanf("%u", &players[1][i]);
    }
    
    
    
    
    
    
    
    
    
    loop(i, n) {
        cout << players[0][i] << " ";
    }
    cout << endl;
    loop(i, n) {
        cout << players[1][i] << " ";
    }
    cout << endl;
    
    return 0;
    ret++;
}
