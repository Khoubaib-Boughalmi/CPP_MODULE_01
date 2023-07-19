#include <iostream>
#include <fstream>
#include <string>

void    updateOccurence(std::ifstream &srcFile, std::ofstream &outFile, std::string prevStr, std::string newStr)
{
    size_t i;
    size_t j;
    size_t pos;
    std::string lineRead;
    while (getline(srcFile, lineRead))
    {
        i = 0;
        if(!srcFile.eof())
            lineRead += "\n";
        pos = lineRead.find(prevStr);
        if(pos != std::string::npos)
        {
            while(pos != std::string::npos)
            {
                j = 0;
                std::cout << "position: " << pos << std::endl;
                while (i < pos)
                    outFile << lineRead[i++];
                while (j < newStr.length())
                    outFile << newStr[j++];
                i += prevStr.length();
                pos = lineRead.find(prevStr, pos + prevStr.length() - 1);
                if(pos == std::string::npos)
                {
                    while (lineRead[i] != '\n')
                        outFile << lineRead[i++];
                    outFile << '\n';
                }
            }
        }
        else
            outFile << lineRead; 
    }
}

int main(int argc, char *argv[])
{
    std::string suffix;
    if(argc != 4)
    {
        std::cout << "TIP: ./replace <fileName> old_word new_word" << std::endl;
        return (1);
    }
    std::ifstream srcFile(argv[1], std::ios::in);
    if(!srcFile)
    {
        std::cout << "Error opening occured when opening: " << argv[1] << std::endl; 
        return (1);
    }
    suffix = ".replace";
    std::string outFileName = argv[1] + suffix;
    std::ofstream outFile(outFileName, std::ios::out);
    if(!outFile)
    {
        std::cout << "Error opening occured when creating: " << argv[1] <<".replace" << std::endl; 
        return (1);
    }
    updateOccurence(srcFile, outFile, argv[2], argv[3]);
    srcFile.close();
    return (0);
}
