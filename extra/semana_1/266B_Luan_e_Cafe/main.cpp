#include <bits/stdc++.h>
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
} 


int main(){
    entrada();
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    
    for(int segundos = 0; segundos < t; segundos++){
        int i = 0;
        while(i < n - 1){
            if(s[i] == 'S' && s[i + 1] == 'C'){
                swap(s[i],s[i + 1]);
                i = i + 2;
            }else{
                i++;
            }
        }
    }
    cout << s << "\n"; 
    return 0;
}