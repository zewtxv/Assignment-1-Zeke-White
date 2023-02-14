// Zeke White
// zewtxv@umsytem.edu
//

#ifndef ASSIGNMENT_1_FUNCTION_H
#define ASSIGNMENT_1_FUNCTION_H
int readDataFile(int numbersFromFile[150], int &arraySize);
//PRE:RECEIVES AN APPROPRIATE SIZED ARRAY
//POST: READS FILE IN DIRECTORY TO ARRAY

char printMenu();
//PRE:NONE
//POST:PRINTS A MENU FOR THE USER TO SELECT A CHOICE


void wipe(int desired, int& arraySize, int numbersFromFile[]);
//PRE: TAKES DESIRED INDEX, ARRAY, AND ARRAY SIZE
//POST: ZERO OUT A VALUE AT A DESIRED INDEX


void addToArray(int add, int& arraySize, int numbersFromFile[]);
//PRE:TAKES A VALUE TO ADD,ARRAY, AND ARRAY SIZE
//POST: ADD A VALUE TO THE END OF THE ARRAY


void modifyAtIndex(int seeked, int desired, int& arraySize, int numbersFromFile[]);
//PRE:TAKE A INDEX, A VALUE TO MODIFY AT SAID INDEX, ARRAY, AND THE ARRAY SIZE
//POST: CHANGE TO DESIRED VALUE AT CERTAIN INDEX WITHIN ARRAY


void lookForNumber(int numberSeeked, int& arraySize,int numbersFromFile[]);
//PRE:TAKES THE NUMBER BEING SEARCHED FOR, ARRAY, AND THE ARRAY SIZE
//POST: SEARCH FOR NUMBER IN ARRAY

#endif //ASSIGNMENT_1_FUNCTION_H
