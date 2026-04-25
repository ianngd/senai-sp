#include <iostream>
using namespace std;

int main() {
    int idade = 18;
    //console out é o cout e cin é console in
    cin >> idade;
    cout << idade;

    if(idade >= 18){
        cout<< "Você é maior de idade!";
    }

    return 0;
}