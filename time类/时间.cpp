#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // ���캯��
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // ��ʾʱ��
    void displayTime() {
        cout << "ʱ����: " << hours << "Сʱ " << minutes << "���� " << seconds << "��" << endl;
    }
};

int main() {
    int h, m, s;

    cout << "������Сʱ: ";
    cin >> h;
    cout << "���������: ";
    cin >> m;
    cout << "��������: ";
    cin >> s;

    Time time(h, m, s);
    time.displayTime();

    return 0;
}
