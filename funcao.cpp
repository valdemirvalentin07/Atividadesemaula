#include <iostream>


 using namespace std;
 
 
 // função sem retorno e sem parâmetro
 void semretorno(){
 cout << "Ola!";
 }
 
 //função sem retorno e com parâmetro
 void comparametro(string msg){
 	cout << msg;
 	
 }
 
 //função com retorno e sem parâmetro
 int comretorno(){
 	return 20;
 	//retorna o número 20
 }
 
 //função com retorno e com parâmetro
 string comretornoecomparametro(string msg){
 	
 return msg + ",obrigado!";
 		
 }
 
 
 
 int main ( ){
 	
 	semretorno();//chamada função
 	
 	cout << endl;//pular linha 
 	
 	comparametro("Ola,seja bem-vindo!");
 	
 	cout << endl;// pular linha 
 	
 	cout << comretorno();
 	
 	cout << endl;
 	
 	cout << comretornoecomparametro("Volte sempre");
 	
 	return 0;
 }
