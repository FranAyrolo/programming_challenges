#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string input, hello = "hello";
    int max, index = 0;
    bool managed = false;
    
    cin >> input;
    max = (int)input.length();
    
    loop(i, max) {
        if (input[i] == hello[index]) {
            index++;
        }
        if (index == 5) {
            managed = true;
            break;
        }
    }
    
    cout << (managed ? "YES" : "NO") << "\n";
    
    return 0;
}
