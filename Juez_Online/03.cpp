// Nombre del alumno .....
// Usuario del Juez ...


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// función que resuelve el problema
int resolverFinal(int a, int b, int sol, int potencia) {
    if (a == 0 && b == 0) {
        return sol;
    }
    else {
        sol = (a + b) % 10 * potencia + sol;
        return resolverFinal(a / 10, b / 10, sol, potencia * 10);
    }
}
int resolverNoFinal(int a, int b) {
    if (a == 0 && b == 0) {
        return 0;
    }
    else {
        return 10 * resolverNoFinal(a / 10, b / 10) + (a + b) % 10;
    }
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
    // leer los datos de la entrada
    int a, b;
    cin >> a >> b;

    int solF = resolverFinal(a, b, 0 ,1);
    int solN = resolverNoFinal(a, b);

    // escribir sol
    cout << solN << " " << solF << "\n";

}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("datos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        resuelveCaso();


    // Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}