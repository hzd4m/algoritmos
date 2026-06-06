#include <iostream>
#include <vector>
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
}   

int main(){
    entrada();
    int n, k;
    cin >> n >> k;

    vector<int> pontos(50); 

    for(int i = 0; i < n; i++){
        cin >> pontos[i];
    } 

    int corte = pontos[k - 1];
    int classificados = 0;
    for(int i = 0; i < n; i++){
        if(pontos[i] >= corte && pontos[i] > 0){
            classificados++;
        }
    }
    cout << classificados << "\n";
    return 0;
}