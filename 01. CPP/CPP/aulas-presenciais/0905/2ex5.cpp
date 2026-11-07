#include<iostream>
using namespace std;

int main(){

    int num = 0;
    int par = 0;
    int impar = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o numero: ";
        cin >> num;

        if (num % 2 == 0 ){
            par++;
        }
        else { impar++; }
    }

    cout << "//////////////////////////////////////////" << endl;
    cout << "Numeros Pares: " << par << endl;
    cout << "Numeros Impares: " << impar << endl;

    return 0;
}