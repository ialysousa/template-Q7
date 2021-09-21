#include <iostream>
#include <string>
using std::cout, std::endl;
using std::string;

#include "Fila.h"

int main() {
  Fila<> fi;
  int filaEi;
  for (int i=10; i>0; i--){
  	fi.empurra(i);
  	cout << "Empurra " << i << endl;
  }
  cout << endl;
  for (int i=0;i<10;i++){ 
  	fi.fila(filaEi);
  	cout << "Fila = " << filaEi << endl;
  }
  cout << endl << endl;
  
  Fila<double> fd;
  double filaEd;
  for (double i=0.1; i<=1.0; i+=0.1){
	fd.empurra(i);
  	cout << "Empurra "<< i << endl;	  
  }
  cout << endl;
  for (int i=0; i<10; i++){
  	fd.fila(filaEd);
  	cout << "Fila = " << filaEd << endl;	  
  }  
  cout << endl << endl;
  
  Fila<string,10> fs;
  string filaEs;
  fs.empurra("string 1");
  cout << "Empurra string 1" << endl;
  fs.empurra("string 2");
  cout << "Empurra string 2" << endl;
  fs.empurra("string 3");
  cout << "Empurra string 3" << endl;
  fs.empurra("string 4");
  cout << "Empurra string 4" << endl;
  fs.empurra("string 5");
  cout << "Empurra string 5" << endl;
  fs.empurra("string 6");
  cout << "Empurra string 6" << endl;
  fs.empurra("string 7");
  cout << "Empurra string 7" << endl;
  fs.empurra("string 8");
  cout << "Empurra string 8" << endl;
  fs.empurra("string 9");
  cout << "Empurra string 9" << endl;
  fs.empurra("string 10");
  cout << "Empurra string 10" << endl;
  cout << endl;
  for (int i=0;i<10;i++){
	fs.fila(filaEs);
	cout << "Fila = " << filaEs << endl; 
  }	
  
  return 0;
}
