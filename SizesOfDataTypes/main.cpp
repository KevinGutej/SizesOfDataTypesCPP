#include <iostream>

using namespace std;


void checkSizeOf()
{
    string chosenDataType;
    string buffer = " Bytes";
    bool finish = true;
    for(int i=0; i < 3; i++)
    {
    buffer = " Bytes";
    cout << "Options {int, string , float, char, bool, long, short, unsigned int, double}" << endl;
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
    cout << "[1] - Variable" << endl;
    cout << "[2] - Array" << endl;
    cout << "[3] - Pointer" << endl;
}

int main()
{
    int k;
    menu();
    cout << "Please choose a option" << endl;
    cin >> k;
    switch(k)
    {
    case 1:
        checkSizeOf();
        break;
    case 2:
        break;
    case 3:
        break;
    }
    return 0;
}
