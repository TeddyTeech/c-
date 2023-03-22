#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    // find the min number then the sec min number 
    int temp = 0;
    if (num1 > num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    else if(num1 > num3){
        temp = num3;
        num3 = num1;
        num1 = temp;
    }
    else if(num2 > num3){
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
        

    cout << num1 << num2 << num3 << "\n";
    return 0;
}
