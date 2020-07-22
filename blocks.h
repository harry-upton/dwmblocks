//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon,Command,Interval,Signal*/
	
	{"", "volumestat", 0, 10},
	{"", "memory", 30, 0}, 
	{"", "clock", 5, 0},
	{"", "printdate", 5, 0},
	{"", "updatecount", 600, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
