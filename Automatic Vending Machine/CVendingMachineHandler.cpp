#include<iostream>
#include"CVendingMachineHandler.h"


	void CVendingMachineHandler::printGreetingMessage()
	{
		MP.printMessage("Welcome to AVM");
		MP.printMessage("Please insert your card");
	}
	void CVendingMachineHandler::readUserInput()
	{
		static int i = 0;
		user.id = i++;
		cout << "Please enter amount" << endl;
		cin >> user.check;
	}
	void CVendingMachineHandler::displayItems()
	{
		MP.printMessage("\t Select from the items");

		MP.printMessage("\t 1. Pepsi \t $30");
		MP.printMessage("\t 2. Bear \t $30");
		MP.printMessage("\t 3. Coke \t $20");
		MP.printMessage("\t 4. Juice \t $15");
		MP.printMessage("\t 5. Tea \t $60");
	}
	void CVendingMachineHandler::getUserChoice()
	{
		switch (user.choice)
		{
		case 1:
		{
			user.item = new CItem("Pepsi");
			break;
		}
		case 2:
		{
			user.item = new CItem("Bear");
			break;
		}
		case 3:
		{
			user.item = new CItem("Coke");
			break;
		}
		case 4:
		{
			user.item = new CItem("Juice");
			break;
		}
		case 5:
		{
			user.item = new CItem("Tea");
			break;
		}

		}
	}
	void CVendingMachineHandler::serveItem()
	{
		cout << ("You have selected ");
		cout<<user.item->getName();
	}
	void CVendingMachineHandler::returnChange()
	{

	}
	void CVendingMachineHandler::printGoodByeMessage()
	{

	}

