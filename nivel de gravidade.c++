#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
  int nivel_alerta;
  cout <<"Nivel de Alerta:\n";
  cin >> nivel_alerta;
  
  if (nivel_alerta <= 3){
    cout <<"Nivel de gravidade baixo." << endl;
  } else if ((nivel_alerta >= 4) and (nivel_alerta <= 6)){
    cout <<"Nivel de gravidade medio." << endl;
  } else if ((nivel_alerta >= 7) and (nivel_alerta <= 10)){
    cout <<"Nivel de gravidade alto!!!" << endl;
  }
}
