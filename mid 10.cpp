#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "This program displays the forename, surname and date of birth sequentially to the user."<<endl;                                // Declares integer variable with label : num
    cout<< ""<<endl;

    string forename, surname;

    cout<< "Please enter your fore name: "<<endl;       //Prompts the user for first name
    cout<< ""<<endl;
    cin>> forename;                                     //Takes user input

    cout<< "Please enter your surname: "<<endl;         // Prompts the user for last name
    cout<< ""<<endl;
    cin>> surname;                                      // Takes user input

    int birth;
    cout<< "Please enter your date of birth: "<<endl;   // Prompts the user for date of birth
    cout<< ""<<endl;
    cin>> birth;                                        //Takes user input
    cout<< ""<<endl;

    cout<< "" <<forename<< " " <<surname<< " " <<birth<< ".";           //Displays the output



return 0;               //End of program
}                       //End of main body

