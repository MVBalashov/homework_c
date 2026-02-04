#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
    #include <windows.h>
    #define SLEEP(ms) Sleep(ms)
    #define CLEAR_SCREEN() system("cls")
#else
    #include <unistd.h>
    #define SLEEP(ms) usleep((ms)*1000)
    #define CLEAR_SCREEN() system("clear")
#endif

// ANSI color codes
const char* colors[] = {
    "\033[91m",  // Bright Red
    "\033[92m",  // Bright Green
    "\033[93m",  // Bright Yellow
    "\033[94m",  // Bright Blue
    "\033[95m",  // Bright Magenta
    "\033[96m",  // Bright Cyan
    "\033[97m",  // Bright White
};

#define NUM_COLORS (sizeof(colors) / sizeof(colors[0]))
#define RESET_COLOR "\033[0m"

// Get random color
const char* getRandomColor() {
    return colors[rand() % NUM_COLORS];
}

// Clear screen function
void clearScreen() {
    CLEAR_SCREEN();
}

// Draw tree with blinking lights
void drawTree() {
    const char* treeLines[] = {
        "     *     ",
        "    ***    ",
        "   *****   ",
        "  *******  ",
        "   HHOHH   ",
        "   ZZZZZ   "
    };

    int numLines = sizeof(treeLines) / sizeof(treeLines[0]);

    for (int i = 0; i < numLines; i++) {
        const char* line = treeLines[i];
        int j = 0;

        while (line[j] != '\0') {
            char ch = line[j];

            // Color the stars randomly (70% chance to be colored)
            if (ch == '*' && (rand() % 100) < 70) {
                printf("%s%c%s", getRandomColor(), ch, RESET_COLOR);
            }
            // Color trunk and base with brown/yellow
            else if ((ch == 'H' || ch == 'Z') && (rand() % 100) < 50) {
                printf("\033[33m%c%s", ch, RESET_COLOR);  // Yellow/gold
            }
            else {
                printf("%c", ch);
            }
            j++;
        }
        printf("\n");
    }

    // Add a sparkle message
    printf("\n");
    printf("  %s\342\234\250 Merry Christmas! \342\234\250%s\n", getRandomColor(), RESET_COLOR);
    printf("   Press Ctrl+C to stop\n");
}

int main(int argc, char **argv)
{
    // Initialize random seed
    srand(time(NULL));

    // Infinite animation loop
    while (1) {
        clearScreen();
        drawTree();
        SLEEP(400);  // 400ms delay between frames
    }

    return 0;
}
