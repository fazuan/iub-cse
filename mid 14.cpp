#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "Description: This program accepts a coordinate point A and determines the quadrant where it lies."<<endl;
    cout<< ""<<endl;

    int x, y;                                // Declares integer variable with label : x, y

    cout<< "Please enter x-coordinate of point A: "<<endl;      //Prompts the user for x-coordinate
    cin>> x;                                    // Takes user input and stores it in variable
    cout<< ""<<endl;

    cout<< "Please enter y-coordinate for point A: "<<endl;
    cin>> y;                                    // Takes user input and stores it in variable
    cout<< ""<<endl;

    if (x >0)                                   // Decides in which quadrant the point lies
    {
        if (y>0)

            cout<< "Point A lies on the first quadrant."<<endl;
    }
if (x>0)
{
    if (y<0)

        cout<< "Point A lies on the fourth quadrant."<<endl;
}
if (x<0)
{
    if (y>0)

        cout<< "Point A lies on the second quadrant."<<endl;
}
if (x<0)
{
    if (y<0)
        cout<< "Point A lies on the third quadrant."<<endl;
}
cout<< ""<<endl;
cout<< "The program is going to terminate."<<endl;
cout<< "Restart to try again."<<endl;

return 0;               //End of program
}                       //End of main body
