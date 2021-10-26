#include <iostream>
#include "file_scanner.h"

using namespace std;

int main(int, char**) {
    /* Get Arguments */
    printf("Hello, I'm the xml Parser!\n");
    printf("Enter A path where your XML files are situated :");
    string path;
    getline(cin, path);
    printf("You enter this folder : %s \n", path.data());

    /* Start Files scan */
    FileScanner FileScanner;
    FileScanner.ScanFiles(path);
    printf("Here are all the files : \n");
    for (string f : FileScanner.GetFilesFounded())
    {
        printf("%s \n", f.data());
    }

    printf("Every files have been printed !\n");

    return 0;
}
