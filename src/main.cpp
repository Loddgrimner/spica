#define _XOPEN_SOURCE_EXTENDED

#include <ncurses.h>
#include <locale.h>
#include "game.h"
#include <iostream>

int main()
{
/*
	setlocale(LC_ALL,"");
	initscr();
	raw();
	keypad(stdscr, TRUE);
	mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
	noecho();
	refresh();
	int c = getch();
	endwin();
*/
	game test;
	test.buildentity();

	test.update();
	return 0;
}
