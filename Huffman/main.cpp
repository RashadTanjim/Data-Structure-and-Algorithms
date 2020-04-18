#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
#include "Huffman.h"
int main()
{
    char filename[32];
    cout << "Enter name of code file: ";
    cin >> filename;
    ifstream codestream(filename);
    if (!codestream.is_open())
    {
        cout << "Cannot open code file.\n";
        exit(1);
    }
    Huffman h;
    h.buildDecodingTree(codestream);
    cout << "Here is the Huffman decoding tree:\n";
    h.displayDecodingTree(cout);
    cout << endl;
    cout << "\nName of message file: ";
    cin >> filename;
    ifstream message(filename);
    if (!message.is_open())
    {
        cout << "Cannot open message file.\n";
        exit(1);
    }
    h.decode(message);
}
