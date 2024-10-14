#include <iostream>
int main() {
	std::cout << "允许程序的运行吗" << std::endl;
	char answer;
	std::cin>> answer;
    switch (answer) {
    case 'y':
    case'Y':
        std::cout << "程序正在运行" << std::endl;
        break;
    case 'n':
    case 'N':
        std::cout << "程序已退出" <<std:: endl;
        break;
    default:
        std::cout << "无效的输入" << std::endl;
        break;
    }
    return 0;
}