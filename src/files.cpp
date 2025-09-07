#include <iostream>
#include <filesystem>
#include "includes/commands.hpp"

using namespace std;
using namespace std::filesystem;
void createFile(const string &dirpath)
{
    path directorypath(dirpath);

    if (!exists(directorypath))
    {
        if (create_directories(directorypath))
        {
            cout << "Directory Created: " << directorypath << endl;
        }
        else
        {
            cout << "Failed to create the directory: " << directorypath << endl;
        }
    }
    else
    {
        cout << "Directory already exists: " << directorypath << endl;
    }
}

void deleteFile(const string &dirpath)
{
}