#include "Game.h"

CGame::CGame()
{
	Initialize();
	Load();

}

CGame::~CGame()
{
	//Free new memory here
}

//Initialize variables
void CGame::Initialize()
{
	bool m_bRunning = true;

}

//Load startup data from a file
void CGame::Load()
{

}

//Basic game loop
void CGame::Run()
{
	while (m_bRunning)
	{
		GetInput();
		Update();
		Render();
	}
}

void CGame::GetInput()
{
	//Check keyboard states
	if (GetAsyncKeyState(VK_ESCAPE))
		m_bRunning = false;

}

void CGame::Update()
{
	//Do some stuff
}

void CGame::Render()
{
	//Draw the stuff to the screen.
	ClearScreen();

	std::cout << "I CAN'T LET YOU DO THAT DAVE\n";
}

void CGame::ClearScreen()
{
	system("cls");
}