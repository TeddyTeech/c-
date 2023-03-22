#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int temp = num1;

    if (temp > num2)
        temp = num2;

    else if(temp > num3)
        temp = num3;
    
    cout << temp << endl;

    return 0; 
}
