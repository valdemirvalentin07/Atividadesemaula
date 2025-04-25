#include <iostream>
#include <locale.h>
using namespace std;
 
int main() {
setlocale(LC_ALL,"portuguese");
	string nome;
	int anoatual, anonasc, idade;
	float valorcomp, quantparc, valorparc;
	char resp; 
	
do{


    cout<<"Qual seu nome? \n";
    cin>> nome;
    
    cout<<"Qual ano atual? \n";
    cin>>anoatual;
    
    cout<<"Qual seu ano de nascimento? \n";
    cin>>anonasc;
    
    cout<<"Qual o valor total da sua compra? \n";
    cin>>valorcomp;
    
    idade = (anoatual - anonasc);

    if(idade >= 70 ) { quantparc = 3;}
	else if(valorcomp >= 1000) { quantparc = 12;}
	else if(valorcomp < 1000 && valorcomp >= 500) {quantparc = 9;}
	else if(valorcomp < 500 && valorcomp >= 200) { quantparc = 6;}
	else if(valorcomp < 200 && valorcomp >=50) { quantparc = 3;}
	else if(valorcomp < 50) {cout<<"Essa compra não poderá ser divida \n";}
	
	valorparc = (valorcomp / quantparc);
	
	cout<<"Nome do cliente:" << nome << endl;
	cout<<"Idade:" << idade << endl;
	cout<<"Valor da compra:" << valorcomp << endl;
	cout<<"Quantidade de parcelas:" << quantparc << endl;
	cout<<"Valor da parcela:" <<valorparc << endl;

 
    cout << "Deseja realizar um novo cálculo? (S/N)";
    cin >> resp;


    







}while(resp=='S'); 

	return 0;
}  
