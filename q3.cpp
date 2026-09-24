#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cout <<"Digite o 1º número:\n";
    cin >> n1;
    cout <<"Digite o 2º número:\n";
    cin >> n2;

    if (n1 > n2){
        cout <<"O maior numero é: "<< n1 << endl; 
    } else if (n2 > n1){
        cout <<"O maior numero é: "<< n2 << endl;
    }
    else{
        cout <<"Os numeros são iguais!" << endl;
    }
    return 0;
}