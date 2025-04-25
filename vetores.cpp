#include <iostream>
using namespace std;
int main() {
	
  int vetor [5]= {0,5,10,15,20};
  
cout<<"[0] = " << vetor[0] << endl;
cout<<"[1] = " << vetor[1] << endl;
cout<<"[2] = " << vetor[2] << endl;  
cout<<"[3] = " << vetor[3] << endl; 
cout<<"[4] = " << vetor[4] << endl;
 
 
for(int i=4; i>=0; --i){
cout<<"O resultado inverso ficaria: " << vetor[i] << endl;
}
 
	return 0;
}
