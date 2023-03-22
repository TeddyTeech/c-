#include <iostream>

using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int temp = num1;
    if (temp > num2)
        temp = num2;
    cout << temp << "\n";

    return 0;
}
