// Examples in Chapter 7.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Sales_item.h"
#include <iostream>
//using namespace std;





int main()
{
 
	Sales_item item1, item2; 

	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
		return 0;
	}

	else
	{
		std::cerr << "wrong" << std::endl;
		return -1;
	}


	
	return 0;
}

