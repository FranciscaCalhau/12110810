
#include <iostream>  //Permite a entrada e saída de dados, como cin (entrada) e cout (saída)
#include <string>    //Inclui a funcionalidade para manipular strings (cadeias de caracteres)


using namespace std; //Permite o use de objetos e funções da biblioteca padrão C++ (como cout, cin, e string) sem ter que escrever std:: antes.

class Utilizador {       //Uma classe define um modelo para criar objetos. 
                         //A classe Utilizador tem dois atributos (dados) privados e dois métodos (funções) públicos
    private:
        string nome ="Maria";               //atributo privado para armazenar o nome do utilizador
        string palavraPasse = "abc123def456";  //atributo privado para armazenar a palavra passe do utilizador

    public:
        void set(string nome, string palavraPasse){     //set modifica o valor dos atributos
            this -> nome = nome;
            this -> palavraPasse = palavraPasse;
        }
        void get (){
            cout << nome <<" " << palavraPasse << endl;     //get exibe o valor dos atributos
        }
};

int main() {
    Utilizador novo_obj;
    novo_obj.get();
    novo_obj.set("Francisca","def123abc456");
    novo_obj.get();
    return 0;
}