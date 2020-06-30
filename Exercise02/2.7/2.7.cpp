// 按照格式显示时间
#include <iostream>
void print(int hour, int minute);
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    int hours, minute;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    print(hours, minute);

    return 0;
}

void print(int hour, int minute)
{
    using std::cout;
    cout << "Time: " << hour << ":" << minute;
}