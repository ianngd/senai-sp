#include <iostream>
using namespace std;

int main() {
    int ano;

    cout << "Digite o ano (AAAA): " << endl;
    cin >> ano;

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        cout << "O ano eh bissexto!" << endl;
    }
    else{
        cout << "O ano nao eh bissexto!" << endl;
    }

    return 0;
}