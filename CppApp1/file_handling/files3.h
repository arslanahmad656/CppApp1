#pragma once
#include <Windows.h>

const int RED = 4;
const int GREEN = 2;
const int BLUE = 1;
const int WHITE = 15;

void SetForegroundColor(int foreground) {
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Retrieve the current console attributes
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    int background = consoleInfo.wAttributes & 0xF0;  // Extract background color bits

    // Set the new color with the original background and new foreground
    SetConsoleTextAttribute(hConsole, foreground | background);
}

void f3t1()
{
    const char* fileName = "color.jpg";
    cout << "Enter you choice:\n"
        << "\t 1 for setting color\n"
        << "\t 2 for displaying output" << endl;
    int choice;
    cin >> choice;
    int colorCode = -1;
    if (choice == 1)
    {
        cout << "Enter the color code to set: ";
        cin >> colorCode;
        ofstream fout(fileName);
        if (!fout)
        {
            cerr << "File could not be opened.";
            abort();
        }

        fout << colorCode;
    }
    else
    {
        ifstream fin(fileName);
        if (!fin)
        {
            cerr << "File could not be opened for reading.";
            abort();
        }

        fin >> colorCode;

        SetForegroundColor(colorCode);

        cout << "You set this color." << endl;
    }
}

void testFiles3()
{
	f3t1();
}