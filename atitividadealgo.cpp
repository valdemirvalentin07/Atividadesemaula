 #include <iostream>
#include <locale.h>
 
   using namespace std; 
 int main(){
 	
 	string nome;
 	setlocale(LC_ALL, "portuguese"); 
 	
 	int ano, anonas, estilo, idade;
 	
 	cout << "+=====================+\n";
 	cout << "|      INSCRIÇÕES     |\n";
 	cout << "+=====================+\n";
 	
 	cout << "por favor, digite seu nome:\n";
 	getline(cin,nome);
 	cout <<"\n";
 	
 	cout << "digite o ano atual:\n";
 	cin >> ano;
 	cout <<"\n";
 	
 	cout << "digite seu ano de nascimento:\n";
 	cin >> anonas;
 	cout << "\n";
 	
 	
 	cout << "entre as alternativas, escolha o seu estilo de natação.\n";
 	cout << "[1]- nado livre    \n";
 	cout << "[2]- nado costa    \n";
 	cout << "[3]- nado borboleta\n";
 	cin  >> estilo;
 	cout << "\n"; 
 	
 	idade =( ano - anonas);
 	
 	if     ( estilo==1 && idade <=16) {cout <<" O atleta:" << nome << " idade:" << idade << " anos e deve encaminhar para a piscina 1!\n";}
 	else if( estilo==1 && idade >16 ) {cout <<" O atleta:" << nome << " idade:" << idade << " anos e deve encaminhar para a piscina 5!\n";}
	else if( estilo==2 && idade <=21) {cout <<" O atleta:" << nome << " idade:" << idade << " anos e deve encaminhar para a piscina 2!\n";}
 	else if( estilo==2 && idade >21 ) {cout <<" O atleta:" << nome << " idade:" << idade << " anos e deve encaminhar para a piscina 3!\n";}
    else if( estilo==3 && idade <12 ) {cout <<" O atleta:" << nome << " idade:" << idade << " anos e deve encaminhar para a piscina 4!\n";}
 	else if( estilo==3 && idade >=12) {cout <<" O atleta:" << nome << " idade:" << idade << " anos e deve encaminhar para a piscina 6!\n";}
 	
	 
 	
 	
 	return 0;
 }
