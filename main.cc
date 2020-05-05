#include <iostream>
#include <string>
#include <map>
#include "header.h"

using namespace std;

void welcomeMessage();
string getLocation();

int main(int argc, char* argv[]){
  // welcome user
  welcomeMessage();
  // Desktop or Folder
  getLocation();
  return 0;
}
