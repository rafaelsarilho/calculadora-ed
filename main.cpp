#include <iostream>
#include <string>

using namespace std;

#include "funcoes.h"

void skip() {
    cout << "Pressione enter para continuar..." << endl;
    getchar();
    getchar();
}

int main() {
int i, a, b, menu;
    char operacao, novo;
    do{
        system("clear");
        cout << "MENU" << endl;
        cout << "Digite a opção desejada: " << endl;
        cout << "1 - Usar calculadora" << endl;
        cout << "2 - Exibir histórico" << endl;
        cout << "3 - Limpar histórico" << endl;
        cout << "4 - Sair" << endl;
        cin >> menu;
        switch (menu) {
            case 1: {
                do {
                    system("clear");
                    cout << "Digite o valor de A, operação (+, -, * ou /) e o valor de B: ";
                    cin >> a >> operacao >> b;
                    cout << a << " " << operacao << " " << b << " " << " = " << calculadora(a,b,operacao) << endl;
                    cout << "Deseja fazer um novo cálculo? <s>im ou <n>ão?" << endl;
                    cin >> novo;
                }while (novo == 's');
            break;
            }
            
            case 2: {
                system("clear");
                if(listaHistorico() == "\0"){
                    cout << "O histórico está vazio!" << endl;
                }
                else {
                    cout << "Histórico: " << endl;
                    cout << listaHistorico();
                }
                skip();
                break;
            }
            
            case 3: {
                system("clear");
                limpaHistorico();
                cout << "O histórico foi limpo!" << endl;
                skip();
                break;
            }
        }

    }while (menu != 4);
    cout << "Saindo do programa..." << endl;
    return 0;
}
