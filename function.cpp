// Zeke White
// zewtxv@umsytem.edu
//
#include <fstream>
#include <iostream>
#include <sstream>
#include "function.h"
using namespace std;
int readDataFile(){
ifstream inFile;
inFile.open("/Users/zekewhite/Desktop/School Spring 2023/CS 303/Assignment 1/Assignment-1-Zeke-White/testFile.txt");
int numbersFromFile [100];
string inNumber, tempStr;
    if (!inFile.is_open()) {
        cout << "File is not open." << endl;
        return 1;
    }

    while (getline(inFile,inNumber)){
        stringstream inSS(inNumber);
    }




}
