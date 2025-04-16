#include "Builder.h"

#include <iostream>


int main()
{
	UserInterface userInterface = UserInterface();

	WebUIBuilder webUIBuilder = WebUIBuilder(userInterface);
	Director directorWebUI = Director();
	directorWebUI.constructWebUI(webUIBuilder);
	userInterface.ListAll();

	userInterface.reset();

	GameUIBuilder gameUIBuilder = GameUIBuilder(userInterface);
	Director directorGameUI = Director();
	directorGameUI.constructGameUI(gameUIBuilder);
	userInterface.ListAll();


	return 0;
}