#include <iostream>
#include <filesystem>
#include <fstream>

using namespace std;
using namespace std::filesystem;

int main() {
    path listDirectory = ".";

    if(exists(listDirectory)&& is_directory(listDirectory)) {

        for (const auto & entry:
        directory_iterator(listDirectory)) {
            cout<< "File: " << entry.path() << endl;
        }
    }
    else {
        cerr<< "No Directory Found!";
    }

    return 0;
}