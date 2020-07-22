#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)
#define SIZE 200000

int getIndex(int arr[SIZE], int n, int e) {
    loop(ii, n) {
        if (arr[ii] == e) {
            return ii;
        }
    }
    return -1;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, Achain[SIZE], Bchain[SIZE], i, j;
    bool match = true;
    
    cin >> n;
    
    loop(ii, n) {
        cin >> Achain[ii];
    }
    loop(ii, n) {
        cin >> Bchain[ii];
    }
    
    i = getIndex(Achain, n, 0);
    i++;
    i = i % n;
    
    j = getIndex(Bchain, n, Achain[i]);
    
    assert(i >= 0);
    assert(j >= 0);

    while (Achain[i%n] != 0) {
        if (Bchain[j%n] == 0) j++;
        if (Achain[i%n] != Bchain[j%n]) {
            match = false;
            break;
        }
        i++;
        j++;
    }
    
    cout << (match ? "YES\n" : "NO\n");

    return 0;
}
