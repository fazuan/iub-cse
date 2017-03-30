#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< " Description : This program takes hours and minutes as input, and calculates the total number of minutes."<<endl;
    cout<< ""<<endl;

    int min, hour;

    cout<< "Please input the number of hours: "<<endl;      //Prompts the user for number of hours
    cout<< ""<<endl;
    cin>> hour;                                             // Takes user input and stores it in variable

    cout<< "Please input the number of minutes: "<<endl;    //Prompts the user for number of minutes
    cout<< ""<<endl;
    cin>> min;                                             // Takes user input and stores it in variables

    double total_min;                                       // Declares real values with label: total min

    total_min = (hour) * 60 + min;

   cout<< "Total minutes: " <<total_min<< ".";  //Displays the result to the user

   cout<< "This program is going to terminate."<<endl;
   cout<< "Restart to try again."<<endl;

return 0;               //End of program
}                       //End of main body
