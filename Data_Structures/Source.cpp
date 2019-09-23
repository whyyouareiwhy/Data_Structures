//#include<iostream>
// Check for memory leaks
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include"LLL.h"
#include<iostream>
#include<random>
using namespace std;



void build_list()
{
	LLL list;
	list.insert_head(5);
	list.insert_head(9);
	list.insert_head(11);
	list.insert_head(3);
	list.display();
}

int main()
{
	random_device dev;
	mt19937 rng(dev());
	uniform_int_distribution<mt19937::result_type> dist(1, 10);
	
	// Create a list and insert 10 random numbers(1-10)
	LLL list;
	for (int i = 0; i < 10; ++i)
	{
		list.insert_head(dist(rng));
	}
	list.display();


	
	// Run memory leak diagnostic
	_CrtDumpMemoryLeaks();
}