#include <bits/stdc++.h>
using namespace std;

void entrada() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool verificapar(string s) {
    return s.size() % 2 == 0;
}

string cifra(string s) {
    for (char &c : s) {
        if (c >= 'a' && c <= 'z') {
            if (c == 'z') {
                c = 'a';
            } else {
                c++;
            }
        }
    }

    return s;
}

void mostra(vector<string>& s) {
    for (auto x : s) {
        cout << x << "\n";
    }
}

int main() {
    entrada();

    int n;
    cin >> n;

    vector<string> resposta;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int tamanho_original = s.size();
        string temp = "";

        if (tamanho_original > 10) {
            temp += s[0];
            temp += to_string(tamanho_original - 2);
            temp += s[tamanho_original - 1];
        } else {
            temp = s;
        }

        if (tamanho_original % 2 == 0) {
            temp = cifra(temp);
        } else {
            reverse(temp.begin(), temp.end());
        }

        resposta.push_back(temp);
    }

    mostra(resposta);

    return 0;
}
