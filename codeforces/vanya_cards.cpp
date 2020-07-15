#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ret, n, x, card, decksum(0);
    vector<int> deck = {};
    
    ret = scanf("%d %d", &n, &x);
    
    
    
    loop(i, n) {
        ret = scanf("%d", &card);
        decksum += card;
    }
    
    printf("%d", abs(decksum)/x + ( (((decksum)%x)+x)%x ? 1 : 0));
    
    
    return 0;
    ret++;
}
