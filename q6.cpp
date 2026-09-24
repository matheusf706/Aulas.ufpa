#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int minutos, horas, resto;

    ifstream arquivo_entrada("entrada06.txt");
    arquivo_entrada >> minutos;
    arquivo_entrada.close();

    horas = minutos/60;
    resto = minutos%60;

    ofstream arquivo_entry("saida06.txt");
    arquivo_entry << horas <<"\n"<< resto;
    arquivo_entry.close();

    return 0;
}