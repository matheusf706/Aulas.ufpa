#include <iostream>
using namespace std;

int main(){
    int graus;

    cout <<"Quantos graus:\n";
    cin >> graus;

    if (graus < 15){
        cout <<"O dia está friooo." << endl;
    } else if ((graus >= 15) and (graus <= 25)){
        cout <<"O dia está agradável." << endl;
    } else if (graus > 25){
        cout <<"Que calor do djabo" << endl;
    }
    return 0;
}