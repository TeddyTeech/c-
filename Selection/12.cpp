#include <iostream>

using namespace std;

int main()
{
    int x; cin >> x;
    int a,b , c,d , f,g;
    cin >> a >> b >> c >> d >> f >> g;
    int count=0;
    if(x > a && x < b)
        count++;
    if(x > c && x < d)
        count++;
    if(x > f && x < g)
        count++;

    cout << count << endl;
}
