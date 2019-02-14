#include <fstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

int massive[100];

int sc_memoryInit();

int sc_memorySet(int adress, int value);

int sc_memoryGet(int adress, int *value);

int sc_memorySave(char *filename);

int sc_memoryLoad(char *filename);

int main(void)
{
	system("clear");
	int adress,value;
	sc_memoryInit();
	std::cout << "Input ur adress: ";
	std::cin >> adress;
	std::cout << std::endl;
	int track_set = sc_memorySet(adress, value); // = value
	int track_get = sc_memoryGet(adress, &value); // = *value
	if(track_set != -1)
	{
		std::cout << "Array[" << adress << "] = " << track_set << "\n";
		std::cout << "Array[" << adress << "] has cell of memory: " << track_get << "\n";
	}
	system("pause");
	return 0;
}

int sc_memoryInit()
{
	for(auto i = 0; i < 100; i++)
		massive[i] = 0;
}

int sc_memorySet(int adress, int value)
{
	if(adress > 99 || adress < 0)
	{
		std::cout << "Wrong number of memeory!(sc_memorySet)\n";
		return -1;
	}
	else
	{
		std::cout << "Input the value of massive[" << adress << "]: ";
		std::cin >> value; std::cout << std::endl;
		massive[adress] = value;
	}
	return value;
}

int sc_memoryGet(int adress, int *value)
{
	int index;
	if(adress > 99 || adress < 0)
	{
		std::cout << "Wrong number of memeory!(sc_memoryGet)\n";
		return -1;
	}
	else
	{
		index = *value;
		return index;
	}
}

int sc_memorySave(char *filename)
{
	//
}

int sc_memoryLoad(char *filename)
{
	//
}