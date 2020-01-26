#include <iostream>
using namespace std;

void printMessage(string message, bool printTop = true, bool printBottom = true) {
    if(printTop) {
        cout << "+-------------------------------------+" << endl;
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
    }
}

void drawHangman() {}

int main() {
    printMessage("HANG MAN");
    return 0;
}
