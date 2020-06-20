//project euler

#include <iostream>

using namespace std;

int main(){
	
	int a,b,c;
	long long int x;
	
	for(a=1; a < 1000 ; a++){
		for(b=1; b < 1000; b++){
			for(c=1; c<1000; c++){
				if ((a*a == b*b + c*c) && (a+b+c == 1000)){
					x = a*b*c;
					cout << a << endl << b << endl << c << endl << x << endl;
				}
			}
		}
	}
	return 0;
}
