// Link_To_Github.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

using std::string;
using std::vector;





int main()
{
	string word;
	while (cin >> word)
	{
		cout << "while string word" << endl;
		cout << word << endl;
		break;
	}

	string  test_string_Line;

	while (getline(cin, test_string_Line))
		if (!test_string_Line.empty())
		{
			cout << "if test  string line size" << endl;
			cout << test_string_Line << endl;
			cout << test_string_Line.size() << endl;
			break;	
		}

	vector<int> v1;
	int temp;
	while (cin >> temp)
	{
		cout << "while temp vector" << endl;
		v1.push_back(temp);

		cout << v1   .size() << endl;
		
		for (auto i : v1)
		{	
			cout << i << endl;
		}
		

	}




	while (1);
	
	
	return 0;
}

