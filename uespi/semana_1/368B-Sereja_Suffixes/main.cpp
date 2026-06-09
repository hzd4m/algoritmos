#include <bits/stdc++.h>
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int main(){
    entrada();
    int n,m;
    cin >> n >> m; 
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
    
    vector<int> resposta(n);
    vector<int> frequencia(100001, 0); 
    int distintos = 0; 
    
    for(int i = n - 1; i >= 0; i--){
        if(frequencia[a[i]] == 0){
            distintos++;
        }
        frequencia[a[i]]++; 
        
        resposta[i] = distintos;
    }
    
    while(m--){
        int l;
        cin >> l;
        
        cout << resposta[l - 1] << "\n";
    }
    
    return 0;
}