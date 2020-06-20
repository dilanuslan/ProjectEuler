//project euler

#include <iostream>

using namespace std;

int main(){
	
	long long int sum1 = 0;
	long long int sum2 = 0;
	long long int sq;
	long long int tot = 0;
	long long int dif;
	
	for(int i = 1; i < 101 ; i++){
		sq = i * i;
		sum1 += sq;
	}
	
	for(int j = 1; j < 101 ; j++){
		tot += j;
	}
	sum2 = tot * tot;
	
	dif = sum2 - sum1;
	cout << dif << endl;

	return 0;
}

