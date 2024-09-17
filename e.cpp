/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;
    
    cout << "Digite números inteiros (digite um número negativo para encerrar): " << endl;
    
    while (true) {
        cin >> numero;
        if (numero < 0) {
            break;
        }
        soma += numero;
    }
    
    cout << "A soma dos números inseridos é: " << soma << endl;
    
    return 0;
}
