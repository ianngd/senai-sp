#include <iostream>
using namespace std;

// Declaração de variaveis e entrada de dados
int estoqueAtual = 10;
int quantidadeMinima = 50;
float precoUnitario = 5.50;
float valorTotal = 0;

int main() {

    //Verificação de Estoque
    cout << "--- Consultando Estoque ---" << endl;
    
    if (estoqueAtual < quantidadeMinima) {
        cout << "Estoque baixo! Quantidade atual: " << estoqueAtual << endl;
        valorTotal = (quantidadeMinima - estoqueAtual) * precoUnitario;
        cout << "Valor total para repor estoque: R$ " << valorTotal << endl;
        cout << "--- Fim do processo ---" << endl;

    } else {
        cout << "Estoque suficiente. Quantidade atual: " << estoqueAtual << endl;
        valorTotal = estoqueAtual * precoUnitario;
        cout << "Valor total do estoque: R$ " << valorTotal << endl;
        cout << "--- Fim do processo ---" << endl;
    }
    return 0;
}