#include <iostream>


 using namespace std;
 
 
 // fun��o sem retorno e sem par�metro
 void semretorno(){
 cout << "Ola!";
 }
 
 //fun��o sem retorno e com par�metro
 void comparametro(string msg){
 	cout << msg;
 	
 }
 
 //fun��o com retorno e sem par�metro
 int comretorno(){
 	return 20;
 	//retorna o n�mero 20
 }
 
 //fun��o com retorno e com par�metro
 string comretornoecomparametro(string msg){
 	
 return msg + ",obrigado!";
 		
 }
 
 
 
 int main ( ){
 	
 	semretorno();//chamada fun��o
 	
 	cout << endl;//pular linha 
 	
 	comparametro("Ola,seja bem-vindo!");
 	
 	cout << endl;// pular linha 
 	
 	cout << comretorno();
 	
 	cout << endl;
 	
 	cout << comretornoecomparametro("Volte sempre");
 	
 	return 0;
 }
