#include <iostream>

using namespace std;

int main()
{
    int x; cin >> x;
    int max,num,count = 2;
    cin >> num;
    max = num;
    if(num > max)
        max = num;
    cin >> num;
    if(num > max)
        max = num;
    if(count <= x)
    {
        cin >> num;
        count++;
        if(num > max)
            max = num;
    }
    if(count<= x)
    {
        cin >> num;
        count++;
        if(num>max)
            max = num;
    }
    if(count <= x)
    {
         cin >> num;
        count++;
        if(num>max)
            max = num;       
    }
     if(count <= x)
    {
         cin >> num;
        count++;
        if(num>max)
            max = num;       
    }  
    if(count <= x)
    {
         cin >> num;
        count++;
        if(num>max)
            max = num;       
    }
    if(count <= x)
    {
         cin >> num;
        count++;
        if(num>max)
            max = num;       
    }
    if(count <= x)
    {
         cin >> num;
        count++;
        if(num>max)
            max = num;       
    }
    cout << max << endl;
}
