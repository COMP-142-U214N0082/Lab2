#include <iostream>
using namespace std;
void drawHorizontalLine(int length, char ch);
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawRectangle(int height, int length, char ch);
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
