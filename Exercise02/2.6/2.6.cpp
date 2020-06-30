// 将光年转换为天文单位
#include<iostream>
double convert(double);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years << " light years = " << convert(light_years) << " astronmical units.";

    return 0;
}

double convert(double n)
{
    return n * 63240;
}