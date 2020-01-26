#include <iostream>
using namespace std;

void printMessage(string message, bool printTop = true, bool printBottom = true) {
    if(printTop) {
        cout << "+-------------------------------------+" << endl;
        cout << "|";
    } else {
        cout << "|";
    }
    bool front = true;
    for(int i = message.length(); i < 39; i++) {
        if(front) {
            message = " " + message;
        } else {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();
    if(printBottom) {
        cout << "|" << endl;
        cout << "+-------------------------------------+" << endl;
    } else {
        cout << "|" << endl;
    }
}

void drawHangman(int guessCount = 0) {
    if(guessCount >= 1) {
        printMessage("|", false, false);
    } else {
        printMessage("", false, false);
    }
    if(guessCount >= 2) {
        printMessage("|", false, false);
    } else {
        printMessage("", false, false);
    }
    if(guessCount >= 3) {
        printMessage("0", false, false);
    } else {
        printMessage("", false, false);
    }
    if(guessCount == 4) {
        printMessage("/", false, false);
    }
    if(guessCount == 5) {
        printMessage("/|", false, false);
    }
    if(guessCount >= 6) {
        printMessage("/|\\", false, false);
    } else {
        printMessage("", false, false);
    }
    if(guessCount >= 7) {
        printMessage("|", false, false);
    } else {
        printMessage("", false, false);
    }
    if(guessCount == 8) {
        printMessage("/", false, false);
    }
    if(guessCount >= 9) {
        printMessage("/\\", false, false);
    } else {
        printMessage("", false, false);
    }
}

int main() {
    printMessage("HANG MAN");
    drawHangman(9);
    return 0;
}
