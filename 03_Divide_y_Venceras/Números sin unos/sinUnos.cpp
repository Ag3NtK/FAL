#include <iostream>

using namespace std;

int sinUnos(int n) {
    if (n < 1) return 1; 
    if (n < 10) return n;
    if (n >= 10 && n % 10 != 0 && n % 10 != 1)
        return  sinUnos(n / 10) * 9 - (9 - n % 10);     //  n >= 10 && n no tenga 1s && n % 10 != 0 && n % 10 != 1
    if (n % 10 == 1 || n % 10 == 0)
        return sinUnos(n/10) + 1;
}

bool resuelveCaso(){
    int n; 

    if(!cin)
        return false;

    return true;
}


int main() {

    return 0;
}