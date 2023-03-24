#include <iostream>

using namespace std;

int main()
{
     int n; cin >> n;

     double num, avarage=0,avarage_odd=0,even_count = 0,odd_count = 0;
    
     while(n>0)
    { 
        cin >> num;
        if(n % 2 == 0)
        {
            avarage += num;
            even_count++;
        }
        else 
        {
            avarage_odd +=num;
            odd_count++;
        }
    n--;
    }
        
    cout <<avarage / even_count<< " " <<avarage_odd / odd_count<< endl;

    return 0;
}
