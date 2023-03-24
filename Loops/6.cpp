#include <iostream>

using namespace std;
int main()
{
   int row; cin >> row;
   int i=0;
   while( i < (row * 2 ) -1)
   {
        int j = 0;
        while(j < (row * 2) - 1)
        {
            if(j % 2 != 1)
                cout << "*";
            else 
                cout << " ";
        j++;
        }
        cout << "\n";
        i++;
   }
}
