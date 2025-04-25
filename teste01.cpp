#include <iostream>
#include <locale.h>

 using namespace std;
 
 int main() {
 	
 	
 	setlocale(LC_ALL,"portuguese");
 	int n;
 	int totalc=64;
 	int totalg=0, gcasa=1;
 	
 	for (int i= 1; i= totalc; i++) {
 		totalg += gcasa;
 		gcasa*2;
	 }
	 
 	cout << "O total de grãos no tabuleiro é :" << totalg << endl;
    cin >> n;
return 0;
 	
 }
