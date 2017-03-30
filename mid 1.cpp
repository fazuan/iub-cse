#include <iostream>                                //This includes input, output library

using namespace std;

int main ()                                         //This is the main function
{                                                  //Start of main body
    cout<< "What is your name?"<<endl;
    cout<< ""<<endl;                              // gap between two lines
    cout<< "Please enter your name: "<<endl;       //Prompts the user for her name
    cout<< ""<<endl;

    string name;

    cin>> name;                              // Takes user input and stores it in variable
    cout<< ""<<endl;
    cout<< "Hello there " <<name<< "!!";     //Displays the user's name and says hello

return 0;               //End of program
}                       //End of main body

