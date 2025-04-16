#include "Builder.h"

#include <iostream>



//Realization of UserInterface
void UserInterface::ListAll() const
{
	std::cout << "Now userInterface have: \n";
	for (int i = 0; i < parts.size(); i++)
	{
		std::cout << "\t---" << parts[i] << '\n';
	}
	std::cout << '\n';
}


void UserInterface::reset()
{
	parts.clear();
	std::cout << "Cleared all data from UserInterface, waiting for new bunch...\n\n";
}



//Realization of WebUIBuilder
WebUIBuilder::WebUIBuilder(UserInterface& UI)
{
	this->UI = &UI;
}


void WebUIBuilder::buildTextBox()
{
	UI->parts.push_back("New Web TextBox");
}


void WebUIBuilder::buildHeader()
{
	UI->parts.push_back("New Web Header");
}


void WebUIBuilder::buildLabel()
{
	UI->parts.push_back("New Web Label");
}


void WebUIBuilder::buildMenu()
{
	UI->parts.push_back("New Web Menu");
}



//Realization of GameUIBuilder
GameUIBuilder::GameUIBuilder(UserInterface& UI)
{
	this->UI = &UI;
}


void GameUIBuilder::buildTextBox()
{
	UI->parts.push_back("New Game TextBox");
}


void GameUIBuilder::buildHeader()
{
	UI->parts.push_back("New Game Header");
}


void GameUIBuilder::buildLabel()
{
	UI->parts.push_back("New Game Label");
}


void GameUIBuilder::buildMenu()
{
	UI->parts.push_back("New Game Menu");
}



//Realizetion of Director
void Director::constructWebUI(WebUIBuilder& builder)
{
	std::cout << "Director deligated to WebUIBuilder build: TextBox...\n"; builder.buildTextBox();
	std::cout << "Director deligated to WebUIBuilder build: Header...\n"; builder.buildHeader();
	std::cout << "Director deligated to WebUIBuilder build: Label...\n"; builder.buildLabel();
	std::cout << "Director deligated to WebUIBuilder build: Menu...\n\n"; builder.buildMenu();
}


void Director::constructGameUI(GameUIBuilder& builder)
{
	std::cout << "Director deligated to GameUIBuilder build: TextBox...\n"; builder.buildTextBox();
	std::cout << "Director deligated to GameUIBuilder build: Header...\n"; builder.buildHeader();
	std::cout << "Director deligated to GameUIBuilder build: Label...\n"; builder.buildLabel();
	std::cout << "Director deligated to GameUIBuilder build: Menu...\n\n"; builder.buildMenu();
}