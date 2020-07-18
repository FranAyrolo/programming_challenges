#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, input;
    int len_s, len_in, i(0), j, is(0), js;
    
    cin >> s;
    cin >> input;
    
    len_s = (int)s.length();
    len_in = (int)input.length();
    js = (int)len_s - 1;
    j = (int)len_in -1;
    
    
    
    while (i < len_in && is < len_s) {
        if (s[is] == input[i]) is++;
        i++;
    }
    
    if (!(i == len_in)) {
        i--;
    }
    
    
    while (j >= 0 && js >= 0 && j >= i)  {
        if (s[js] == input[j]) js--;
        j--;
    }
    
    if (j >= 0) {
        j++;
    }
    
    cout << max(j-i, 0) << "\n";
    
    return 0;
}
