#include <iostream>
#include <array>
using namespace std;

int main()
{
// Create an array that can hold 7 Fahrenheit temperatures
 array <double, 7> tempF;
// Display a welcome message
cout<< "Welcome to the temperature converter" << endl;;
// FOR each day from 1 to 7
    for (int i = 0; i < 7; i++)
        {
        //     Ask the user to enter the Fahrenheit temperature for that day
        cout<<"Enter temperature in Fahrenheit:\n " << endl;
        //     Store the temperature inside the array
        cin>>tempF[i];
        }
    cout<<endl;

// Display a message saying:
// "Fahrenheit     Celsius"
    cout<< "Fahrenheit\t Celsuis"<< endl;

// FOR each temperature inside the array
//     Get the Fahrenheit temperature from the array
    for (int index = 0; index <7; index++)
        {
//    Convert Fahrenheit to Celsius using the formula:
//     Celsius = (Fahrenheit - 32) * 5 / 9
        double celsius;
        celsius = (tempF[index] - 32) * 5 / 9;
        // Display the Fahrenheit temperature and the Celsius temperature next to each other
        cout << tempF[index] << "\t" << celsius << endl;
        }
    
cout<<endl;

    return 0;
}