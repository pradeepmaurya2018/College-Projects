#include "CVendingMachineHandler.h"

int main()
{
	CVendingMachineHandler *Helper = new CVendingMachineHandler();
	Helper->printGreetingMessage();
	Helper->displayItems();
	Helper->readUserInput();
	Helper->getUserChoice();
	Helper->serveItem();



}