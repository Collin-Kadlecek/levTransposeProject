#ifndef PLAYER_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define PLAYER_H

#include <fstream>
#include <iostream>
//#include <stream>
#include <string>
#include <filesystem>
using namespace std;

struct header_NEW_HIH_Scratch;

struct orgDate_NEW_HIH_Scratch;

void createTemplate_NEW_HIH_Scratch();

void buildOut_NEW_HIH_Scratch(header_NEW_HIH_Scratch* temp, string data, bool* flightTrap, string bString, string buildString[], int* numElements, bool* pKTOE, bool* pRTrap);

void buildHeader_NEW_HIH_Scratch(wstring keyword, wstring date);

bool file_NEW_HIH_Scratch(string fName, int* numOfElements, string outStr[]);

bool ozoneCheck_NEW_HIH_Scratch(string fstring);

void buildVertical_NEW_HIH_Scratch(string fName, int* numOfElements, string outStr[], string dataType);

void buildF_NEW_HIH_Scratch(string outStr[], int* size, string keyword);

void clearOutput_NEW_HIH_Scratch(string keyword, string loc, string date);

void clean_NEW_HIH_Scratch(string keyword);

void cleanFinal_NEW_HIH_Scratch(string keyword, string location, string date);

string buildDate_NEW_HIH_Scratch(int ac);

void normalizeNan_NEW_HIH_Scratch(string keyword, string outstr[], int size, string date);

void useTemplate_NEW_HIH_Scratch(string fName, string keyword, string date, int filecount);

void organize_NEW_HIH_Scratch(string location, string date, int itemCount, string keyword, string filename);














#endif