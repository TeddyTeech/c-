#include <iostream>

using namespace std;
int main()
{
    int x; cin >> x;
    int a,b,c,d,f,count=0;
    cin >> a >> b >> c >> d >> f;
    if(a<=x)
        count++;
    if(b <= x)
        count++;
    if(c <= x)
        count++;
    if(d<=x)
        count++;
    if(f<=x)
        count++;

    cout << count << " " << 5 - count << endl;
}
