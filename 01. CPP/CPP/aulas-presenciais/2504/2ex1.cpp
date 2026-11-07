#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    double c;
    
    cout << "" << endl;
    cout << "Valor do lado 1: ";
    cin >> a;
    
    cout << "" << endl;
    cout << "Valor do lado 2: ";
    cin >> b;

    cout << "" << endl;
    cout << "Valor do lado 3: ";
    cin >> c;
       

    if(a + b < c || a + c < b || b + c < a){
        cout<< "Os valores informados nao formam um triangulo!" <<  endl;
        cout<< "" << endl;
    }
    else{
        cout<< "Os valores informados formam um triangulo!" <<  endl;
        cout<< "" << endl;
    }

    return 0;
}