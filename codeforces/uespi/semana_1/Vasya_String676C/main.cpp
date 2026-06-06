#include <bits/stdc++>
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int maiorTrecho(string s, int n, int k, char alvo){
    int inicio = 0;
    int trocas = 0;
    int maior = 0; 
    
    for(int fim = 0; fim < n; fim++){
        if(s[fim] != alvo){
            trocas++;
        } 
        while(trocas > k){
            if(s[inicio] != alvo){
                trocas--;
            }
            
            inicio++;
        }
        
        int atual = (fim - inicio) + 1; 
        if(atual > maior){
            maior = atual;
        }
        
        
    }
    
    return maior;
    
}

int main(){
    entrada(); 
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int resultadoA = maiorTrecho(s,n,k,'a');
    int resultadoB = maiorTrecho(s,n,k,'b');    

    int resposta = max(resultadoA, resultadoB); 
    cout << resposta << endl;
    return 0;   
    
}
