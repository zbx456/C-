#include<iostream>
using namespace std;
int main() {
	cout << "��������������" << endl;
    	char answer;
		cin >> answer;
	if (answer == 'y' || answer == 'Y') {
		cout << "��ӭ�������" << endl;
	}
	else if (answer == 'n' || answer == 'N') {
        		cout << "�������" << endl;
	}
	else {
		cout << "�������" << endl;
	}
	return 0;
}