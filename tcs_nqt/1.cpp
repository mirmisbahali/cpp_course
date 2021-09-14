/*
Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
2nd data, Total number of wheels = W
 
The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data
*/

#include <iostream>

using namespace std;

int main(void) {
  int v = 200, w = 540;
  int fw = (w/2) - v;
  int tw = v - fw;
  cout << "TW = " << tw << endl;
  cout << "FW = " << fw << endl;
  
  return 0;
}