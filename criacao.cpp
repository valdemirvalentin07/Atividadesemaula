#include <iostream>
#include <locale.h>

using namespace std;
 
   
  void menssagem (string nome) {
  	cout << "Olá "<< nome << ",seja bem-vindo ao nosso centro de viagens. \n";
  	
  }
   

 int main (){
 	
 	setlocale(LC_ALL,"PORTUGUESE");
 	
 	int resp;
 	float valor=0;
 	
 	menssagem("Gahlego valentin");
 	
 	
 	cout << "Escolha as opcões de destino"<< endl;
 	cout << "______________VIAGENS_____________"<< endl;
 	cout << "[1]- ILHA BELA = COMBO COM ALMOÇO E JANTAR + PASSEIO DE JESTKI= R$1000,00"  << endl;
 	cout << "[2]- PRAIA GRANDE = COMBO COM ALMOÇO MAIS CHURRASCARIA E PASSEIO DE LANCHA EM LUGARES TURÍSTiCOS= R$2000,00"<< endl;
 	cout << "[3]- GUARUJÁ = POUSADA LA BARCA EM FRENTE AO MAR + PASSEIO TURÍSTICOS= 4500,00"<< endl;
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
          	cout << "opção inválida!\n";
          	  return 0;                 
	 }
	 
    cout << "Qual a forma de pagamento?"<< endl;
 	
 	cout << "[1]-DÉBITO"<< endl;
 	cout << "[2]-CRÉDITO"<< endl;
 	cout << "[3]-PIX"<< endl;
 	cin >> resp;
 	
 	if (resp==1) { cout << "Passar no débito, por favor!" << endl;
	 }else if (resp==2) {  cout << "Passar no crédito, por favor!" << endl;
	 }else if (resp==3)  {cout << "Passar no pix, por favor!" << endl;}
	 
   
	 
    cout << "Valor total:R$"<<valor<< ",00"<<endl;
 	
 	cout << "Obrigado por nos escolher, tenha uma ótima viagem!" << endl;
 	
 	
 	return 0;
 }
