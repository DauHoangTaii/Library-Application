#include "System.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;


System::System()
{
    //ctor
}
void System::run()
{
    menu_main();
}

bool System::login()
{
    char userAdmin[10];
    char passAdmin[10];
    cout << "-----------Admin Login----------" << endl;
    cout << "Enter username: ";
    cin >> userAdmin;
    cout << "Enter password: ";
    cin >> passAdmin;
    system("cls");
    if( (strcmp(userAdmin, ADMINUSER) == 0) &&
	    ( strcmp(passAdmin, ADMINPASSWORD) == 0)) {
	        return true;
	    }
	    return false;
}

void System::menu_main()
{
    int choice;
    system("cls");
    cout << "---------------Library Management Version 1.0--------------"<<endl;
    cout << "[1]. Login With Admin " << endl;
    cout << "[2]. Login With User " << endl;
    cout << "[0]. Exit " << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    while(choice < 0 || choice > 2)
    {
        cout << "Error: Invalid Choice. Please try again!" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }
    switch(choice)
    {
    case 1: // login with admin
        system("cls");
        while(!login())
        {
            cout << "Invalid username or password. Please try again!" << endl;
            system("pause");
            system("cls");
        }
        system("cls");
        menu_admin_manager();
        break;
    case 2:
        menu_user();
        break;
    case 0:
        cout << "Thank you for using it!!";
        exit(0);
    }
}

void System::menu_admin_manager()
{
    int choice;

    cout << "Admin Login is Successful !!"<<endl;

    system("pause");
    system("cls");

    cout << "---------------Admin Manager-----------------" << endl;
    cout << "[1]. Book Manager" << endl;
    cout << "[2]. User Manager" << endl;
    cout << "[3]. Worker Manager" << endl;
    cout << "[4]. Logout" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    while(choice < 1 || choice > 4)
    {
        cout << "Error: Invalid Choice. Please try again!" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }

    switch(choice)
    {
    case 1:
        menu_book_manager();
        break;
    case 2:
        menu_user_manager();
        break;
    case 3:
        menu_worker_manager();
        break;
    case 4:
        menu_main();
    }
}

void System::menu_user_manager()
{
    int choice;

    system("cls");

    cout << "[1]. Add user" << endl;
    cout << "[2]. Update user" << endl;
    cout << "[3]. Delete user" << endl;
    cout << "[4]. Search user" << endl;
    cout << "[5]. Show user" << endl;
    cout << "[6]. Back" << endl;
    cout << "[0]. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    while(choice < 0 || choice > 6)
    {
        cout << "Error: Invalid Choice. Please try again!" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }

    switch(choice)
    {
    case 0:
        cout << "Thank you for using it !!";
        exit(0);
    case 1:
        cout << "Day la cho add";
        break;
    case 2:
        cout << "day la cho update";
        break;
    case 3:
        cout << "day la cho delete";
        break;
    case 4:
        cout << "day la cho search";
        break;
    case 5:
        cout << "day la cho show ";
        break;
    case 6:
        menu_admin_manager();
        break;
    }
}

void System::menu_user()
{
    system("cls");
    cout << "[1]. Rent book" << endl;
    cout << "[2]. Return book" << endl;
    cout << "[3]. Show personal information" << endl;
    cout << "[4]. Back" << endl;
    cout << "[0]. Exit" << endl;
}

void System::menu_book_manager()
{
    int choice;

    system("cls");

    cout << "[1]. Add book" << endl;
    cout << "[2]. Update book" << endl;
    cout << "[3]. Delete book" << endl;
    cout << "[4]. Search book" << endl;
    cout << "[5]. Show book" << endl;
    cout << "[6]. Back" << endl;
    cout << "[0]. Exit" << endl;

    cout << "Enter your choice: ";
    cin >>choice;

    while(choice < 0 || choice > 6)
    {
        cout << "Error: Invalid Choice. Please try again!" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }

    switch(choice)
    {
    case 0:
        cout << "Thank you for using it !!";
        exit(0);
    case 1:
        cout << "Day la cho add";
        break;
    case 2:
        cout << "day la cho update";
        break;
    case 3:
        cout << "day la cho delete";
        break;
    case 4:
        cout << "day la cho search";
        break;
    case 5:
        cout << "day la cho show ";
        break;
    case 6:
        menu_admin_manager();
        break;
    }

}
void System::menu_worker_manager()
{
    int choice;

    system("cls");
    cout << "[1]. Add employee" << endl;
    cout << "[2]. Update employee" << endl;
    cout << "[3]. Delete employee" << endl;
    cout << "[4]. Show employee" << endl;
    cout << "[5]. Search employee" << endl;
    cout << "[6]. Back" << endl;
    cout << "[0]. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    while(choice < 0 || choice > 6)
    {
        cout << "Error: Invalid Choice. Please try again!" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }

    switch(choice)
    {
    case 0:
        cout << "Thank you for using it !!";
        exit(0);
    case 1:
        cout << "Day la cho add";
        break;
    case 2:
        cout << "day la cho update";
        break;
    case 3:
        cout << "day la cho delete";
        break;
    case 4:
        cout << "day la cho search";
        break;
    case 5:
        cout << "day la cho show ";
        break;
    case 6:
        menu_admin_manager();
        break;
    }
}


System::~System()
{
    //dtor
}