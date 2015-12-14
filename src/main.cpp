#define _XOPEN_SOURCE_EXTENDED

#include <ncurses.h>
#include <locale.h>
#include <iostream>
#include <map>
#include <string>
#include "game.h"

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

	std::map <std::string, int> data{
		{"Test", 1},
		{"Hmm", 3},
		{"Xpos", 5},
		{"Ypos", 2}
	};

	test.buildentity(data);

	test.update();
	test.update();
	test.update();
	test.update();
	test.update();
	test.update();
	return 0;
}
