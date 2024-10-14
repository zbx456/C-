#include<iostream>
using namespace std;
int main() {
	cout << "允许程序的运行吗？" << endl;
    	char answer;
		cin >> answer;
	if (answer == 'y' || answer == 'Y') {
		cout << "欢迎进入程序" << endl;
	}
	else if (answer == 'n' || answer == 'N') {
        		cout << "程序结束" << endl;
	}
	else {
		cout << "输入错误" << endl;
	}
	return 0;
}