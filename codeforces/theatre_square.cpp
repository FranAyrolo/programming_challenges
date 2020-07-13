#include <bits/stdc++.h>
using namespace std;
 
int main () {
    
    long long m, n, a;
    long long cuads_alto, cuads_ancho;
    
    cin >> n >> m >> a;
    
    cuads_alto = m / a;
    if ((m % a) != 0) {
        cuads_alto++;
    }
 
    cuads_ancho = n / a;
    if ((n % a) != 0) {
        cuads_ancho++;
    }
        
    cout << cuads_ancho*cuads_alto << "\n";
    
    return 0;
}
