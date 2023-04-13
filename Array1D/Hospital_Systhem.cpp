#include <iostream>

using namespace std;


const int MAX_SPECIALATION = 20;
const int MAX_QUEE = 5;

string names[MAX_SPECIALATION + 1][MAX_QUEE + 1];

int status[MAX_SPECIALATION + 1][MAX_QUEE + 1];

int queue_length[MAX_SPECIALATION+1];
 

void hospital_system(int choice)
{
    while(true)
    {
        if( choice == 1) 
            add_patient();
        else if(choice == 2)
            print_all_patient();
        else if (choice == 3)
            get_next_patient();
        else 
            break;
    }
}
int Menu()
{
    int Choice;
    do 
    {
        cout << "Enter your choice: \n"
         << "1) Add new patient.\n"
         << "2) Print all patient.\n"
         << "3) Get next patient.\n"
         << "4) Exit.\n";
        cin >> Choice;
        if(cin.fail() || ( Choice < 1 || Choice > 4))
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "\nYour Choice not valid please try again!\n\n";
        }
    }while(cin.fail() || ( Choice < 1 || Choice > 4));

    return Choice;    
}

int main()
{
   hospital_system(Menu()); 
}


