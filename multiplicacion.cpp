#include <iostream> //multiplicacion
using namespace std;

int multiplicacion(int a, int b){
	
	if(b==0){
		return 0;
	} else {
		return a + multiplicacion(a, b-1);
	}
}

int main(){
	
	int num1, num2;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << endl << endl;
	cout << "Ingrese el primer numero: ";
	cin >> num2;
	cout << endl << endl;
	cout << multiplicacion (num1, num2) << endl;
	return 0;
}