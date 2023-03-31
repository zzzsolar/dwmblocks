//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/        /*Command*/             /*Update Interval*/     /*Update Signal*/
        {" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",      60,             0},

        {"  ", "date '+%b %d (%a) %I:%M%p'",                                   60,             0},

        {" ", "acpi | awk '{print $4}' | sed s/,//",                            60,              0},

        {"󰋋  ", "pamixer --get-volume",                                                   60,              0},

        {"", "curl -s wttr.in/Tampa,Florida?format=3",                      60,              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
