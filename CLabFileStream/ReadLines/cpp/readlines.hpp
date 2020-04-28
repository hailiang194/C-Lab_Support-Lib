#ifndef READLINES_HPP
    #define READLINES_HPP

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class Readlines
{
private:
    /**
     * This is used to store all lines read in the fild
     */
    std::vector<std::string> __lines;

    /**
     * filename you want to read
     */
    std::string __filename;
public:
    /**
     * Initialise object
     * filename: name of file you want to read
     */
    Readlines(const std::string filename);
    
    /**
     * Initialise object
     * filename: name of file you want to read
     */
    Readlines(const char *filename);

    /**
     * read file 
     * throw "Open file error" exeption if file you want to read is not exist
     */
    void read();

    /**
     * get number of lines in this file
     * Note: this file must be read before executing this function
     */
    size_t getNumLines();

    /**
     * Get nth line
     * index: the number of line you want to get
     * throw "Line is ot exist" if out of index
     */
    std::string operator[](size_t index);

};


#endif