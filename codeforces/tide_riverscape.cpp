#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
#define long_loop(x,n) for(long int x = 0L; x < n; ++x)

inline char opuesto(char a);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string input, output = "";
    int ret, n, p;
    bool puede_ser = true;
    char temp;
    
    
    ret = scanf("%d %d", &n, &p);
    cin >> input;
        
    /*int i = 0;
    while (i < n-p) {
        temp = input[i];
        if (temp == '0' || temp == '1') {
            output += temp;
            
            if (input[i+p] == '.') {
                input[i+p] = opuesto(input[i]);
            }
            else if (input[i] == input[i+p]) {
                i++;
                continue;
            }
            else {
                puede_ser = false;
                break;
            }
        }
        else {
            if (input[i+p] == '.') {
                input[i] = '1';
                input[i+p] = '0';
            }
            else {
                input[i] = opuesto(input[i+p]);
            }
            output += temp;
            puede_ser = false;
            break;
        }
        i++;
    } */
    
    loop(i, n) {
        if (puede_ser || i >= n-p) {
            temp = input[i];
            if (temp == '0' || temp == '1') {
                output += temp;
                
                if (input[i+p] == '.') {
                    input[i+p] = opuesto(input[i]);
                }
                else if (input[i] == input[i+p]) {
                    i++;
                    continue;
                }
                else {
                    puede_ser = false;
                    break;
                }
            }
            else {
                if (input[i+p] == '.') {
                    input[i] = '1';
                    input[i+p] = '0';
                }
                else {
                    input[i] = opuesto(input[i+p]);
                }
                output += temp;
                puede_ser = false;
                break;
            }
        }
        else {
            if (input[i] == '.') {
                input[i] = '0';
            }
        }
    }
    
    while (i < n) {
        if (input[i] == '.') {
            input[i] = '0';
        }
        i++;
    }
    
    if (!puede_ser) {
        cout << output;
    }
    else {
        cout << "No";
    }
    
    return 0;
    ret++;
}

inline char opuesto(char a) {
    return (a == '1' ? '0' : '1');
}
