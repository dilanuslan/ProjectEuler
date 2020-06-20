//project euler

#include <iostream>

using namespace std;

int main(){


	int farray[35];
	int sum = 0;

	farray[0] = 1;
	farray[1] = 2;

	for (int i = 2; i <= 35 ; i++){
		farray[i] = farray[i-1] + farray[i-2];
		if (farray[i] < 4000000 && farray[i] % 2 == 0){
			sum += farray[i];
		}
	}

	
	sum += 2;
	
	cout << sum;
	
	return 0;
}
