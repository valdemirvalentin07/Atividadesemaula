#include <iostream>
#include <locale.h>

 using namespace std;
 
 int main() {
 	
 	
 	setlocale(LC_ALL,"portuguese");
 	 
 	int grao;
 	int q1=0, q2=1, nexterm=0, n=64;
 	
 	cout << "Digite a quantidade de grãos que deseja no tabuleiro de xadrez: \n";
 	cin >>grao;
 	
 	cout << "Cada quadrado do tabueliro de xadrex tem:" << q1 <<","<< q2;
 	
 	for (int i=3; i<= n; i++) {
  		int nexterm= q1 + q2;
  		cout << "," << nexterm;
  	    q1=q2;
  		q2= nexterm;
 	 
	 }

return 0;
 	
 }
