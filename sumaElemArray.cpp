#include <iostream> //sumaElemArray
using namespace std;

int sumaElemArray(int arr[], int n){
	
	if (n <= 0)
        return 0;
    return arr[n - 1] + sumaElemArray(arr, n - 1);
}


int main(){
	
	int arreglo[]={1,2,3,4,5};
	
	int numerodeelementos = sizeof(arreglo)/sizeof(arreglo[0]);
	
	cout << "La suma del arreglo es: ";
	cout << sumaElemArray(arreglo, numerodeelementos) << endl;
	return 0;
}