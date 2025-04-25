#include <iostream>
#include <locale.h>
 
  using namespace std;
  
  int main (int argc,char** argv) {
  	 
  	 int  ano, anonas, idade, estilo;
  	 setlocale(LC_ALL, "portuguese");
  	 string nome;
  	 
  	cout << "por favor, digite seu nome:\n";
  	getline(cin,nome);
  	cout <<"\n";
  	
  	cout << "ano atual: \n";
  	cin >> ano;
  	cout << "\n";
  	
  	cout << "ano de nascimento: \n";
  	cin >> anonas;
  	cout << "\n";
  	
  	cout << "entre as alternativas abaixo, assinale seu estilo de natação: \n";
  	
  	cout << "(a)- nado livre\n";
  	cout << "(b)- nado de costas\n";
  	cout << "(c)- nado borboleta\n";
  	cin >> estilo;
  	cout << "\n";
  	
  	idade = (ano-anonas);
  	
  	if (estilo=1 && idade<=16) {cout << "o competidor:"        << nome << ",foi encaminhado para a piscina 01! idade : \n"<< idade<<"anos! \n";}
	   else if(estilo=1 && idade>16)  { cout << "o competidor:"<< nome << ",foi encaminhado para a piscina 05! idade : \n"<< idade<<"anos! \n";}
	   else if(estilo=2 && idade<=21) { cout << "o competidor:"<< nome <<", foi encaminhado para a piscina 02! idade : \n"<< idade<<"anos! \n";}
	   else if(estilo=2 && idade>21)  { cout << "o competidor:"<< nome <<", foi encaminhado para a piscina 03! idade : \n"<< idade<<"anos! \n";}
	   else if(estilo=3 && idade<12)  {cout  << "o competidor:"<< nome <<", foi encaminhado para a piscina 04! idade : \n"<< idade<<"anos! \n";}
	   else if(estilo=3 && idade>=12) {cout <<  "o competidor:"<< nome <<", foi encaminhado para a piscina 06! idade : \n"<< idade<<"anos! \n";}
	   
   
  
  
  	return 0;	
}
  	
  	
  	
  	

