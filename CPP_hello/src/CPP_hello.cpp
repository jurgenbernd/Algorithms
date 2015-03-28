//============================================================================
// Name        : CPP_hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  cout << "Hello KIT" << endl;
  cout << "This is another line" << endl;

  time_t rawtime;
  time(&rawtime);
  printf("The current local time is: %s", ctime(&rawtime));

  return 0;
}
