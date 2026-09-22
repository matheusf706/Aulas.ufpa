#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    char operacao;

    cout <<"Digite os valores a serem operados:\n";
    cin >> n1 >> n2;
    cout <<"Qual a operação?\n";
    cin >> operacao;
    switch (operacao){
        case '+':
        cout <<"A soma é igual a: "<< n1 + n2 << endl;
        break;
        case '-':
        cout <<"A subtração é igual a: "<<  n1 - n2 << endl;
        break;
        case '*':
        case 'x':
        cout <<"A multiplicação é igual a: "<< n1 * n2 << endl;
        break;
        case '/':
            if (n2 != 0){
                cout <<"A divisão é igual a: "<< n1 / n2 << endl;
            }
            else{
                cout << "Não é possivel dividir por 0" << endl;
            }
            break;
        default:
            cout <<"Operação invalida" << endl;
    }
}
