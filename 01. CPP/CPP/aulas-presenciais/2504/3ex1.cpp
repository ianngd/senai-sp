#include <iostream>
#include <string>
using namespace std;

int main() {
    string  pass;
    bool validaNum = false;
    bool validaMaisc = false;
    bool validaMinusc = false;

    cout<< " " << endl;
    cout << "Digite a senha: "<< endl;
    cin >> pass;

    if (pass.size() < 8){
        cout<< "Senha muito curta, digite uma senha com no minimo 8 caracteres" << endl;
        return main();
    }  
    else{
        for (int i = 0; i < pass.size(); i++){
            if (pass[i] >= 'a' && pass[i] <= 'z'){
                validaMinusc = true;
                continue;
            }
            else if (pass[i] >= 'A' && pass[i] <= 'Z'){
                validaMaisc = true;
                continue;
            }
            else if (pass[i] >= '0' && pass[i] <= '9'){
                validaNum = true;
                continue;
            }
         }
        if (validaNum && validaMaisc && validaMinusc){
            cout<< "Senha valida" << endl;
        }
        else{
            cout<< "Senha invalida, a senha deve conter no minimo 8 caracteres, uma letra maiuscula, uma letra minuscula e um numero" << endl;
            return main();
        }
    }
    return 0;
}