// 输入年龄，输出年龄几个月

#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    int ages;
    cout << "Enter your age: ";
    cin >> ages;
    cout << ages * 12 << " months.";
    

    return 0;
}