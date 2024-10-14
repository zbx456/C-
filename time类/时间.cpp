#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // 构造函数
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // 显示时间
    void displayTime() {
        cout << "时间是: " << hours << "小时 " << minutes << "分钟 " << seconds << "秒" << endl;
    }
};

int main() {
    int h, m, s;

    cout << "请输入小时: ";
    cin >> h;
    cout << "请输入分钟: ";
    cin >> m;
    cout << "请输入秒: ";
    cin >> s;

    Time time(h, m, s);
    time.displayTime();

    return 0;
}
