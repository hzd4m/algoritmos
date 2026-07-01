#include <bits/stdc++.h>
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 


int main(){
    entrada();
    int n;
    cin >> n;
    
    int resposta = 0;
    for(int i = 0; i < n; i++){
        int e,s,g,p;
        cin >> e >> s >> g >> p;
        int soma = 0;
        soma = e + s + g; 
        if(soma > 1 && p != 2){
            resposta++;
        }
    }
    
    cout << resposta << "\n";
    
    return 0;
}
