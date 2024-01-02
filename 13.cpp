#include <iostream>
using namespace std;

int main() {
    char display[100]; // Assuming a character array to store the input

    cout << "Enter a line of text: ";
    cin.getline(display, sizeof(display)); // Reads a line of text from cin

    cout << "You entered to display: " << display<<endl;

    return 0;
}
