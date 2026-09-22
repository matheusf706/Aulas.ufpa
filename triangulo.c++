#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int a, b, c;
    float p, area;
    cout << "Digite o valor dos lados:\n";
    cin >> a >> b >> c;
    if ((a < (b + c)) and (b < (a + c)) and (c < (a + b))){
        cout <<"É um triangulo!" << endl;
    }
    else {
        cout << "Não é um triangulo!" << endl;
    }
    
    if ((a < (b + c)) and (b < (a + c)) and (c < (a + b))){
        p = float(a + b + c)/2;
        area = sqrt(p*(p - a)*(p - b)*(p - c));
        cout <<"A area do triangulo é:" << area << endl;
    }
    if ((a == b) and (a and b != c)){
        cout <<"O triangulo é isosceles!" << endl;
    } else if ((a != b) and (b != c)){
        cout <<"O triangulo é escaleno!" << endl;
    } else if ((a == b) and (b == c)){
        cout <<"O triangulo é equilatero!" << endl;
    }
    return 0;
}
