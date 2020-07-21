#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    const int max_filas = 19, max_columnas = 30;
    long long unsigned int n, m, values[max_filas][max_columnas];
    int min_i= 19 , min_j = 30;
    bool found = false;
    
    cin >> n >> m;
    values[0][0] = n;
    
    if ((n%2 == 0 && m % 2 == 1) || m<n) {
        cout << "-1\n";
        return 0;
    }
    
    
    for (int j = 1; j < max_columnas; j++) {
        values[0][j] = values[0][j-1] * 2;
    }
    for (int i = 1; i < max_filas; i++) {
        values[i][0] = values[i-1][0] * 3;
    }
    
    for (int i = 1; i < max_filas; i++) {
        for (int j = 1; j < max_columnas; j++) {
            values[i][j] = values[i][j-1] * 2;
        }
    }
    
    
    for (int j = 0; j < max_columnas; j++) {
        for (int i = 0; i < max_filas; i++) {
            if (values[i][j] == m) {
                if (i+j < min_i + min_j) {
                    min_i = i;
                    min_j = j;
                    found = true;
                }
            }
        }
    }


    if (found) {
        cout << min_i + min_j << "\n";
    }
    else {
        cout << "-1\n";
    }
    
    return 0;
}
