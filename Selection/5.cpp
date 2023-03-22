#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int first_digit = n % 10, second_digit = (n % 100) / 10, third_digit = (n % 1000) / 100;
    int res = 0;
    if (n < 10000)
        cout << "This is a small number.\n";
    else {
        res = first_digit + second_digit + third_digit;
        if(res % 2 != 0)
            cout << "This is a great number. \n";
        else 
        {
            if (first_digit % 2 != 0 || second_digit % 2 != 0 || third_digit % 2 != 0)
                cout << "This is a good number. \n"; 
            else 
                cout << "This is a bad number. \n";
        }
    }
        
}
