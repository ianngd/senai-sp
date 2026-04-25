#include <iostream>
using namespace std;

int main() {
    int idade;
    //console out é o cout e cin é console in
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

    if (idade < 12){
        cout<< "Voce eh crianca!" << endl;
        cout<< "     " << endl;
    }
    else if (idade < 20){
        cout<< "Voce eh adolescente" << endl;
        cout<< "      " << endl;
    }
    else if (idade < 60){
        cout<< "Voce eh adulto!" << endl;
        cout<< "      " << endl;
    }
    else{
        cout<< "Voce eh idoso!" << endl;
        cout<< "      " << endl;
    }

    //Para entrar deve ser maior de idade e ter ingresso:

    bool temIngresso = true;

    if (idade >= 18 && temIngresso){
        cout<< "Voce pode entrar!" << endl;
        cout<< "         " << endl;
    }
    else{
        cout<< "Voce nao pode entrar!" << endl;
        cout<< "         " << endl;
    }

    return 0;
}