#include <iostream>
 
 using namespace std;
  int main(){
  	    
  	int t_p, t_m, t_g, quant_v;
  	float tam_p=30 , tam_m=40 , tam_g=50, total_a, vendas;
  	
  	cout << " Quantidades de camisetas fornecidas no tamanho P:\n ";
  	cin >> t_p;
  	
  	cout << " Quantidades de camisetas fornecidas no tamanho M:\n ";
  	cin >> t_m;
  	
  	cout << " Quantidades de camisetas fornecidas no tamanho G:\n ";
  	cin >> t_g;
  	
  	total_a = (t_p * tam_p ) + (t_m * tam_m ) + (t_g * tam_g );
  	 
  	vendas = total_a * quant_v;
  	
  	cout << " Total arrecadados em vendas: R$ " << total_a << endl;
  	
  	
  	
  	
return 0;
  }
