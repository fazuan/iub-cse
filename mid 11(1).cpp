#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "This program checks if two numbers are equal or not."<<endl;
    cout<< ""<<endl;

    int num, number;                                // Declares integer variable with label : num1,num2

    cout<< "Please enter a number: "<<endl;       //Prompts the user for number
    cin>> num;                              // Takes user input and stores it in variable
    cout<< ""<<endl;

    cout<< "Please enter another number: "<<endl;   //Prompts the user for second number
    cin>> number;                                   // Takes user input and stores it in variable
    cout<< ""<<endl;

    if (num == number)                              // Declares the output for the numbers being equal
    {
        cout<< "" <<num<< " is equal to " <<number<< "."<<endl;
        cout<< ""<<endl;
    }
    else                                           //Declares the output for the numbers being unequal
    {
        cout<< "" <<num<< " is not equal to " <<number<< "."<<endl;

    }

cout<< "The program will now terminate."<<endl;
cout<< "Restart to try again."<<endl;

return 0;               //End of program
}                       //End of main body
