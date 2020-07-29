#pragma once
#include<iostream>
#include<Windows.h>
#include<string>
#include<time.h>
#include<conio.h>
#include<fstream>
#include<cstdlib>
#include<List>
using namespace std;

#define col GetStdHandle(STD_OUTPUT_HANDLE) 
//#define BLACK SetConsoleTextAttribute( col,0x0000 );
//#define DARK_BLUE SetConsoleTextAttribute( col,0x0001 );
//#define GREEN SetConsoleTextAttribute( col,0x0002 );
//#define BLUE_GREEN SetConsoleTextAttribute( col,0x0003 );
//#define BLOOD SetConsoleTextAttribute( col,0x0004 );
//#define PUPPLE SetConsoleTextAttribute( col,0x0005 );
//#define GOLD SetConsoleTextAttribute( col,0x0006 );			//���� ����
#define ORIGINAL SetConsoleTextAttribute( col,0x0007 );
//#define GRAY SetConsoleTextAttribute( col,0x0008 );
//#define BLUE SetConsoleTextAttribute( col,0x0009 );
//#define HIGH_GREEN SetConsoleTextAttribute( col,0x000a );
//#define SKY_BLUE SetConsoleTextAttribute( col,0x000b );
//#define RED SetConsoleTextAttribute( col,0x000c );
//#define PLUM SetConsoleTextAttribute( col,0x000d );
//#define YELLOW SetConsoleTextAttribute( col,0x000e );
#define WIDTH 65;
#define HEIGHT 35;

enum Color
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTMAGENTA,
	YELLOW,
	WHITE
};

enum MAINSELECT
{
	MAINSELECT_GAMESTART = 1,
	MAINSELECT_RANK,
	MAINSELECT_EXIT
};

enum WARDEFFET
{
	WARDEFFET_NORMAL = -1,
	WARDEFFET_SLOW = 0,
	WARDEFFET_FAST,
	WARDEFFET_CLEAR,
	WARDEFFET_STOP,
	WARDEFFET_BLIND,
	WARDEFFET_END
};