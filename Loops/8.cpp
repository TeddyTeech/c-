#include <iostream>
using namespace std;

void traingle(int n)
{
    if(n == 0)
        return;

    traingle(n - 1);

    for (int i = 0; i < n;++i)
        cout << "*";
    cout << "\n";
}
int  my_pow(int x, int y)
{
    x *= x;
    if(y == 0)
        return 0;
    my_pow(x,y-1);
    return x;
    
}

int main()
{
    int n; cin >> n;
    traingle(n);

    cout << my_pow(2,2)<< endl;
    
    return 0;

}
