#include <iostream>

using namespace std;
int main()
{
    double num1, num2;
    char operation;
    cin >> num1 >> operation >> num2;
    if (operation == '+')
        cout << num1 + num2 << endl;
    else if (operation == '-')
        cout << num1 - num2 << endl;
    else if(operation == '*')
        cout << num1 * num2 << endl;
    else if (operation == '/')
        cout << num1 / num2 << endl;
    else 
        cout << "Undifinde operation\n";

    return 0;
}
    
