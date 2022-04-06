//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"ﱘ  ", "/home/beau/.local/share/scripts/mpdsong",	1,		0},
    {"墳 ",  "/home/beau/.local/share/scripts/volume",     1,      0},
    {"  ",  "/home/beau/.local/share/scripts/cpu",        1,      0},
    {"﬙  ",  "/home/beau/.local/share/scripts/ram",        1,      0},
    {"  ",  "/home/beau/.local/share/scripts/clock",      1,      0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
//static char delim[] = "  ";
static unsigned int delimLen = 5;
