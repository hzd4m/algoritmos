#include <bits/stdc++.h>
using namespace std;
void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
string verifica(string s){
    int n = s.size();
    string novo = "";
    
    if(n <= 10){
        return s;
    } else { 
        char inicio = s[0];
        char fim = s[n - 1];
        
        novo += inicio;
        novo += to_string(n - 2);
        novo += fim; 
        
        return novo;
    }
}

int main(){ 
    entrada(); 
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        
       
        cout << verifica(s) << "\n";
    } 
    
    return 0;
}