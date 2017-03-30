#include <iostream>                          //This includes input, output library

using namespace std;

int main ()                                  //This is the main function
{                                             //Start of main body
    cout<< "What is your name?"<<endl;       //Prompts the user for her name
    cout<< "Please enter your name."<<endl;
    cout<< ""<<endl;

    string name;                              // Declares words with the label: name

    cin>> name;                              // Takes user input and stores it in variable
    cout<< ""<<endl;

    int birth, number;                       // Declares integer with the label: birth, number

    cout<< "What is your year of birth?"<<endl;
    cout<< "Please enter your year of birth: "<<endl;   //Prompts the user for her date of birth
    cout<< ""<<endl;
    cin>> birth;                                        // Takes user input and stores it in variable
    cout<< ""<<endl;

    cout<< "What is your mobile number?"<<endl;         // Prompts the user for her mobile number
    cout<< "Please enter your mobile number: "<<endl;
    cout<< ""<<endl;
    cin>> number;                                       // Takes user input and stores it in variable
    cout<< ""<<endl;

    cout<< "Name: " <<name<< "."<<endl;                     //Displays the name to the user
    cout<< "Year of birth: " <<birth<< "."<<endl;           // Displays the year of birth to the user
    cout<< "Mobile number: " <<number<< "."<<endl;          // Displays the mobile number to the user





return 0;               //End of program
}                       //End of main body
