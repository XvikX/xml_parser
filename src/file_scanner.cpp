/**
 * @file file_scanner.cpp
 * @author vbellemin
 * @brief 
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <string>
#include <vector>
#include <filesystem>
#include <iostream>

#include "file_scanner.h" 

namespace fs = std::filesystem;

/**
 * @brief Construct a new File Scanner:: File Scanner object
 * 
 */
FileScanner::FileScanner()
{
    // Constructor
    filesFounded.clear();
}

FileScanner::~FileScanner()
{
    // Destructor
}

bool FileScanner::ScanFiles(string path)
{
    for (const auto & entry : fs::directory_iterator(path))
    {
        filesFounded.emplace_back(entry.path());
    }
    return true;
}

/**
 * @brief return vector of paths from founded files
 * 
 * @return std::vector<std::string> founded files path
 */
std::vector<std::string> FileScanner::GetFilesFounded()
{
    return FileScanner::filesFounded;
}

