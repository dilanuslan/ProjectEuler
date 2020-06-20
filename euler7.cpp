//project euler
//9973
#include <iostream>

using namespace std;

bool isPrime(int n){
	bool answer = true;
	for (int i=2; i < n; i++){
		if(n%i == 0){
			answer = false;
		}
	}
	return answer;
}

int main(){
	
	int counter = 0;
	
	for(int i = 2; counter <= 10001; i++){
		if(isPrime(i)){
			counter++;
			if(counter == 10001){
				cout << counter << endl << i << endl;
			}
		}
	}

	return 0;
}

