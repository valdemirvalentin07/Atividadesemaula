#include <iostream>

using namespace std;

int main ( )
{
    string nome;
    float nota1, nota2, nota3, atividade, resultado;

     cout << " informe seu nome \n";
     cin >> nome;

     cout << "informe sua primeira nota \n";
     cin >> nota1;

     cout << " informe sua segunda nota \n ";
     cin >> nota2;

     cout <<" informe sua terceira nota \n";
     cin >> nota3;

     cout << "informe a nota da atividade \n";
     cin >> atividade;

     resultado = (nota1 + nota2 ) * ( nota3 / atividade);

     cout << "media:" << resultado ;
  
  return 0;  }
    
