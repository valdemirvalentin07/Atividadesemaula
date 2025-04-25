#include <iostream>
#include <locale.h>

  using namespace std;
  
  int main () {
  
   setlocale(LC_ALL,"portuguese");
   string nome;
   int prato, sobremesa, bebida;
   int calorias = 0;
   
   
   
   cout << "+===============================+ \n";
   cout << "|                               | \n";
   cout << "| BEM-VINDO AO NOSSO RESTAURANTE| \n";
   cout << "|                               | \n";
   cout << "+===============================+ \n";
   
   cout <<"Por favor, informe seu nome: \n";
   getline(cin,nome);
   
   
   
   cout << "Aqui temos variedades de opções, de uma olhada em nosso cardápio e faça seu pedido! \n";
   
   cout << "Escolha um prato:\n";
   cout << "01-Vegetariano(180cal)       \n";
   cout << "02-Peixe(240cal)             \n";
   cout << "03-Frango(250cal)            \n";
   cout << "04-Carne(350cal)             \n";
   cout << "05-Nenhuma das alternativas. \n";
   cout << "\n";
   cin >> prato;
   
   switch (prato) {
   	case 1: calorias +=180; break;
    case 2: calorias +=240; break;
   	case 3: calorias +=250; break;
	case 4: calorias +=350; break;
	case 5: calorias +=0; break;
	 default: cout <<"Escolha inválida! \n"; return 1;
	   
		
   }
   
   cout << "01-Abacaxi          (180cal) \n";
   cout << "02-Sorvete diet     (110cal) \n";
   cout << "03-Mousse diet      (170cal) \n";
   cout << "04-Mousse chocolate (200cal) \n";
   cout << "05-Nenhuma das alternativas. \n";
   cout << "\n";
   cin >> sobremesa;
   
   switch(sobremesa) {
   
   	case 1: calorias +=180; break;
    case 2: calorias +=110; break;
   	case 3: calorias +=170; break;
	case 4: calorias +=200; break;
	case 5: calorias +=0; break;
	default: cout <<"Escolha inválida! \n"; return 1;
	}
	   
   cout << "01-Chá              (20cal)  \n";
   cout << "02-Suco de laranja  (70cal)  \n";
   cout << "03-Suco de melão    (100cal) \n";
   cout << "04-Refrigerante diet(65cal)  \n";
   cout << "05-Nenhuma das alternativas. \n";
   cout << "\n";
   cin >> bebida;
   
   switch(bebida){
   
   	case 1: calorias +=20; break;
    case 2: calorias +=70; break;
   	case 3: calorias +=100;break;
	case 4: calorias +=65; break;
	case 5: calorias +=0; break;
	default: cout <<"Escolha inválida! \n"; return 1;
	}
    
    cout << "Quantidade total de calorias da refeição:" << calorias << "cal\n";
    
 return 0;  	
   	
}
   
   
   
   
