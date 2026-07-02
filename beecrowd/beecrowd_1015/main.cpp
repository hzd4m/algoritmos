#include <bits/stdc++.h>
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
double distancia(double x1, double y1, double x2, double y2){
    double diferenca1 = ((x2 - x1) * (x2 - x1));
    double diferenca2 = ((y2 - y1) * (y2 - y1));
    double resultado = sqrt(diferenca1 + diferenca2);
    return resultado;
}

int main(){
    entrada();
    double x1,y1;
    cin >> x1 >> y1;
    double x2,y2;
    cin >> x2 >> y2;
    double resposta = distancia(x1,y1,x2,y2);
    cout << fixed << setprecision(4);
    cout << resposta << "\n";
    
    
    return 0;
}