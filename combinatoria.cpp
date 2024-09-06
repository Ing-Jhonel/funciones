#include <iostream> //combinatoria
using namespace std;

int combinatoria(int n, int k){
	
	if (n == k){
		return 1;
	} else{
		if (k==1){
			return n;	
		} else {
			return combinatoria(n-1, k-1) + combinatoria(n-1, k);
		}
	}
}

int main(){
	
	int num1, num2;
	
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << endl;
	cout << "La combinatoria de " << num1 << " y " << num2 << " es: " << combinatoria(num1, num2) << endl;
	return 0;
}