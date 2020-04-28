#include "readlines.hpp"

Readlines::Readlines(const std::string filename)
{
    __filename = filename;
}

Readlines::Readlines(const char *filename)
{
    __filename = filename;
}

void Readlines::read()
{
    __lines.clear();
    std::ifstream file;
    file.open(__filename);

    if(file.fail())
    {
        throw std::ios_base::failure("Open file error");
        return;
    }

    while(!file.eof())
    {
        std::string line;
        getline(file, line);

        __lines.push_back(line);
    }

    file.close();
}

size_t Readlines::getNumLines()
{
    return __lines.size();
}

std::string Readlines::operator[](size_t index)
{
    if((index < 0) || (index >= __lines.size()))
    {
        throw std::out_of_range("Line is not exist");
        std::string empty = "";
        return empty;
    }

    return __lines[index];
}