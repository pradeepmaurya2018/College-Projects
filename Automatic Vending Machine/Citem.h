#pragma once
#include<string>
using namespace std;
class CItem
{
public:
	string name;
	int price;

	string getName()
	{
		return name;
	}

	CItem();
	CItem(string name);
	~CItem();
};

