
#include <iostream>
#include <locale.h>
 
   using namespace std;
    
    int main(){
 	int quant_p , quant_b;
 	
 	float preco_pao = 0.35, preco_broa =  1.50, total_a, poup ;
 	
 	 // quantidade de produtos vendidos 
 	 
 	cout << "Quantidade de paes vendidos:\n";
 	cin >> quant_p;
 	
 	cout << "Quantidade de broas vendidas:\n"; 
 	cin >>  quant_b;
 	
 	// calculo dos produtos arrecadados
 	
 	total_a = ( preco_pao * quant_p ) + ( preco_broa * quant_b);
 	
 	// total arrecadado * a porcentagem
 	poup = total_a * 0.10;
 	
 	// valor total e valor a ser guardado
 	
 	cout << "Valor total arrecadado: R$ " << total_a << endl;
 	cout << "Valor a ser guardado na poupanca: R$ " << poup << endl;
 	
 	
 	return 0;
 	
 }
