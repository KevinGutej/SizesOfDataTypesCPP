#include <iostream>
#include <windows.h>


using namespace std;


void clearConsole()
{
    system("cls");
}


void pause()
{
    system("pause");
}


void space()
{
    cout << endl;
}


void sizeOfPointer()
{
    clearConsole();

    int number = 5;
    int* pointer = &number;
    cout << "Not matter what you chosen, it will always be the same " << sizeof(pointer) << " Bytes." <<  endl;
}


void checkSizeOfArray()
{
    string chosenDataTypeOfArray;
    int sizeOfArray;
    string buffer = " Bytes";
    clearConsole();

    for(int i=0; i < 3; i++)
    {
        pause();
        clearConsole();
        buffer = " Bytes";
        bool finish = true;



        cout << "Options {int, string , float, char, bool, long, short, unsigned int, double}" << endl;
        cout << "What data Type of Array would you like to find the size of: ";
        cin >> chosenDataTypeOfArray;
        cout << "What size would you like your array to be: ";
        cin >> sizeOfArray;
        if(sizeOfArray == 1)
        {
            cout << "Try using this command in the variable section" << endl;
            return;
        }
        if(sizeOfArray < 0)
        {
            cout << "An array can't have a negative size" << endl;
            continue;
        }
        if(chosenDataTypeOfArray == "int")
        {
            cout << sizeof(int) * sizeOfArray;
        }
        else if(chosenDataTypeOfArray == "string")
        {
            cout << sizeof(string)  * sizeOfArray;
        }
        else if(chosenDataTypeOfArray == "float")
        {
            cout << sizeof(float)  * sizeOfArray;
        }
        else if(chosenDataTypeOfArray == "char")
        {
            cout << sizeof(char)  * sizeOfArray;
        }
        else if(chosenDataTypeOfArray == "bool")
        {
            cout << sizeof(bool)  * sizeOfArray;
        }
        else if(chosenDataTypeOfArray == "long")
        {
            cout << sizeof(long)  * sizeOfArray;
        }
        else if(chosenDataTypeOfArray == "short")
        {
            cout << sizeof(short)  * sizeOfArray;
        }
        else if(chosenDataTypeOfArray == "unsigned int")
        {
            cout << sizeof(unsigned int)  * sizeOfArray;
        }
        else if(chosenDataTypeOfArray == "double")
        {
            cout << sizeof(double)  * sizeOfArray;
        }
        else
        {
            cout << "Your option is incorrect, Please try again: ";
                finish = false;
                buffer = "";
        }
        cout << buffer << endl;
        if(finish == true)break;

    }
}


void checkSizeOf()
{
    clearConsole();

    string chosenDataType;
    string buffer = " Bytes";
    bool finish = true;

    for(int i=0; i < 3; i++)
    {
    pause();
    clearConsole();
    buffer = " Bytes";
    finish = true;
    cout << "Data Type Options: int, string , float, char, bool, long, short, unsigned int, double" << endl;
    space();
    cout << "What data Type would you like to find the size of: ";
    cin >> chosenDataType;
    if(chosenDataType == "int")
    {
        cout << sizeof(int);
    }
    else if(chosenDataType == "string")
    {
        cout << sizeof(string);
    }
    else if(chosenDataType == "float")
    {
        cout << sizeof(float);
    }
    else if(chosenDataType == "char")
    {
        cout << sizeof(char);
        buffer = " Byte";
    }
    else if(chosenDataType == "bool")
    {
        cout << sizeof(bool);
        buffer = " Byte";
    }
    else if(chosenDataType == "long")
    {
        cout << sizeof(long);
    }
    else if(chosenDataType == "short")
    {
        cout << sizeof(short);
    }
    else if(chosenDataType == "unsigned int")
    {
        cout << sizeof(unsigned int);
    }
    else if(chosenDataType == "double")
    {
        cout << sizeof(double);
    }
    else
    {
        cout << "Your option is incorrect, Please try again: ";
            finish = false;
            buffer = "";

    }
    cout << buffer << endl;
    if(finish == true)break;
    }
}


void menu()
{
    space();
    cout << "[1] - Variable" << endl;
    cout << "[2] - Array" << endl;
    cout << "[3] - Pointer" << endl;
    cout << "[0] - Exit" << endl;
    space();
}


int main()
{
    int k{100};
    while(k != 0)
    {
        menu();
        cout << endl;
        cout << "[System] - Please choose a option: ";
        cin >> k;
        switch(k)
        {
        case 1:
            checkSizeOf();
            break;
        case 2:
            checkSizeOfArray();
            break;
        case 3:
            sizeOfPointer();
            break;
        }
    }
    return 0;
}
