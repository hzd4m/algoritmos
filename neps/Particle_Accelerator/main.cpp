#include <bits/stdc++.h>
using namespace std; 

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}


int main(){
    entrada();
    int k;
    cin >> k; 
    int d = k - 3; 
    if(d > 8){
        int resto = d % 8; 
        d = resto;
    }
    if(3 <= d < 5 ){
        if(d == 3){
            cout << 1 << '\n';
        }else if(d == 4){
            cout << 2 << '\n';
        }else{
            cout << 3 << '\n';
        }
    }
    
    return 0; 
    
}