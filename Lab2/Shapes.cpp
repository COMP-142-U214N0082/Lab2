/** \file Shapes.cpp
* \brief Program for drawing basic figures
* \detail This program ...
* \author Andrei Pahadayeu
* \date 18/03/2022
*/
#include <iostream>
#include <cassert>
#include "Shapes.h"

using namespace std;
bool check(int n);
/**
*This is the driver of the program,presenting a menu
* <BR>
* @return Returns <code>0<code>
*/

void drawHorizontalLine(int length, char ch)
{
	for (int i = 0; i < length; i++)
	{
		cout << ch;
	}
	cout << endl;
}

void drawVerticalLine(int height, char ch)
{
	for (int i = 0; i < height; i++)
	{
		cout << ch << endl;
	}
	cout << endl;
}

void drawSquare(int size, char ch)
{
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

void drawRectangle(int height, int length, char ch)
{
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
