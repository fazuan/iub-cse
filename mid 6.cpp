#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "This program returns the quotient and remainder of a division."<<endl;
    cout<< ""<<endl;

    int numerator, denominator;    // Declares integer variable with label : numerator, denominator

    cout<< "Please enter your factor's numerator :"<<endl;      //Prompts the user for numerator

    cin>> numerator;                              // Takes user input and stores it in variable
    cout<< ""<<endl;
    cout<< "Please enter your factor's denominator: "<<endl;  //Prompts the user for denominator

    cin>> denominator;                           // Takes user input and stores it in variable
    cout<< ""<<endl;

    int quotient, remainder;                      // Declares integer variable with label: quotient, remainder

    quotient = numerator / denominator;          // Formula for quotient
    remainder = numerator % denominator;         // Formula for remainder

    cout<< "The quotient is: " <<quotient<< "."<<endl;      // Displays the quotient to the user
    cout<< "The remainder is: " <<remainder<< "."<<endl;    // Displays the remainder to the user

    cout<< "The program will now terminate."<<endl;
    cout<< "Restart to try again."<<endl;

return 0;               //End of program
}                       //End of main body
