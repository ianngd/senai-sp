#include<iostream>
using namespace std;

int main(){

    int idade = -1;

    cout << "Digite uma idade: ";
    cin >> idade;

    while (idade < 0) {
        cout << "Nao existe idade negativa. Por favor, digite novamente: ";
        cin >> idade;
    }

    cout << "OK. Idade digitada maior ou igual a 0.";

    return 0;
}