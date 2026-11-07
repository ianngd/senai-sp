#include<iostream>
using namespace std;

int main(){

    int num = 0;
    int soma = 0;

    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 0; i <=num; i++) {
        soma = soma + i;
    }

    cout << "A soma dos numeros ate " << num << " foi: " << soma;

    return 0;
}