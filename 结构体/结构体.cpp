#include <iostream>
#include <cstring>

using namespace std;

struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

int main()
{
	Books Book1;        
	Books Book2;       

	strcpy_s(Book1.title, "C++ �̳�");
	strcpy_s(Book1.author, "Runoob");
	strcpy_s(Book1.subject, "�������");
	Book1.book_id = 12345;

	strcpy_s(Book2.title, "CSS �̳�");
	strcpy_s(Book2.author, "Runoob");
	strcpy_s(Book2.subject, "ǰ�˼���");
	Book2.book_id = 12346;

	cout << "��һ������� : " << Book1.title << endl;
	cout << "��һ�������� : " << Book1.author << endl;
	cout << "��һ������Ŀ : " << Book1.subject << endl;
	cout << "��һ���� ID : " << Book1.book_id<<"\n" << endl;

	cout << "�ڶ�������� : " << Book2.title << endl;
	cout << "�ڶ��������� : " << Book2.author << endl;
	cout << "�ڶ�������Ŀ : " << Book2.subject << endl;
	cout << "�ڶ����� ID : " << Book2.book_id << endl;

	return 0;
}