#include <iostream>
#include <locale.h>


using namespace std;

int main() {
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	int resp;
	float resultado=0,num1=0,num2=0;
	
	do{
		
		cout << "+========MENU========+\n";
		cout << "| 1 - Soma           |\n";
		cout << "| 2 - Subtracao      |\n";
		cout << "| 3 - Multiplicacao  |\n";
		cout << "| 4 - Divisao        |\n";
		cout << "| 5 - Sair           |\n";
		cout << "|====================|\n";

       cout << "escolha uma das opcoes\n";
       cin  >> resp;
  
          if (resp >= 1 && resp <=4){
		  	
          cout << "Informe o primeiro número:\n";
          cin  >> num1;
           
          cout << "Informe o segundo número:\n";
          cin  >> num2;
      }
      
     
     
   switch (resp){  
         case 1: 
          cout << "soma\n";
          resultado = num1 + num2;
		  break;
         case 2:
          cout << "Subtração\n";
          resultado = num1 - num2;
          break;
         case 3:
          cout << "Multiplicação\n";
          resultado = num1 * num2;
          break;
         case 4:
          cout << "Divisão\n";
          resultado = num1 / num2;
          break; 
         case 5:
          cout << "saindo......\n";
          break;
          default:
          cout << "opção inválida!\n";
          break;
          	  
   }
  cout << "resultado: " << resultado << endl;
  
  
}while(resp != 5); 
 
 return 0;
}
