#include <iostream>
#include <vector>

using namespace std;



//  Invariante:
//      para todo x: 0 <= x < p : v[x] < pivote
//      para todo x: p <= x < k: v[x] == pivote
//      para todo x: q < x < v.size : v[x] > pivote    

template <class T>
void particion(vector<T> &v, int a, int b, T pivote, int& p, int& q){
    int k;
    p = a; k = a; q = b - 1;
    while(k <= q) {
        if(v[k] == pivote) ++k;
        else if(v[k] < pivote) {
            swap(v[p], v[k]);
            ++p; ++k;
        }
        else {
            swap(v[q], v[k]);
            --q;
        }
    }
}

template <class T>
void quickSort(vector<T> & v, int ini, int fin) {
    int p , q;
    if(ini + 1 < fin) {
        particion(v, ini, fin, v[ini], p, q);
        quickSort(v, ini, p);
        quickSort(v, q + 1, fin);
    }
}


int main(){

    return 0;
}

