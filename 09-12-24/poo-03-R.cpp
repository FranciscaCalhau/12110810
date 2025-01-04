#include <iostream>  //Permite a entrada e saída de dados, como cin (entrada) e cout (saída)
#include <string>    //Inclui a funcionalidade para manipular strings (cadeias de caracteres)


using namespace std;

class Utilzador {
    private:
        string nome = "Nunes";
        string palavraPasse = "abc123def456";
    
    public:
        void set(string nome, string palavraPasse){
           this -> nome = nome;
           this -> palavraPasse = palavraPasse;
    }
        void get(){    //mostra os valores
            cout << nome << " " << palavraPasse << endl;
        }
};

int main(){
    string name;
    string palavraPasse;
    Utilzador novo_objt;
    cout <<"Valores iniciais: ";
    novo_objt.get();
    cout << "Novo nome: ";
       cin >> name;
    cout << "Nova password: ";
       cin >> palavraPasse;
    novo_objt.set(name, palavraPasse); 
    cout << "Novos valores: " << endl;
    novo_objt.get();

    return 0;
       
}