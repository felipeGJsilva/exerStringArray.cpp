#include <iostream>

using namespace std;

int main(){

    char letra;
    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    if((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u')){

        std::cout << "É UMA VOGAL \n" << std::endl;

    }
    else{
        std::cout << "NÃO É UMA VOGAL \n" << std::endl;

    }


    return false;
}