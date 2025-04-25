#include <iostream>
#include <string>


 using namespace std;
 
 
 int main(){
 	
 	int max_p=10;
 	string nomes [max_p];
 	float precos [max_p];
 	int contador =0;
 	
 	while (true) {
 		if (contador >= max_p){
 			cout << "cadastro cheio." << endl;
 			break;
		 }
	 
 	cout << "cadastro do produtos \n" << (contador + 1) << "de" << max_p << ":" <<endl;
 	
 	cout << "Digite o nome do produto: ";
 	cin.ignore();
 	getline(cin,nomes[contador]);
 	
 	cout << "Digite o preco do produto: ";
 	cin >> precos [contador];
 	
 	contador++;
 	cout << "Produto cadastrado com sucesso! "<< endl;
 	
 	cout << "Deseja cadastrar um novo produto? (s/n): ";
 	char opcao;
 	cin >> opcao;
 	
 	if (opcao == 'n'|| opcao == 'N' ) {
 		break;
	 }
 	}
 
    cout << "Produtos cadastrados: " << endl;
    for (int i = 0; i < contador; i++) {
    	cout << "Produto" << (i+1) << ":" << nomes[i] << "-R$" << precos[i] << endl;
	} 	
 	

 	return 0;
 }
