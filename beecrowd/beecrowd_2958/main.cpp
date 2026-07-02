#include <bits/stdc++.h>
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void verificaChar(int numero, char qualquer, vector<int>& v, vector<int>& d){
    if(qualquer == 'V'){
        v.push_back(numero);
    }else{
        d.push_back(numero);
    }
}

int main(){
    entrada();
    int linhas,colunas;
    cin >> linhas >> colunas;
    vector<int> vitorias;
    vector<int> derrotas;
    int numero;
    char letra;
    int total = linhas * colunas;
    for(int i = 0; i < total; i++){ 
        
        cin >> numero >> letra; 
        verificaChar(numero, letra, vitorias, derrotas);
    }
    sort(vitorias.begin(),vitorias.end(),greater<int>());
    sort(derrotas.begin(),derrotas.end(),greater<int>());
    for(auto x : vitorias){
        cout << x << "V\n";
    }
    for(auto y : derrotas){
        cout << y << "D\n";
    }
    return 0;
    
}