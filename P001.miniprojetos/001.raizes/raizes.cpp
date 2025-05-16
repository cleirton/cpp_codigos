#include <iostream>
#include <cmath>
#include "prot.h"

using namespace std;

/*
    vamos criar um pequeno programa que recebe
    3 parâmetros, a, b e c, coeficientes de uma equação do segundo grau
    v1.0 - a função vai retornar se a função tem ou não raizes
*/

double a, b, c, delta;

int main() {
    cout << "digite o valor de a: ";
    cin >> a;
    cout << "digite o valor de b: ";
    cin >> b;
    cout << "digite o valor de c: ";
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0) {
        cout << "Delta negativo, nao possui raizes reais." << endl;
    } else {
        cout << "Delta positivo, possui raizes reais." << endl;
    }

    cout << endl;
    imprime_valores();

    return 0;
}

void imprime_valores() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "delta = " << delta << endl;
}