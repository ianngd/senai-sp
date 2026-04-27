#include <iostream>
using namespace std;

int main() {
    int idade;
    cout<< "         " << endl;
    cout << "Informe sua idade: ";
    cin >> idade;
    
    if(idade >= 18){
        cout<< "Voce eh maior de idade!" << endl;
        cout<< "         " << endl;
    }
    else{
        cout<< "Voce eh menor de idade!" << endl;
        cout<< "         " << endl;
    }

    return 0;
}