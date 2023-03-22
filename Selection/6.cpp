#include <iostream>

using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;

    bool a_is_even = int(a) % 2 == 0;
    bool b_is_even = int(b) % 2 == 0;

    if (!(a_is_even) && !(b_is_even))
        cout << a * b << "\n";
    else if(a_is_even && b_is_even)
    {
        if( b == 0)
            cout << "Cannot divide by zero\n";
        else 
            cout << a / b << endl;
    }
    else if (!(a_is_even) && b_is_even)
        cout << a + b << endl;
    else if(a_is_even && !(b_is_even))
        cout << a - b << "\n";

    return 0;
}
