#include <iostream>
#include <vector>

using namespace std;

int lower_bound(vector<int> const& v, int ini, int fin, int valor) { // fin es el siguiente elemento al final
    if (ini == fin || ini + 1 == fin) return ini;
    else {
        int m = (ini + fin - 1) / 2;
        if(v[m] == valor) return lower_bound(v, ini, m+ 1, valor);
        else return lower_bound(v, m + 1, fin, valor);
    }
}

bool resuelveCaso(){
    int n; cin >> n;
    if(n == 0)
        return false;
    
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    return true;
}

int main(){
    while (resuelveCaso());
        
    return 0;
}