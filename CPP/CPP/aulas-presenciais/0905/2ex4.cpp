#include<iostream>
using namespace std;

int main(){

    int num[9];
    int i = 0;

    while (i < 10) {
        cout << "Digite o " << i+1 << " numero: ";
        cin >> num[i];
        i++;
    }

    cout << "//////////////////////////////////////////" << endl;
    cout << "Numeros digitados:" << endl;

    for (i = 0; i < 10; i++)
    {
        cout << "Numero " << i+1 << ": " << num[i] << endl;
    }

    return 0;
}