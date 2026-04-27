#include <iostream>
using namespace std;

int main() {
    // Declaração de variaveis
    int numCurrais = 0;
    double minimoRacao;

    // Coleta dos dados
    cout << "Digite o numero de currais: ";
    cin >> numCurrais;
    double racaoCurrais[numCurrais];

    cout << "Digite a quantidade minima de racao para cada curral: ";
    cin >> minimoRacao;

    // Colocando no vetor a quantidade de racao de cada curral
    for(int i = 0; i < numCurrais; i++) {
        cout << "Digite a quantidade de racao para o curral " << i+1 << ": ";
        cin >> racaoCurrais[i];
    }

    // Laço para verificar  quais currais precisam de mais racao
    for(int i = 0; i < numCurrais; i++) {
        if (racaoCurrais[i] < minimoRacao) {
            cout << "O curral " << i+1 << " tem " << racaoCurrais[i] << "unid. de racao e precisa de mais." << endl;
        }        else {
            cout << "O curral " << i+1 << " tem " << racaoCurrais[i] << "unid. de racao e nao precisa de mais." << endl;
        }
    }

    return 0;
}