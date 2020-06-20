//project euler

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	long long int n = 600851475143;
	long long int maxPrime;
	
	
	for (long long int i = 3; i <= n; i+=2){
		if (n % i == 0){
			maxPrime = i;
			n = n / i;
		}
	}
	
	cout << maxPrime;
	
	return 0;
}
