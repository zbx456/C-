#include<iostream>
using namespace std;
int main() {
	int a[100];
	int sum = 0;
	int i = 0;
	for (int i = 0; i < 100; i++) {
		a[i] = i + 1;
	}
	while (i < 100) {
		sum += a[i];
		i = i + 1;
	}
    	cout << sum;
	return 0;

}