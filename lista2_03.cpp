#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string texto;
    double k, c, f;

    cout <<"Quantos graus Cº?\n";
    cin >> c;

    k = c + 273;
    f = 1.8 * c + 32;

    ofstream arquivo("temperatura.txt");
    texto = "Temperatura em Kelvin: " << k << "°K";
    arquivo << texto;
    texto = "\nTemperatura em Fahrenheit: " << f << "°F";
    arquivo << texto;
    arquivo.close();
    cout << "\nDados escritos com sucesso!" << endl;

    ifstream arquivoEntrada("temperatura.txt");
    string dados;
    arquivoEntrada >> dados;
    cout << dados;
    arquivoEntrada.close();

    return 0;
}
