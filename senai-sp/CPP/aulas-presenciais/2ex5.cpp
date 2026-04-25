#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    
    cout<< "         " << endl;
    cout << "Informe o primeiro numero: ";
    cin >> a;
    
    cout<< "         " << endl;
    cout << "Informe o segundo numero: ";
    cin >> b;

    cout<< "         " << endl;
    cout << "Informe o terceiro numero: ";
    cin >> c;

    if(a > b && a > c){
        cout<< a << " eh maior que "<< b << " e " << c <<  endl;
        cout<< "         " << endl;
    }
    else if (a == b && a == c){
        cout<< "Todos os numeros digitados sao iguais a " << a <<  endl;
        cout<< "         " << endl;
    }
    else if (b > a && b > c){
        cout<< b << " eh maior que " << a << " e " << c <<  endl;
        cout<< "         " << endl;
    }
    else{
        cout<< c << " eh maior que " << a << " e " << b <<  endl;
        cout<< "         " << endl;
    }

    return 0;
}