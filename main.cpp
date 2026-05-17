#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{

    // Create an empty list called shoppingList
    vector<string> list; // This holds all shopping items
    string item;         // This holds one item the user types

    // Display "Shopping List Program"
    // Display welcome message
    cout << "Hello, welcome to your shopping list!" << endl;
    cout << "Type done when you are finished." << endl;
    cout << endl;

    // Ask the user to enter an item
    cout << "Please enter an item, or type done to finish:\n " << endl;
    getline(cin, item);

    // WHILE item is not equal to "done"
    while (item != "done")
        {
        //Add item to shoppingList
        list.push_back(item);

        //     Ask the user to enter another item
        //     Store the answer in item
        cout << "Please enter another item, or type done to finish: " << endl;
        getline(cin, item);
        }

    cout << endl;

    // Display "Your shopping list:"
    cout << "Your shopping list is: " << endl;

    // FOR each item in shoppingList
    for (int index = 0; index < list.size(); index++)
        {
        //     Display the item
        cout << list[index] << endl;
        }

    cout << endl;

    return 0;
}
