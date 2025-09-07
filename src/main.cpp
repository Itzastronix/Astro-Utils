#include "includes/commands.hpp"
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cerr << "Usage: astro <command>" << endl;
        return 0;
    }

    string command = argv[1];

    if (command == "help")
    {
        astro::help();
    }
    else if (command == "show")
    {
        astro::show(argc > 2 ? argv[2] : ".");
    }
    else if (command == "-cd")
    {
        astro::createFile(argc > 2 ? argv[2] : "");
    }
    return 0;
}