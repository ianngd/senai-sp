#include <iostream>
#include <string>
// using namespace std; Para códigos extensos, sugere-se nao usar abreviaçao para explicitar no código de onde vem o comando.

int main () {

    int idade;
    std::string nome; 
    const int MAIORIDADE = 18;

    std::cout<< "Digite o nome: ";
    std::cin>>nome;
    //getline(cin,nome); esse uso pode capturar so o enter. para burlar isso, use dois getline. O primeiro captura o enter e o segundo a linha
    std::cout<<"Digite sua idade: ";
    std::cin>>idade;
    std::cout<<"Bem vindo, "<<nome<<std::endl;

    if (idade >= MAIORIDADE){
        if (idade > 30){
            std::cout<<"Voce eh adulto"<<std::endl;
        }
        else { std::cout<<"Voce eh jovem"<<std::endl;}
    }
    else {
        if (idade < 16){
            std::cout<<"Voce eh crianca"<<std::endl;
        }
        else{std::cout<<"Voce eh adolescente"<<std::endl;}
    }

    return 0;
};
