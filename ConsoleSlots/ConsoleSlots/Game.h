#ifndef GAME_H
#define GAME_H

#include <Windows.h>
#define WIN32_LEAN_AND_MEAN 
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>


class CGame
{
public://Functions
	CGame();//Default ctor
	~CGame();//dtor

	void Run();			//basic game loop

private://data
	bool m_bRunning;

private://Functions
	//Basic game loop
	void GetInput();
	void Update();
	void Render();

	//Startup code
	void Load();		//Load settings from a file
	void Initialize();	//Set variables to default values
	void Save();		//Save Settings to a file.

	void ClearScreen();

protected:
};

#endif