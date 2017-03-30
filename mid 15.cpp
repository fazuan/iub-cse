#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "Description: This program reads roll number, name and marks of three subjects and calculate the total, percentage and division." <<endl;
    cout<< ""<<endl;

  int roll, cse, mat, hea;                                          //Declares integer variable with label: roll, mat, hea

    cout<< "Input the roll number of the student"<<endl;            //Prompts the user for roll number
    cin>> roll;                                                    // Takes user input and stores it in variable
    cout<< ""<<endl;

    string name;                                                   //Declares alphabetical variable with label: name

    cout<< "Input the name of the student."<<endl;              // Prompts the user for name
    cin>> name;                                                 // Takes user input
    cout<<"";

    cout<< "Input the marks of CSE 100."<<endl;             //Prompts the user for CSE mark
    cin>> cse;                                              // Takes user inputand stores it in variable
    cout<< ""<<endl;

    cout<< "Input the marks of MAT104."<<endl;            //Prompts the user for MAT104 mark
    cin>> mat;                                           //Takes user input and stores it in variable
    cout<< ""<<endl;

    cout<< "Input the marks of HEA 10l."<<endl;          //Prompts the user for HEA mark
    cin>> hea;                                           // Takes user input and stores it in variable
    cout<< ""<<endl;

double total_mark, percentage;

total_mark = cse + mat + hea;                           // Formula for total mark stated
percentage = (total_mark) /300 *100;                    //Formula for percentage stated

cout<< "Roll number: " <<roll<< "."<<endl;              // Displays the roll number
cout<< "Name of the student: " <<name<< "."<<endl;      // Displays the student's name
cout<< ""<<endl;
cout<< "Marks in CSE 100: " <<cse<< "."<<endl;          // Displays CSE mark
cout<< "Marks in MAT 104: " <<mat<< "."<<endl;          // Displays MAT mark
cout<< "Marks in HEA 101: " <<hea<< "."<<endl;          // Displays HEA mark
cout<< ""<<endl;
cout<< "Total marks: " <<total_mark<< "."<<endl;        // Displays total mark
cout<< "Percentage: " <<percentage<< "."<<endl;         // Displays percentage

if (percentage > 90)                                    // Decides the division
{
    cout<< "Division: first"<<endl;
}
if (percentage <90)
{
    if (percentage >50)
        cout<< "Division: second."<<endl;
}
else
{
    cout<< "Division : third." <<endl;
}


return 0;               //End of program
}                       //End of main body
