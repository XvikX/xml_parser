/**
 * @file file_scanner.h
 * @author vbellemin
 * @brief 
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef FILE_SCANNER_H_
#define FILE_SCANNER_H_
#include <string>
#include <vector>
#include <filesystem>

using namespace std;

/**
 * @brief this class provide An object containing every action to perform files scan
 * at the beggining of the program
 */
class FileScanner
{
private:
    vector<string> filesFounded;

public:
    FileScanner();
    ~FileScanner();

    vector<string> GetFilesFounded(void);
    bool ScanFiles(string path);
};

#endif /* FILE_SCANNER_H_ */
