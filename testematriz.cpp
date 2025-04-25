#include <iostream>

 using namespace std;
 
int main() {
	string funcionarios [5][2];
	 
   	 
   	 for(int lin=0; lin < 5; lin ++){
	 cout << "Informe o codigo do funcionario " << lin+1 << ":";
	 cin  >> funcionarios [lin][0];
	 cout << endl;
	 cout << "Informe o nome do funcionario ";
	 cin  >> funcionarios [lin] [1];
	 cout << endl;
     }
     
      for(int lin=0; lin < 5; lin ++){
	 cout << "codigo: " << funcionarios[lin][0]<< endl;
	 cout << " nome:  " << funcionarios[lin][1]<< endl;
	 cout << "========================== \n";
    }
    
   	 return 0; 
   }
