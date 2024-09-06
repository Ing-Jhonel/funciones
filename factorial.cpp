#include <iostream> //factorial
using namespace std;

int factorial(int n){
	
	if(n==0){
		return 1;
	} else {
		return n*factorial(n-1);
	}
}

int main(){
	
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	cout << endl << endl;
	cout << "El factorial de " << num << " es: ";
	cout << factorial(num) << endl;
	return 0;
}