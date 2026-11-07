#include <iostream>
using namespace std;

int main () {

    int idade;
   
    cout<<"Digite sua idade: ";
    cin>>idade;
    
    if (idade >= 18){
        if (idade <= 59){
            cout<<"Voce eh adulto."<<endl;
        }
        else {cout<<"Voce eh idoso."<<endl;}
    }
    else {
        if (idade < 12){
            cout<<"Voce eh crianca"<<endl;
        }
        else{cout<<"Voce eh adolescente"<<endl;}
    }

    return 0;
};