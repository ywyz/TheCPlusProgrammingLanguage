// 运用三个函数打印
#include <iostream>

void blind(void);
void see(void);

int main()
{
    blind();
    blind();
    see();
    see();

    return 0;
}

void blind(void)
{
    using std::cout;
    using std::endl;
    cout << "Three blind mice" << endl;
}

void see(void)
{
    using std::cout;
    using std::endl;
    cout << "See how they run" << endl;
}