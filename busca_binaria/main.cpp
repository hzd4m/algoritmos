#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(vector<int>& v, int alvo) {
    int n = v.size();
    int esq = 0;
    int dir = n - 1;

    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        if (v[meio] == alvo) {
            return meio;
        } else if (v[meio] < alvo) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int alvo;
    cout << "Digite o número a ser buscado: ";
    cin >> alvo;
    int resultado = buscaBinaria(v, alvo);
    if (resultado == -1) {
        cout << "Número não encontrado." << endl;
    } else {
        cout << "O número foi encontrado no índice " << resultado << "." << endl;
    }
    return 0;
}
