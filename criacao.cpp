#include <iostream>
#include <locale.h>

using namespace std;
 
   
  void menssagem (string nome) {
  	cout << "Ol� "<< nome << ",seja bem-vindo ao nosso centro de viagens. \n";
  	
  }
   

 int main (){
 	
 	setlocale(LC_ALL,"PORTUGUESE");
 	
 	int resp;
 	float valor=0;
 	
 	menssagem("Gahlego valentin");
 	
 	
 	cout << "Escolha as opc�es de destino"<< endl;
 	cout << "______________VIAGENS_____________"<< endl;
 	cout << "[1]- ILHA BELA = COMBO COM ALMO�O E JANTAR + PASSEIO DE JESTKI= R$1000,00"  << endl;
 	cout << "[2]- PRAIA GRANDE = COMBO COM ALMO�O MAIS CHURRASCARIA E PASSEIO DE LANCHA EM LUGARES TUR�STiCOS= R$2000,00"<< endl;
 	cout << "[3]- GUARUJ� = POUSADA LA BARCA EM FRENTE AO MAR + PASSEIO TUR�STICOS= 4500,00"<< endl;
 	cout << "[4]- NENHUMA DAS ALTERNATIVAS"<< endl;
 	cin >> resp;	 
 	
 	switch(resp){
 		case 1: valor = 1000,00;
 	    break;
 		case 2: valor = 2000,00;
		break;
		case 3: valor = 4500,00;
		break;
		case 4: cout << "NENHUMA DAS ALTERNATIVAS"<<endl;
		return 0;
		default:
          	cout << "op��o inv�lida!\n";
          	  return 0;                 
	 }
	 
    cout << "Qual a forma de pagamento?"<< endl;
 	
 	cout << "[1]-D�BITO"<< endl;
 	cout << "[2]-CR�DITO"<< endl;
 	cout << "[3]-PIX"<< endl;
 	cin >> resp;
 	
 	if (resp==1) { cout << "Passar no d�bito, por favor!" << endl;
	 }else if (resp==2) {  cout << "Passar no cr�dito, por favor!" << endl;
	 }else if (resp==3)  {cout << "Passar no pix, por favor!" << endl;}
	 
   
	 
    cout << "Valor total:R$"<<valor<< ",00"<<endl;
 	
 	cout << "Obrigado por nos escolher, tenha uma �tima viagem!" << endl;
 	
 	
 	return 0;
 }
