#include<iostream>
using namespace std;

int main()
{
    cout << "***************************************" << endl;
    cout << "* Boas vindas ao Jogo da Adivinhação! *" << endl;
    cout << "***************************************" << endl;

    int numero_secreto = 20;
    cout << "O número secreto é: " << numero_secreto << ". Não conte a ninguém!" << endl;

    int chute;
    cout << "Qual seu chute? ";
    cin >> chute;
    cout << "O valor do chute é:" << chute << endl;
    
}