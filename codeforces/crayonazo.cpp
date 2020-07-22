#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define SIZE 134217728  


inline bool isPrime(bool criba[SIZE], ll n) {
    return criba[n]; 
} 
 
void par(bool criba[SIZE], ll n){
    ll a,b;
    for(long long i = 1; i <= (ll)sqrt(n); i++){
        if(n%i == 0){
            a = i*i; 
            b = n/a;
            
            if(isPrime(criba, b) || b == 4){
                cout << "YES" << "\n";
                return;
            }
        }
    }
    cout << "NO" << "\n";
}
  
int main() {
    fastIO;
    ll n;
    
    bool criba[SIZE];
    memset(criba, true, sizeof(criba));
    
    for (ll j = 4; j < SIZE; j += 2) {
        criba[j] = false;
    }
    
    for (ll i = 3; i*i < SIZE; i += 2) {
        if (criba[i]) {
            for (ll j = i*i; j < SIZE; j += 2*i) {
                criba[j] = false;
            }
        }
    }
    
    cin >> n;
    par(criba, n);
    return 0;
}
