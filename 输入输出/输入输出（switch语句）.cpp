#include <iostream>
int main() {
	std::cout << "��������������" << std::endl;
	char answer;
	std::cin>> answer;
    switch (answer) {
    case 'y':
    case'Y':
        std::cout << "������������" << std::endl;
        break;
    case 'n':
    case 'N':
        std::cout << "�������˳�" <<std:: endl;
        break;
    default:
        std::cout << "��Ч������" << std::endl;
        break;
    }
    return 0;
}