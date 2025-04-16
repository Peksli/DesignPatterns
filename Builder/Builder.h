#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>
#include <vector>
#include <string>



class UserInterface
{
public:
	std::vector<std::string> parts;

	void ListAll() const;

	void reset();
};


class AUIBuilder
{
public:
	virtual void buildTextBox() = 0;
	virtual void buildHeader() = 0;
	virtual void buildLabel() = 0;
	virtual void buildMenu() = 0;
};


class WebUIBuilder : public AUIBuilder
{
public:
	WebUIBuilder(UserInterface& UI);

	void buildTextBox() override;
	void buildHeader()	override;
	void buildLabel()	override;
	void buildMenu()	override;

	UserInterface* getResult() const { return UI; }

private:
	UserInterface* UI = nullptr;
};


class GameUIBuilder : public AUIBuilder
{
public:
	GameUIBuilder(UserInterface& UI);

	void buildTextBox() override;
	void buildHeader()	override;
	void buildLabel()	override;
	void buildMenu()	override;

	UserInterface* getResult() const { return UI; }

private:
	UserInterface* UI = nullptr;
};


class Director
{
public:
	void constructWebUI(WebUIBuilder& builder);
	void constructGameUI(GameUIBuilder& builder);
};


#endif