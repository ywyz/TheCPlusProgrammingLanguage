// ���ú��������϶�ת��Ϊ�����¶�ֵ
#include<iostream>

float convert(float);
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    float temperature;
    cout << "Please enter a Celsius value: ";
    cin >> temperature;
    cout << temperature << " degrees Celesius is " << convert(temperature) << " degrees Fahrenheit.";
    
    return 0;
}

float convert(float n)
{
    return 1.8 * n + 32.0;
}