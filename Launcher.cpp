#include <iostream>
#include <cstring>
#include <direct.h>
//#include<limits.h>

using namespace std;

int main()
{
    // Find exe's current directory
    char buff[PATH_MAX];
    _getcwd( buff, PATH_MAX );
    string directory(buff);

    // Create and save directory locations for Game and Discord RP exes. A double backslash must be used in place of a single backslash, in the directory path.
    string partpath = "\\Exe\\Location\\Here.exe";
    string partpath2 = "\\Exe\\Location\\Here2.exe";
    string fullpath;
    string fullpath2;
    fullpath = directory + partpath;
    fullpath2 = directory + partpath2;

    system(("start "+fullpath).c_str());
    system(("start "+fullpath2).c_str());

    //system("pause");

    return 0;
}
