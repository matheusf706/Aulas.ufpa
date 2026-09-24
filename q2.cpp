#include <iostream>
using namespace std;

int main(){
    double nota1, nota2, media;
    
    cout <<"Notas do aluno:\n";
    cin >> nota1>>nota2;

    media = (nota1 + nota2) / 2;

    cout <<"As notas do aluno foram: " << nota1 <<", " << nota2;
    cout <<"\nA media do aluno foi: " << media << endl;
    
    if (media >= 7){
        cout <<"Você passou." << endl;
    }
    else if (media < 7){
        cout <<"Você está reprovado." << endl;
    }
} 