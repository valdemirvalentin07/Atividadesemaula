  
#include <iostream>
#include <locale.h>


  using namespace std;
  
  
  int main () {
  	
  	setlocale(LC_ALL,"portuguese");
  	
  	int n;
  	int t1= 0, t2= 1, nexterm=0;
  	
  	cout<< "digite o n�meros de termos da sequ�ncia de fibonacci que deseja:"<<endl;
  	cin>>n;
  	
  	cout<< "S�rie de fibonacci :" << t1 << "," << t2 ;
  	
  	for (int i=3; i<= n; i++) {
  		int nexterm= t1 + t2;
  		cout << "," << nexterm;
  	    t1=t2;
  		t2= nexterm;
  		
	  }
	   
  	
  	
  	return 0;
  }
  	
