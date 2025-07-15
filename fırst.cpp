#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
 map<string, int> inventory;

 while (true) {
    cout << "\nOptions:\n";
    cout << "1. add fruit\n";
    cout << "2. View inventory\n";
    cout << "3. Check quantity\n";
    cout << "4. Exit\n";

     string choice;
     cout << "Enter choice (1-4)";
     getline(cin, choice);
     if (choice == "1" ) {
        string fruit;
        int quantity;

        cout << "Fruit name: ";
        getline(cin, fruit);

        cout << "Quantity: ";
        cin >> quantity;
        cin.ignore(); // To consume the newline character

        inventory[fruit] = quantity;
        cout << quantity << " " << fruit << " added!\n";

     }
     //this line is true if the input is 2
     else if (choice == "2") {
        cout << " While fruit? ";
        gerline(cin, fruit);

        if (inventory. find(fruit) != inventory. end()) {
                cout << " There are " << inventory[fruit] <<" " <<fruit <<
                " available\n";}

        else {
                cout << "No  << fruit << " in inventory\n";


        }


        }
        return 0;
 }


}
