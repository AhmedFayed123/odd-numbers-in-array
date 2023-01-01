#include<iostream>

using namespace std;
int main() {
	int x[5];
	int i;
	for ( i = 0; i < 5; i++) {
		cout << "[" << i << "]=";
		cin >> x[i];
	
	}
	for (int i = 0; i < 5; i++) 
		if (x[i] % 2 == 1) {
			cout << "odd nmber is \n" << x[i] << endl;
		}
	
	
	return 0;
}