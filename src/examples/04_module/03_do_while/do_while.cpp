#include "do_while.h"
#include <iostream>
//Write code for void function prompt_user to loop until
//user opts not to continue. 
using std::cout;  using std::cin; 
void prompt_user()
{
    char choice;

    do
    {
        display_menu();
        cout<<"Select a number \n\n";
        int menu_choice;
        cin>>menu_choice;

        execute_menu_choice(menu_choice);

        cout<<"Enter y to continue: ";
        cin>>choice;


    } while (choice == 'y' || choice == 'Y');

}

void display_menu()
{
    cout<<"1-Accounts Reveivable\n";
    cout<<"2-Accounts Payable \n";
    cout<<"3-Paroll \n";
    cout<<"Select a number \n\n";
}

void execute_menu_choice(int num)
{
    switch (num)
    {
        case 1:
            cout<<"You selected AR menu";
            break;
        case 2:
            cout<<"You selected AP menu";
            break;
        case 3:
            cout<<"You selected Payroll menu";
            break;
        case 4:
            cout<<"You will exit the program";
            break;
    }
}

