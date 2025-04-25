#include <iostream>
#include <locale.h>
 
  using namespace std;
  
  int main (int argc,char** argv) {
  	 setlocale(LC_ALL,"portuguese");
  	 int p_N, s_N, t_N;
  	 
  	cout << "+=====================================+\n";
  	cout << "|      CLASSIFICAÇÃO DO TRIÂNGULO     |\n";
  	cout << "+=====================================+\n";
  	cout <<"\n";
  	
  	cout << "digite a primeira medida do triangulo:\n";
  	cin >> p_N;
  	cout << "\n";
  	 
  	cout << "digite a segunda medida do triangulo:\n";
  	cin >> s_N;
  	cout <<"\n";
  	 
    cout << "digite a terceira medida do triangulo:\n";
  	cin >> t_N;
  	cout << "\n";
  	 
  	if (p_N==s_N && p_N==t_N) {cout << "este é um triângulo equilátero! (possui todos os lados iguais) \n";}
  	else if (p_N==s_N || p_N==t_N || s_N==t_N) { cout <<"este é um triângulo isóscele! (os 2 lados são iguais)\n";}
  	else {cout << "este é um triângulo escaleno (todos lados são diferentes). \n";}
  	
  	
  	
  	return 0; 
}
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  
