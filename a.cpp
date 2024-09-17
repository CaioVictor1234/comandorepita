/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int limite;
    
    cout << "Digite um número inteiro positivo: ";
    cin >> limite;
    
    if (limite < 0) {
        cout << "Número inválido. Deve ser um número inteiro positivo." << endl;
        return 1;
    }

    for (int i = 0; i <= limite; i += 2) {
        cout << i << endl;
    }
    
    return 0;
}
