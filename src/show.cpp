#include <iostream>
#include <filesystem>
#include "includes/commands.hpp"

using namespace std;
using namespace std::filesystem;
void show()
{
    path listdirectory = "";

    if (exists(listdirectory) && is_directory(listdirectory))
    {
        for (const auto &entry : directory_iterator(listdirectory))
        {
            cout << "File: " << entry.path() << endl;
        }
    } else {
        cerr << "No Directory Found";
    }
}