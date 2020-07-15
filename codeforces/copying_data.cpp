#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    const int SIZE = pow(10, 5);
    int n, m, qtype, x, y, k, ind(0), ret;
    int a[SIZE], b[SIZE], output[SIZE];
    
    ret = scanf("%d %d", &n, &m);
    
    loop(i, n) {
        ret = scanf("%d", &a[i]);
    }
    loop(i, n) {
        ret = scanf("%d", &b[i]);
    }


    loop(ii, m) {
        ret = scanf("%d %d", &qtype, &x);
        if (qtype == 1) {
            ret = scanf("%d %d", &y, &k);
            for (int q = 0; q < k; q++) {
                b[y+q-1] = a[x+q-1];
            }
        }
        else {
            output[ind] = b[x-1];
            ind++;
        }
            
    }
    
    for (int i = 0; i < ind; i++) {
       printf("%d\n", output[i]);
    }
    
    
    return 0;
    ret++;
}
