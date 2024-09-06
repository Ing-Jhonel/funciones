#include <iostream> //sumaprimerosnumeros
using namespace std;

int sumaprimerosnumeros(int n){
	
	if(n==0){
		return 0;
	} else {
		return n + sumaprimerosnumeros(n-1);
	}
}

int main(){
	
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	cout << endl << endl;
	cout << "La suma de los primeros " << num << " numero es: ";
	cout << sumaprimerosnumeros(num) << endl;
	return 0;
}