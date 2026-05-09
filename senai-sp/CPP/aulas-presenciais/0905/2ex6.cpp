#include<iostream>
using namespace std;

int main(){

    int num = 0;
    int fat = 1;

    cout << "Digite o numero: ";
    cin >> num;

    for (int i = num; i > 1; i--)
    {
        fat *= i;
    }

    cout << "//////////////////////////////////////////" << endl;
    cout << "O Fatorial do numero eh: " << fat << endl;

    return 0;
}