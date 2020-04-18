#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
#include "Huffman.h"
//--- Definition of buildDecodingTree()
void Huffman::buildDecodingTree(ifstream & codeIn)
{
    char ch; // a character
    string code; // its code
    for (;;)
    {
        codeIn >> ch >> code;
        if ( codeIn.eof() ) return;
        insert(ch, code);
    }
}
//--- Definition of insert()
void Huffman::insert(char ch, string code)
{
    Huffman::BinNodePointer p = myRoot; // pointer to move down the tree
    for(int i = 0; i < code.length(); i++)
    {
        switch (code[i])
        {
        case '0' : // descend left
            if (p->left == 0) // create node along path
                p->left = new Huffman::BinNode('*');
            p = p->left;
            break;
        case '1' : // descend right
            if (p->right == 0) // create node along path
                p->right = new Huffman::BinNode('*');
            p = p->right;
            break;
        default:
            cerr << "*** Illegal character in code ***\n";
            exit(1);
        }
    }
    p->data = ch;
}//--- Definition of decode()
void Huffman::decode(ifstream & messageIn)
{
    char bit; // next message bit
    Huffman::BinNodePointer p; // pointer to trace path in decoding tree
    for(;;)
    {
        p = myRoot;
        while (p->left != 0 || p->right != 0)
        {
            messageIn >> bit;
            if ( messageIn.eof() ) return;
            cout << bit;
            if (bit == '0')
                p = p->left;
            else if (bit == '1')
                p = p->right;
            else
                cerr << "Illegal bit: " << bit << " -- ignored\n";
        }
        cout << "--" << p->data << endl;
    }
}
//--- Definition of printTree()
void Huffman::printTree(ostream & out, Huffman::BinNodePointer root,
                        int indent)
{
    if (root != 0)
    {
        printTree(out, root->right, indent + 8);
        out << setw(indent) << " " << root->data << endl;
        printTree(out, root->left, indent + 8);
    }
}
