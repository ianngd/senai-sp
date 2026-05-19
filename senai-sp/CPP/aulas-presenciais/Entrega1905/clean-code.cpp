#include <iostream>
using namespace std;

int main() {
    int qtSetores = 0;
    double lerDados = 0;
    double calcularTotal = 0;

    // Ler Dados
    cout << "Digite o numero de setores: ";
    cin >> qtSetores;


    // Calculando total de agua necessaria
    for(int i = 0; i < qtSetores; i++) 
    {
        cout << "Digite a quantidade de Agua para o Setor " << i + 1 << ": ";
        cin >> lerDados;
        calcularTotal += lerDados;
    }
    
    // MOstrando o total de agua necessaria
    cout << "O total de agua necessaria eh: " << calcularTotal << " litros" << endl;

    return 0;
}