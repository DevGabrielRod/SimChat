#include <iostream>
#include <stdio.h>
#include <fstream>
#include "Version.h"
#include <iomanip>
#include "Func.hpp"

using namespace std;

void version();
double generateID();
double generaterUNICODE();

int main()
{
    version();
    cout.width(10);
    cout.fill('*');
    cout <<"*****-----*****Gerador de ID*****-----*****" << endl;
    generateID();
    cout << "*****-----*****Gerador de Unicode*****-----*****" << endl;
    generateUNICODE();
}

//Default Version
void version()
{
  cout << "Version : " << SAMPLE_VERSION_MAJOR << "." << SAMPLE_VERSION_MINOR << "." << SAMPLE_VERSION_PATCH << endl;
}