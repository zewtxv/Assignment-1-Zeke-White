#include <iostream>
#include "function.h"

using namespace std;
int numbersFromFile[150];
int arraySize = 0;
char userChoice;
int main() {



    readDataFile(numbersFromFile, arraySize);
    userChoice = printMenu();
    while (userChoice != 'Q') {
        if (userChoice == 'L') {
            int numberSeeked;
            cout << "What number would you like to find?" << endl;
            cin >> numberSeeked;
            lookForNumber(numberSeeked,arraySize,numbersFromFile);
            userChoice = printMenu();
        } else if (userChoice == 'M') {
            int indexSeeked, valueDesired;
            cout << "What index do you want the number changed?" << endl;
            cin >> indexSeeked;
            cout << "What value do you want it to be?" << endl;
            cin >> valueDesired;
            modifyAtIndex(indexSeeked, valueDesired,arraySize,numbersFromFile);
            userChoice = printMenu();
        }else if (userChoice == 'A') {
            int valueToAdd;
            cout << "What number would you like to add to the array?" << endl;
            cin >> valueToAdd;
            addToArray(valueToAdd,arraySize,numbersFromFile);
            userChoice = printMenu();
        } else if (userChoice == 'Z') {
            int indexDesired;
            cout << "What index would you like cleared?" << endl;
            cin >> indexDesired;
            wipe(indexDesired,arraySize,numbersFromFile);
            userChoice = printMenu();
        }
    }
}






