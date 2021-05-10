//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
//{" 🐧 ", "/opt/dwmblocks-distrotube-git/scripts/kernel",		    360,		        2},

//	{" 🔺 ", "/opt/dwmblocks-distrotube-git/scripts/upt",		        60,		            2},

	{" 📦 ", "~/.dwm/scripts/pacupdate",		360,		        9},
	
	{" 💻 ", "~/.dwm/scripts/memory",	        6,		            1},

	{" 🔊 ", "~/.dwm/scripts/volume",			10,		            15},

    {" 🔋 ", "~/.dwm/scripts/battery",          30,                 2},

	{" 🕑 ", "~/.dwm/scripts/clock",			1,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 1;
