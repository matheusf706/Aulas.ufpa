#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double valor;

    cout <<"Valor do produto R$";
    cin >> valor;

    if (valor >= 200){
        cout << fixed << setprecision(2);
        cout <<"O desconto é 10%\n Valor final: " << valor * 0.9 << endl;
    } else{
        cout << fixed << setprecision(2);
        cout <<"O desconto é 0%\n Valor final: " << valor << endl;
    }
}