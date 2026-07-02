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
    
    vector<int> pares;
    vector<int> impares;
    
    
    for(int i = 0; i < n; i++){
        int numero;
        cin >> numero;
        if(numero % 2 == 0){
            pares.push_back(numero);
        } else {
            impares.push_back(numero);
        }
    } 
    
    
    sort(pares.begin(), pares.end());
    
    
    sort(impares.begin(), impares.end(), greater<int>()); 
    
    
    for(const int numero : pares){
        cout << numero << "\n";
    } 
    
    
    for(const int numero : impares){
        cout << numero << "\n";
    }
    
    return 0;
}