/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    const string SENHA_CORRETA = "senha123";
    string senha;
    int tentativas = 3;
    
    while (tentativas > 0) {
        cout << "Digite a senha: ";
        cin >> senha;
        
        if (senha == SENHA_CORRETA) {
            cout << "Senha correta! Acesso concedido." << endl;
            return 0;
        } else {
            --tentativas;
            if (tentativas > 0) {
                cout << "Senha incorreta. Você tem mais " << tentativas << " tentativa(s)." << endl;
            }
        }
    }
    
    cout << "Senha incorreta. Número máximo de tentativas excedido." << endl;
    
    return 0;
}
