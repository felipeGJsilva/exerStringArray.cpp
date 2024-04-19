#include <iostream>

using namespace std;

int main(){

string cores[7]; 
    
    cores[0] = "Vermelho";
    cores[1] = "Laranja";
    cores[2] = "Amarelo";
    cores[3] = "Verde";
    cores[4] = "Azul";
    cores[5] = "Índigo";
    cores[6] = "Violeta";

int posicao;

std::cout << "Digite um número entre 1 e 7: ";
std::cin >> posicao;

if (posicao >= 1 && posicao <= 7) {
      
        std::cout << "A cor na posição é:  " << posicao <<  cores[posicao - 1] << std::endl;
    } else {
       
        std::cout << "Não tem número" << std::endl;
    }





return false;
}