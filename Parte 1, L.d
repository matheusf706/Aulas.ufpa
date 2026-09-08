#include <iostream>
int main(){
    float num1, num2, num3, media;
    
    std::cout<< "Digite 1 número: ";
    std::cin>> num1;
    std::cout<< "Digite 1 número: ";
    std::cin>> num2;
    std::cout<< "Digite 1 número: ";
    std::cin>> num3;
    
    media = (num1 + num2 + num3) / 3;

    std::cout<< "A media é: " << media << std::ends;
    return 0;
}
