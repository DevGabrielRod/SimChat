#include <iostream>
#include <stdio.h>
#include <fstream>
#include "Version.h"
#include <iomanip>
#include "Func.hpp"

using namespace std;

void version();
void clear();
double generateID();
double generaterUNICODE();

int main()
{
    
}

//Default Version
void version()
{
  cout << "Version : " << SAMPLE_VERSION_MAJOR << "." << SAMPLE_VERSION_MINOR << "." << SAMPLE_VERSION_PATCH << endl;
}