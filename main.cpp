#include <fstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

int sc_memoryInit(int massive[]);

int sc_memorySet(int adress, int value);

int sc_memoryGet(int adress, int *value);

int sc_memorySave(char *filename);

int sc_memoryLoad(char *filename);

int main(void)
{
	system("clear");
	/* inicializing */
	int massive[100];
	int adress,value;
	sc_memoryInit(massive);
	/* inputing shit */
	std::cout << "Input ur adress: ";
	std::cin >> adress;
	std::cout << std::endl << "Input ur value: ";
	std::cin >> value;
	/* 		 */
	/* memory set */
	bool trying = false;
	while(!trying)
	{
		system("clear");
		int error_track = sc_memorySet(massive[adress], value);
		if(error_track == -1)
		{
			std::cout << "You input a wrong 'adress' value" << std::endl << "You need new try? [y/n]";
			char try_new_adress;
			std::cin >> try_new_adress; std::cout << std::endl;
			if(try_new_adress = 'y')
			{
				trying = false;
			}
			else if(try_new_adress = 'n')
			{
				trying = true;
			}
		}
	}
	system("pause");
	return 0;
}

int sc_memoryInit(int array[])
{
	for(auto i = 0; i < 100; i++)
		array[i] = 0;
}

int sc_memorySet(int adress, int value)
{
	bool flag_of_work = true;
	if(adress)
	{
		if(adress > 100 || adress < 0)
			return -1;
		else
		{
			/* invoiding table symbols */
			//value = ?;
		}
	}
	return value;
}
