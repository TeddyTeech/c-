#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3,temp;
    cin >> num1 >> num2 >> num3;
    if(num2 < num1)
    {
        //we swap them.
       temp = num1;
       num1 = num2;
       num2 = temp;
    }
    // Now num1 and num2 are correct
    if(num3 < num2)
    {
        // we swap num3 and num2
        temp = num2;
        num2 = num3;
        num3 = temp;
       // now num3 and num2 are correct but num1 and num2 maybe not. 
        if(num2 < num1)
        {
        temp = num1;
        num1 = num2;
        num2 = temp;
        }
    } 

    cout << num1 << " " << num2 << " " << num3 << "\n";
    return 0;
}
