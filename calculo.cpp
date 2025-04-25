#include <iostream>
#include <locale.h>

  using namespace std;
  
  int main(){
  
  string nome;
  int numero,i;
  
  cout << "informe um número: \n";
  getline (cin, nome);
  
  
  for (int i=1; i<=10; i++) {
  cout << numero << " X " << i << " = ";
         << (numero*i) << "\n";
     }
     
     cout << "Quer fazer outro calculo (s/n)? ";
     cin >> resp;
  
  return 0;
}
