#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Please give an input number:";
	cin >> n;
	while( n != 1 ){
		cout << n << "\n";
		if ( n % 2 != 0) n = 3*n+1;
		else n = n/2;
	}
	cout << n << "\n";
	return 0;
}