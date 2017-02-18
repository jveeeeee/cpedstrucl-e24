#include <iostream>
using namespace std;

int main(){
	int n=5,x=1;
	int A[] = {35,10,55,20,5};
	for (int i=0;i<n-1;i++){
		int min=A[i], index = i;
		for (int j=i+1; j<n;j++){
			if (A[j] < min){
				min = A[j];
				index = j;
			}
		}
	A[index] = A[i];
	A[i] = min;
	cout << "Pass#" << x++ << " ";		
	for (int z=0;z<n;z++){
	cout << A[z] << " ";
	}	
	cout << endl;
	}
}
