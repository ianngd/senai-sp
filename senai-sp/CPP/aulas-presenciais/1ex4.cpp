#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    cout<< "         " << endl;
    cout << "Informe o primeiro numero: ";
    cin >> a;
    
    cout<< "         " << endl;
    cout << "Informe o segundo numero: ";
    cin >> b;

    if(a > b){
        cout<< a << " eh maior que "<< b <<  endl;
        cout<< "         " << endl;
    }
    else if (a == b){
        cout<< a << " eh igual a " << b <<  endl;
        cout<< "         " << endl;
    }
    else{
        cout<< b << " eh maior que " << a <<  endl;
        cout<< "         " << endl;
    }

    return 0;
}