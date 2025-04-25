 #include <iostream>
#include <locale.h>

  using namespace std;
  
  int main(){
  
  string nome;
  int inicio=0, fim=0;
  
  cout << "Qual seu nome? ";
  getline (cin, nome);
  
  cout << "Informe o inicio do intervalo: ";
  cin >> inicio;
  
  cout << "Informe o final do intervalo: ";
  cin >> fim;
  
  if (fim > inicio){// Se o fim for maior que o inicio ele executará em ordem do menor para o maior até o valor informado
  for (int i= inicio; i<=fim; i++) // Se o inicio for maior que o fim ele executará do maior para o menor até o valor informado
  cout << i << endl;
   
	}else {
		  for (int i= inicio; i>=fim; i--) // O sinal de menor (-) dentro do for existe para que nao ocorra o loop infinito 
    cout << i << endl;}
		
	
   
    
    return 0;
  }
