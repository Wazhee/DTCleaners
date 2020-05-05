#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
#include "header.h"
#include <unistd.h>   // needed for chdir() function

#define BUFFER_SIZE 1024

using namespace std;

//void askUserLocation();
//string getLocation();

void getClassList(){
  map<int, string> class_map;
}
void welcomeMessage(){
  string longest_str = "*\n*\n* A tool for keeping your desktops/folders clutter free!             *";
  int length = longest_str.length();
  cout << length << endl;
  // print repeating border with std::string(int, string) function
  cout << string(length , '*') << endl;
  cout << "* Welcome to DTCleaners\n";
  cout << string(length, ' ') <<  "*";
  cout << "\n*\n* A tool for keeping your desktops/folders clutter free!                 *" << endl;
  cout << "* During the semester, things can get really hectic                      *\n";
  cout << "* Folders start to get disorganized and random items start to \n";
  cout << "* find a home in your desktop\n* And if your anything like me, you give that, 'i'll clean it later excuse'\n";
  cout << "*\n*\n* I am creating this tool to make, 'I'll just clean it now',\n* a more frequent response!";
  cout << "* Lets get start " << endl;
  cout << "\n\n\n" << endl;
}
string getLocation(){
  string res;
  // shell commnad to get current directory
  string shellcmd = "pwd";
  string shellcmd2 = "cd";
  
  FILE  *output_from_command;

  char tmpBuffer[BUFFER_SIZE];
  char *current_dir;
  cout << "Would you like to clean your desktop or folder?(D/F): ";
  cin >> res;
  // if(checkUserInput()){
  //}
  // check if currently in desktop
  output_from_command = popen(shellcmd.c_str(), "r");
  current_dir = fgets(tmpBuffer, BUFFER_SIZE, output_from_command);
  cout << "Directory before chdir: " << current_dir << endl;
  chdir("$HOME");
  pclose(output_from_command);
  output_from_command = popen(shellcmd.c_str(), "r");
  current_dir = fgets(tmpBuffer, BUFFER_SIZE, output_from_command);
  cout << "Directory after chdir: " << current_dir << endl;
  pclose(output_from_command);
  return "";
}
string getFolderName(){
  // if(askUserLocation() == true ) string path == findDesktop();
  // string path == findDesktop();
  return "";
}
bool askUserLocation(){
  string res = getLocation();
  while(res.length() > 1 || res != "y" || res != "Y" || res != "n" || res != "N" ){
    if(res == "desktop" || res == "Desktop" || res == "DESKTOP"){
      
    }
    res = getLocation();
  }
  if(res == "y" || res == "Y"){
    return true;
  }
  else if (res == "n" || res == "N"){
    return false;
  }
  return false;
}
void findDesktop(){

}
