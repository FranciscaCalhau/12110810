#include <iostream>
#include <string>

using namespace std;

class Estudante {

  public:
    string nome;
    int idade;

    void mostrar(){
      cout <<  nome <<" " << idade << endl;   //move o cursor para a proxima linha
   }

   void duplicar(){
      idade = idade * 2;
   }

};

int main() {
    
    Estudante novoEstudante;
      cin >> novoEstudante.nome >> novoEstudante.idade;
        novoEstudante.duplicar();      
        novoEstudante.mostrar();
    return 0;
}