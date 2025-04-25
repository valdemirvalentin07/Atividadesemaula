#include <iostream>

 using namespace std;
  
 int main (){
 	
 	string nome;
 	setlocale(LC_ALL,"portuguese");
 	
 	int perso1, perso2, perso3;
 	
 	cout <<"digite seu nome:\n";
 	getline(cin,nome);
 	cout << "\n";
 	
 	cout << "digite o primeiro personagem:\n";
 	cin >> perso1;
 	cout << "\n";
 	
 	cout << "digite o segundo personagem:\n";
 	cin >> perso2;
 	cout << "\n";
 	
 	cout << "digite o terceiro personagem:\n";
 	cin >> perso3;
 	cout << "\n";
 	
 	if (perso1==perso2 && perso2==perso3) {cout << "ele tem ataque magico! (ele so é magico quando todos os personagens sao iguais.)\n";}
 	else if ( perso1 == perso2 || perso1 == perso3|| perso2 ==   perso3) {cout << "ele tem ataque basico! (ele so tem ataque basico se os dois personagens forem diferentes.)\n";}
	else    {cout << " destruição! ele usara seu poder mais forte! (quando todos os personagens forem iguais.)\n";}
	
 	
 	
 	
 	
 	return 0;
 }
