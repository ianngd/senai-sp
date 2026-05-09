#include<iostream>
using namespace std;

int main(){

    int i = 0;

    cout << "Quantas notas deseja informar: ";
    cin >> i;

    while (i < 0) {
        cout << "Nao existe quantidade negativa. Por favor, digite novamente: ";
        cin >> i;
    }

    int notas[i-1];


    for (int cont = 0; cont < i; cont++)
    {
        cout << "Digite a " << cont+1 << "a" << " nota: ";
        cin >> notas[cont];
    }
    
    cout << "//////////////////////////////////////////" << endl;
    cout << "Notas digitadas:" << endl;

    for (int cont = 0; cont < i; cont++)
    {
        cout << "Nota " << cont+1 << ": " << notas[cont] << endl;
    }

    return 0;
}