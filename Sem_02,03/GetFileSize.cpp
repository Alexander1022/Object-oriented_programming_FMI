#include <iostream>
#include <fstream>

size_t getFileSize(std::ifstream& file)
{
	unsigned int currentPos = file.tellg();
	file.seekg(0, std::ios::end);

	size_t fileSize = file.tellg();
	file.seekg(currentPos);

	return fileSize;
}

int main()
{

}