#pragma once
#include"CUser.h"
#include"CMessagePrinter.h"

class CVendingMachineHandler
{
public:
	CUser user;
	CMessagePrinter MP;
public:
	void printGreetingMessage();
	void readUserInput();
	void displayItems();
	void getUserChoice();
	void serveItem();
	void returnChange();
	void printGoodByeMessage();
};
