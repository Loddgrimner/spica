#define _XOPEN_SOURCE_EXTENDED

#include <ncurses.h>
#include <locale.h>
#include "entity.h"
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
	std::cout << "Creating entity\n";
	entity test;
	test.update();
	return 0;
}
