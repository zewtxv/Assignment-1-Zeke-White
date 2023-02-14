// Zeke White
// zewtxv@umsytem.edu
//
#include <fstream>
#include <iostream>
#include <sstream>
#include "function.h"

using namespace std;

int increment = 0, tempNumber;

int readDataFile(int numbersFromFile[], int &arraySize) {
    ifstream inFile;
    inFile.open("/Users/zekewhite/Desktop/School Spring 2023/CS 303/Assignment 1/Assignment-1-Zeke-White/testFile.txt");

    string inNumber, tempStr;

    if (!inFile.is_open()) {
        cout << "File is not open." << endl;
        return 1;
    }

    while (getline(inFile, inNumber)) {
        stringstream inSS(inNumber);
        while (getline(inSS, tempStr, ',')) {
            try {
                tempNumber = stoi(tempStr);
                numbersFromFile[increment] = (tempNumber);
                increment += 1;
            } catch (runtime_error e) {
                cout << e.what();
            }


        }
    }
    cout << numbersFromFile[0];
    arraySize = increment;
    return 0;
}

char printMenu() {
    char userInput;
    cout << endl << "What would you like to do?" << endl;
    cout << "L - Look for an occurrence of a number" << endl;
    cout << "M - Modify a number at an index" << endl;
    cout << "A - Add an integer to the end of the array" << endl;
    cout << "Z - zero out a number at an index" << endl;
    cout << "Q - Quit" << endl;
    cin >> userInput;
    userInput = toupper(userInput);
    return userInput;
}

void wipe(int desired, int &arraySize, int numbersFromFile[150]) {
    if (desired > arraySize){
        cout << "No value at this index to turn to 0" << endl;
    }else{
        numbersFromFile[desired] = 0;
    }
}

void addToArray(int add, int &arraySize, int numbersFromFile[150]) {
numbersFromFile[arraySize + 1] = add;
}

void modifyAtIndex(int seeked, int desired, int &arraySize, int numbersFromFile[150]) {
    if (seeked > arraySize){
        cout << "No value at this index to modify" << endl;
    }else{
        numbersFromFile[seeked] = desired;
    }
}

void lookForNumber(int numberSeeked, int &arraySize,int numbersFromFile[150]) {
    for (int i = 0; i < arraySize; i++) {
        if (numbersFromFile[i] == numberSeeked) {
            cout << numberSeeked << " is found at index " << i << endl;
        }
    }

}
