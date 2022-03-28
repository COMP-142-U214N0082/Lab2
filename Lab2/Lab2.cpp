/** \file Lab2.cpp
* \brief Program that draws different shapes
* \details Program that allows user to choose which shape to draw using a menu
* \author Andrei Pahadayeu
* \version 0.1
* \date 11.03.2022
* \copyright GNU Public License.
*/
#include <iostream>
#include <cassert>
using namespace std;
void drawHorizontalLine(int length, char ch);
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawRectangle(int height, int length, char ch);
/**
* This is main function of the program.
* When launched it shows the menu in which
* user can choose which shape to draw.
*/
int main()
{
	int choice;
	do
	{
		cout << "\tMenu" << endl;
		cout << "1)Draw a horizontal line" << endl;
		cout << "2)Draw a vertical line" << endl;
		cout << "3)Draw a square" << endl;
		cout << "4)Draw a rectangle" << endl;
		cout << "5)Quit" << endl;
		cout << "Enter your option:";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "How long do you want your line?";
			int length;
			cin >> length;
			cout << endl;
			cout << "Which character would you like to use for the line?";
			char character;
			cin >> character;
			cout << "Horizontal line(" << length << "," << character << ")" << endl;
			drawHorizontalLine(length, character);
			break;
		}
		case 2:
		{
			cout << "How high do you want your line?";
			int height;
			cin >> height;
			cout << endl;
			cout << "Which character would you like to use for the line?";
			char character;
			cin >> character;
			cout << "Vertical line(" << height << "," << character << ")" << endl;
			drawVerticalLine(height, character);
			break;
		}
		case 3:
		{
			cout << "How big you want the side of the square?";
			int side;
			cin >> side;
			cout << endl;
			cout << "Which character would you like to use for the square?";
			char character;
			cin >> character;
			cout << "Square(" << side << "," << character << ")" << endl;
			drawSquare(side, character);
			break;
		}
		case 4:
		{

			cout << "How big you want the side A of the rectangle?";
			int side_A;
			cin >> side_A;
			cout << endl;
			cout << "How big you want the side B of the rectangle?";
			int side_B;
			cin >> side_B;
			cout << endl;
			cout << "Which character would you like to use for the square?";
			char character;
			cin >> character;
			cout << "Rectangle(" << side_A << "," << side_B << "," << character << ")" << endl;
			drawRectangle(side_A, side_B, character);
			break;
		}
		case 5:
			cout << "Goodbye!";
		}
	} while (choice != 5);
	return 0;
}
/**
* This function asks user for the length of the line and the character
* it's made of and draws this line horizontaly.
* @param int length takes a number, which means the length of the line
* @param char ch takes a character, with which this line is constructed
*/
void drawHorizontalLine(int length, char ch)
{
	assert(length > 0);
	for (int i = 0; i < length; i++)
	{
		cout << ch;
	}
	cout << endl;
}
/**
* This function asks user for the length of the line and the character
* it's made of and draws this line verticaly.
* @param int height takes a number, which means the height of the line
* @param char ch takes a character, with which this line is constructed
*/
void drawVerticalLine(int height, char ch)
{
	assert(height > 0);
	for (int i = 0; i < height; i++)
	{
		cout << ch << endl;
	}
	cout << endl;
}
/**
* This function asks user for the length of the side of the square
* and the character it's made of and draws the square.
* @param int size takes a number, which means the length of the side
* @param char ch takes a character, with which this square is constructed
*/
void drawSquare(int size, char ch)
{
	assert(size > 0);
	drawHorizontalLine(size, ch);
	for (int i = 0; i < size - 2; i++)
	{
		cout << ch;
		for (int j = 0; j < size - 2; j++)
		{
			cout << " ";
		}
		cout << ch << endl;
	}
	drawHorizontalLine(size, ch);
	cout << endl;
}
/**
* This function asks user for the length of the sides of the rectangle
* and the character it's made of and draws the rectangle.
* @param int height takes a number, which means the hight of the side
* @param int length takes a number, which means the length of the side
* @param char ch takes a character, with which this rectangle is constructed
*/
void drawRectangle(int height, int length, char ch)
{
	assert(height > 0);
	assert(height > 0);
	assert(length > 0);
	drawHorizontalLine(length, ch);
	for (int i = 0; i < height - 2; i++)
	{
		cout << ch;
		for (int j = 0; j < length - 2; j++)
		{
			cout << " ";
		}
		cout << ch << endl;
	}
	drawHorizontalLine(length, ch);
	cout << endl;
}
