#include <iostream>
#include <string>
#include <map>
#include "header.h"
#include "stdio.h"

using namespace std;

void welcomeMessage();
string getLocation();
void cleanDesktop();

int main(int argc, char* argv[]){
  if(argv[0] == "./desktop"){
    cout << "organizing desktop..." << endl;
    cleanDesktop();
  } else if(argv[0] == "./folder") {
    cout << "organizing folder..." << endl;
  }
  // welcome user
  welcomeMessage();
  // Desktop or Folder
  getLocation();
  return 0;
}
