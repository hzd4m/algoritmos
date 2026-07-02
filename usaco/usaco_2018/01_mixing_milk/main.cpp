#include <bits/stdc++.h>
using namespace std;    
void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int main(){
    entrada();
    long long capacidade[6];
    long long quantidade[6]; 

    for(int i=0; i < 3; i++){
        cin >> capacidade[i] >> quantidade[i];
    } 

    for(int i=0; i < 100; i++){
        int origem = i % 3;
        int destino = (i + 1) % 3;

        long long total = quantidade[origem] + quantidade[destino];
        if(total > capacidade[destino]){
            quantidade[origem] = total - capacidade[destino];
            quantidade[destino] = capacidade[destino];
        }else{
            quantidade[origem] = 0;
            quantidade[destino] = total;
        }
    }
    return 0; 
}