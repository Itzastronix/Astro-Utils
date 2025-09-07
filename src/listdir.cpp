#include <iostream>
#include <filesystem>
#include <fstream>
#include "includes/commands.hpp"

using namespace std;
using namespace std::filesystem;

void show()
{
    path listDirectory = ".";

    if (exists(listDirectory) && is_directory(listDirectory))
    {

        for (const auto &entry :
             directory_iterator(listDirectory))
        {
            cout << "File: " << entry.path() << endl;
        }
    }
    else
    {
        cerr << "No Directory Found!";
    }
}