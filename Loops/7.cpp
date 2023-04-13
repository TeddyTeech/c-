#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int rows = n,i=1;
    while(rows > 0)
    {
        int stars=0,spaces = 0;
        while(spaces < n-1)
        {
           cout << " ";
           spaces++;
        }
        while(stars < i)
        {
           cout << "*";
           stars++;
        }
        cout <<"\n";
        rows--;
        n--;
        i+=2;
    }
}
