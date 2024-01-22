//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
  {"", "/home/jan/.local/scripts/battery_status.sh", 60, 0},
  {" ", "curl wttr.in/Krakow?format=1 -s", 120, 0},
  {"VOL: ", "amixer -D pulse sget Master | awk -F\"[][]\" '/Left:/ { print $2 \" \" $4}'", 0, 0},
  {"", "date", 5, 0}
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
