#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)
#define SIZE 5000

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, w, h, n_envs = 0, tempw, temph, maxw = 0, maxh = 0, ret;
    vector<int> indexes= {};
    int envs[SIZE][2] = {};
    
    cin >> n >> w >> h;
    
    
    loop(i, n) {
        ret = scanf("%d %d", &tempw, &temph);
        envs[i][0] = (tempw < w ? tempw : INT_MAX);
        envs[i][1] = (temph < h ? temph : INT_MAX);
    }
    
    
    loop(i, n) {
        
    }
    
    
    
    
    return 0;
    ret++;
}
