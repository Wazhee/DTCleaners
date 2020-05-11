#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
#include "header.h"
#include <unistd.h>   // needed for chdir() function

#define BUFFER_SIZE 1024

using namespace std;

// void askUserLocation();
// string getLocation();

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
 
  return "";
}
string getFolderName(){
  // if(askUserLocation() == true ) string path == findDesktop();
  // string path == findDesktop();
  return "";
}
void findDesktop(){
    // shell commnad to get current directory
  string shellcmd = "pwd";
  string shellcmd2 = "cd";
  
  FILE  *output_from_command;

  char tmpBuffer[BUFFER_SIZE];
  char *current_dir;
  
  output_from_command = popen(shellcmd.c_str(), "r");
  current_dir = fgets(tmpBuffer, BUFFER_SIZE, output_from_command);
  cout << "Directory before chdir: " << current_dir << endl;
  // " ~ " is an expansion handelled by the shell not system cmd
  // so use getenv() to go to home directory
  chdir(getenv("HOME"));
  chdir("Desktop");
  pclose(output_from_command);
  output_from_command = popen(shellcmd.c_str(), "r");
  current_dir = fgets(tmpBuffer, BUFFER_SIZE, output_from_command);
  cout << "Directory after chdir: " << current_dir << endl;
  pclose(output_from_command);
}
void cleanDesktop(){
  // make new directory
  check = mkdir("DTCleaners");    // need date for versioning
  if(!check()){
    // mkdir() failed
    cout << "System failed to make new directory" << endl;
  } else {
    // mkdir() was successful
  }
  
  string shellcmd = "ls";
  string shellcmd = "mv";
  FILE *output_from_command;
  char *tmpBuffer[BUFFER_SIZE];

  
  output_from_command = popen(shellcmd.c_stry(), "r");
  line = fgets(tmpBuffer, BUFFER_SIZE, output_from_command);
  while(line != NULL){
    cout << shellcmd + " ./" + line + " ./DTCleaners";
    line = fgets(tmpBuffer, BUFFER_SIZE, output_from_command);
  }
}
