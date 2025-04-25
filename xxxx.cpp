#include <iostream>
#include <string>

using namespace std;

  int main () {
  	
  	int numeros = 5;
  	string nome [numeros];
  	float ip[numeros];
  	int contador =0;
  	
  	while (true) {
  		if (contador >= numeros){
  		cout << "numeros desejados: \n"; 
  		break;
	  }
	  
	  cout << "Insira os nomes \n" << (contador+1)<< ":" << numeros << endl;
	  
	  cout << "insira os ips:";
	  cin.ignore();
	  getline(cin,nome[contador]);
	  
	  contador ++;
	  
	  cout << "numeros add \n";
	  
	  cout << "deseja inserir um novo numero? (s\n)";
	  char opcao;
      cin >> opcao;
	  
	   if (opcao == 'n' || opcao == 'N') {break;
	   }
  }
  
  for (int i = 0;i < contador; i++){
  	cout << "numero"<< (i+i) << ":"<< nome [i] << ":" << ip[i]<< endl;
  }
  	
  	
  	return 0;
  	
  }
