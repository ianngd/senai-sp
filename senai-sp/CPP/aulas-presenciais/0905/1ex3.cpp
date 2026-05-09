#include<iostream>
using namespace std;

int main(){

    int numero = 0;

    cout << "Digite um numero: ";
    cin >> numero;

    cout << "TABUADA DO " << numero << endl;
    for (int i = 0; i < 10; i++) {

        cout << numero << " x " << i+1 << " = " << numero * (i+1) << endl;

    }
    return 0;
}