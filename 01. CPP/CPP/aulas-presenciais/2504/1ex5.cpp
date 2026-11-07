#include <iostream>
using namespace std;

int main() {
    double numero;
    
    cout << "" << endl;
    cout << "Digite a nota final: " << endl;
    cin >> numero;

    if (numero >= 6){
        cout << "O aluno foi aprovado!" << endl;
    }
    else if (numero < 0 ){ // náo sei validar se eh letra ao inves de numero.
        cout << "Nota invalida!" << endl;
        return main();
    }
    else{
        cout << "O aluno foi reprovado!" << endl;
    }

    return 0;
}