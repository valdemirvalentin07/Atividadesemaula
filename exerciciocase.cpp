
#include <iostream>
#include <locale.h>


  using namespace std;
 
 
  int main() {
   setlocale(LC_ALL,"PORTUGUESE");
   
   int resp;
   float resultado, num1, num2;
   
  do { 
   
  system("cls");
  resultado=0;
  num1=0;
  num2=0;
  
   cout << "+==========================+\n";
   cout << "|1-Soma                    |\n";
   cout << "|2-Subtra��o               |\n";
   cout << "|3-Multiplica��o           |\n";
   cout << "|4-Divis�o                 |\n";
   cout << "|5-Sair                    |\n";
   cout << "+==========================+\n";
   cout << "Escolha a op��o:\n";
   cin >> resp;
   
   
          if (resp >= 1 && resp <=4){
		  do{
		  	
          cout << "Informe o primeiro n�mero:\n";
          cin  >> num1;
          
          }while(num1 < 1);
           
          cout << "Informe o segundo n�mero:\n";
          cin  >> num2;
      
      }
          
   switch (resp){  
         case 1: 
          cout << "soma\n";
          resultado = num1 + num2;
		    
              break;
        case 2:
         cout << "Subtra��o\n";
          resultado = num1 - num2;
              break;
        case 3:
         cout << "Multiplica��o\n";
          resultado = num1 * num2;
              break;
        case 4:
         cout << "Divis�o\n";
          resultado = num1 / num2;
              break; 
        case 5:
        cout << "saindo......\n";
              break;
          default:
          	cout << "op��o inv�lida!\n";
          	  break;
          	  
   }
  cout << "resultado: " << resultado << endl;
  
  system("pause");
  
  
}while(resp != 5); 
  
  
    
  return 0;
  
   }
