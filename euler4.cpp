//project euler

#include <iostream>

using namespace std;

int palin(int x){
	long long int a;
	long long int sum = 0;
	while (x > 0){
		a = x % 10;
		sum = (sum*10) + a;
		x = x / 10;
	}
	return sum;
}

int main(){
	
	int max = -1;
	long long int num, temp, m;
	
	for(int i=100; i < 1000; i++){
		for(int j=100; j < 1000; j++){
			num = i*j;
			temp = num;
			m = palin(num);
			if(temp == m && temp > 900000){
				cout << temp << endl;
			}
		}
	}
	
	return 0;
}
