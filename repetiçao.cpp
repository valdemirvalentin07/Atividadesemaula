#include <iostream>
#include <locale.h>

  using namespace std;
  
  int main() {
  	
  	int contador =0;
  	int resp;
  	string nome;
  	 
  	cout << "Digite seu nome:";
  	cin >> nome;
  	
  /*	do {
  		cout << nome;
  		contador = contador + 1;
	}while (contador < 0);
	
  */
  	 
   /* while(contador <= 1){
  	cout << nome << endl;
  	contador = contador + 1;
    }
  
   */	
  	cout << "Quantas vezes voce quer que repita seu nome: \n";
  	cin >> resp;
  		
  	while ( contador < resp){
	  cout <<  "[" << contador+1 <<"]" << nome << endl;	
  	contador= contador + 1;
    }
  	
  	
	  
  	
return 0;
  }
  
  
  
  
  
  
