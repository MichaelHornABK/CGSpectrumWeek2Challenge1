#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;

    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    cout << "Enter the third number: ";
    int num3;
    cin >> num3;

    int sum = num1 + num2 + num3;
    float average = (float)sum / 3.0f;

    cout << "The sum is: " << sum << " and the average is " << average;
}