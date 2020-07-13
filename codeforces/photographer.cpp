#include <bits/stdc++.h>
using namespace std;

struct tupla {
  int a, b;  
};

void mi_min(vector<int>, int, tupla &);

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    vector<int> costos;
    
    int n, d, a, b, baja, alta;
    scanf("%d %d", &n, &d);
    scanf("%d %d", &a, &b);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &baja, &alta);
        costos.push_back(a * baja + b * alta);
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", costos.at(i));
    }
    
    return 0;
}




void mi_min(vector<int> lista, int len, tupla & res) {
    int min = INT_MAX;
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (lista.at(i) < min) {
            min = lista.at(i);
            index = i;
        }
    }
    
    res.a = min;
    res.b = index;
}
