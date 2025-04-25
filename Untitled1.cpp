#include <iostream>
#include <locale.h>

  using namespace std;
  
  int main () {
  	
  	string nome;
  	cout << "Qual seu nome? ";
  	getline(cin, nome);
  	
  	for(int i=0; i<10; i++){
  		cout << i << "- Ola, " << nome << endl;
	  }
 
 
 return 0;
  }
   
