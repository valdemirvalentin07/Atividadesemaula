#include <iostream>
#include <locale.h>
  
  using namespace std;
   
  
  int main () {
  	string nome;
  	setlocale(LC_ALL,"portuguese");
  
    int ida , ida_volta,resp ;
	int valor=0;
   
   cout << "bem vindo ao nosso centro de viagens!" <<endl;
   cout << endl;
   
   cout << "Informe seu nome:"<<endl;
   getline(cin,nome);
    
   cout << "Escolha o tipo de passagem." << endl;
   cout << "[1]-Ida" << endl;
   cout << "[2]-Ida e volta" << endl;
   cin >> resp;
   
   if (resp == 1 ) 
   
   { cout << "Passagem para ida \n";
   
   cout <<"\n";
   cout << "Escolha as op��es de destino"<< endl;
   
   cout << "1-Regi�o norte        ida: R$500,00 "     << endl;
   cout << "2-Regi�o nordeste     ida: R$350,00 "     << endl;
   cout << "3-Regi�o centro-oesto ida: R$350,00 "     << endl;
   cout << "4-Regi�o sul          ida: R$300,00 "     << endl;
   cin >> ida;
   
   
      switch(ida) {
   
  	case 1: valor =500;break; 
    case 2: valor =350;break;
   	case 3: valor =350;break;
	case 4: valor =300;break;
	 default: cout <<"Escolha inv�lida! \n"; return 1;
     }
  }
  
   else if (resp ==2 ){cout << "Passagem ida e volta \n";
   
   cout << "Escolha as op��es de destino"<< endl;
   
   cout << "1-Regi�o norte        ida e volta: R$900,00 "    << endl;
   cout << "2-Regi�o nordeste     ida e volta: R$650,00"     << endl;
   cout << "3-Regi�o centro-oesto ida e volta: R$600,00"     << endl;
   cout << "4-Regi�o sul          ida e volta: R$550,00 "    << endl;
   cin >> ida_volta;

   
   switch(ida_volta) {
   
  	case 1: valor =900;break; 
    case 2: valor =650;break;
   	case 3: valor =600;break;
	case 4: valor =550;break;
	 default: cout <<"Escolha inv�lida! \n"; return 1;
	   
   }
}  
    else {cout <<" N�mero digitado inv�lido!"<< endl;
   }

   	 
   cout << "Valor total a pagar: R$"<< valor <<endl;
   
     
return 0;
     }
