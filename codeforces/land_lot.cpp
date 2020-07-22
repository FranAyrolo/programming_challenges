#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int count_ones(int map[50][50], int istart, int jstart, int height, int width) {
    int count = 0;
    
    for (int i = istart; i < istart+height; i++) {
        for (int j = jstart; j < jstart+width; j++) {
            count += map[i][j];
        }
    }
    
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, a, b, land[50][50], min_trees = INT_MAX, temp;
    
    cin >> n >> m;
    loop(i, n) {
        loop(j, m) {
            cin >> land[i][j];
        }
    }
    cin >> a >> b;
    
    
    loop(i, n) {
        loop(j, m) {
            if (i+a <= n && j+b <= m) {
                temp = count_ones(land, i, j, a, b);
                if (temp < min_trees) {
                    min_trees = temp;
                }
            }
        }
    }
    
    loop(i, n) {
        loop(j, m) {
            if (i+b <= n && j+a <= m) {
                temp = count_ones(land, i, j, b, a);
                if (temp < min_trees) {
                    min_trees = temp;
                }
            }
        }
    }
    
    
    cout << min_trees << "\n";
    
    return 0;
}
