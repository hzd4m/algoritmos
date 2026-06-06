#include <iostream>
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
        int p , v , t;
        cin >> p >> v >> t;

        int soma = p + v + t;
        if(soma >= 2){
            resposta++;

        } 
    }
    cout << resposta << "\n";

    return 0;
    
}