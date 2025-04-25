#include <iostream>


 using namespace std;

int main (){
	
	int a;
	float num1, num2, res;
	
	cout << "_________Calculadora____________\n";
	cout << "(1)-Adicao\n";
	cout << "(2)-subtracao\n";
	cout << "(3)-Multiplicacao\n";
	cout << "(4)-Divisão\n";
	cout << "(5)-Sair\n";
	cout << "_________Calculadora____________\n";
	cout<< "Escolha uma das opcoes\n";
	cin >> a;
	
	if(a>=1 && a<=4){
		do{
		
		cout << "Digite primeiro numero\n";
		cin>> num1;
		
	}while(num1< 1);{
		cout << "Digite segundo numero\n";
		cin>>num2;
	}
}
	
	switch(a){
		case 1: cout<< "Soma\n";
		 res=num1 + num2;
		break;
		case 2: cout<< "Subtracao\n";
		res= num1 - num2;
		break;
		case 3: cout<< "Multiplicacao\n";
		res= num1 * num2;
		break;
		case 4: cout<< "Divisao\n";
		res= num1 / num2;
		break;
		case 5:  cout<< "Saindo..\n";
		break;
		
	
	default: cout << "opção inválida\n";
		break;
	}
	
	cout << "Resultado:" <<res << endl;
	
	
	
	
	
	
	return 0;
}
