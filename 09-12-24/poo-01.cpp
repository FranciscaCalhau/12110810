#include <iostream>

using namespace std;

//#01: Definiçao da classe
class nomeClasse {

//#02: Definiçao de membros privados (dados e funções) da classe
private:
  int valorPrivado;

  //#03: Definiçao de membros publica (dados e funções) da classe
  public:
  int valorPublico;
  void funcaoPublica() {
    cout << "Esta e a minha primeira Funcao " << endl;
    
  }
//#Fim da classe 'nome Classe', com o terminador ';'
};

   int main() {
    //#04: Criação de um objeto tipo classe
    nomeClasse objectoNovo;

    //#05: Podemos aceder e modificar um objecto publico
    objectoNovo.valorPublico = 10;

  //#06: 

    objectoNovo.funcaoPublica ();
       
    return 0; 
}