#include <iostream>

using namespace std;

 float soma (float a, float b){
 float r;
 r= a+b;
 return r;
 }
 
 float subtracao (float a, float b){
 float r;
 r= a-b;
 return r;
}
 
 float multiplicacao (float a, float b){
 float r;
 r= a*b;
 return r;
}
 
 float divisao (float a, float b){
 float r = 0;
 if ( b > 0){
 	r= a/b;
 } else {
 	cout << "Valor invalido, nao e possivel dividir por zero \n";
 }
 return r;
}
 
 void ordenavetor (int vetA[], int tam){
 	int aux;
 	for (int i = 0; i < tam; i++){
 	 for (int j =0; j < tam - 1; j++){
 	 	if (vetA[j] > vetA[j+1] ){
 	 		//Algoritmo de troca 
 	 		aux = vetA[j];
 	 		vetA[j] = vetA[j+1];
 	 		vetA[j+1] = aux;
		  }
	  }
   } 
 for(int i=0; i < tam; i++){
 	cout << vetA[i] << "|";
  } 
}



void mensagem (string nome) {
	cout << "Ola " << nome <<", seja bem-vindo!!! \n";
}


int menu (){
	int op;
	cout << "|======== Calculadora=====|\n";
	cout << "1 - Soma \n";
	cout << "2 - Subtracao \n";
	cout << "3 - Multiplicacao \n";
	cout << "4 - Divisao \n";
	cout << "5 - Ordenar vetor\n";
	cout << "|=========================|\n";
	cout << "Escolha uma das opcoes \n";
	cin  >> op;
	
	return op;	
}



 int main(){
 	
 	int op=0, vetor[5]={100,12,67,45,1};
 	float n1=0,n2=0;
	 
 	mensagem("Nilton");
 
	 
 	op=menu();
 	
 	
 	
 	if (op>0 && op <5) {
 		  cout <<"Informe o primeiro numero \n";
 		  cin>>n1;
 		  
 		  cout <<"Informe o segundo numero \n";
 		  cin >> n2;
	 }
 	
 	switch(op){
 		case 1: cout << "Soma:" << soma(n1,n2);
 		 break;
 		case 2: cout << "Subtracao:" << subtracao(n1,n2);
 		 break;
 		case 3: cout << "Multiplicacao:" << multiplicacao (n1,n2);
 		 break;
 		case 4: cout << "Divisao:" << divisao (n1,n2);
 		 break;
 		 case 5: ordenavetor(vetor,5);
 		 break;
 		default: cout << "Opcao invalida! \n ";
 		 break;
 		 
 			
 		 	
 	  
	 }

 	
 	return 0;
 }
