// 29.10.2020 classwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>


#define SPACE 32;
#define UP 72;
#define DOWN 80;
#define LEFT 75;
#define RIGHT 77;

using namespace std;

// пометка игрового поля
const int sizeX=10;
const int sizeY=10;

int GameZone[sizeX][sizeY];

void sizeOfConsole() {
	// ограничение консоли по размеру
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD bufferSize = { 80, 50 };
	//SetConsoleScreenBufferSize(wHnd, bufferSize);
}

// вывод игрового поля
void Show() {

	// выводим поле GameZone
	for (int i = 0; i < sizeX; ++i)
	{
		for (int j = 0; j < sizeY; ++j)
		{
			cout.width(3);
			cout << GameZone[sizeX][sizeY];
		}
		cout << endl;
	}
}


// круги и кывадрата двигаються к плюсу
void MoveToPlus() {   

}

// движение плюса
void MovePlus() {

}

// инициализация кругов и квадратов
void Initialize() {

	// выводим поле GameZone
	for (int i = 0; i < sizeX; ++i) 
	{
		for (int j = 0; j < sizeY; ++j) 
		{
			GameZone[sizeX][sizeY] = 0;
		}
	}
}

int main()
{
	sizeOfConsole();
	Initialize();
	Show();
}
