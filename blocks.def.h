//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "sh /opt/kdwmblocks/pac-update.sh",                    5,      0}, 
    {"", "sh /opt/kdwmblocks/battery.sh",                      10,     0},
    {"", "sh /opt/kdwmblocks/cpu.sh",                           2,       0},
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
