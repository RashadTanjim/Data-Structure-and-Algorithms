#include <iostream>
#include <stdio.h>
#include "ArrayStack.cpp"
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    ArrayStack<char> array;

    char inFix[20],postFix[20];
    cout << "Infix: ";
    gets(inFix);
    int a, b, op;
    char z;
    int j = -1;

    cout << "Postfix: ";
    for(int i=0; i<strlen(inFix); i++){
        if(inFix[i] == '('){
            array.Push(inFix[i]);
        }else if(inFix[i] == ')'){
            while(array.Top() != '('){
                cout << array.Top();
                ++j;
                postFix[j] = array.Top();
                array.Pop();
            }
            array.Pop();
        }else if(inFix[i] == '-'){
            if(array.getTop() == -1){
                array.Push(inFix[i]);
            }else if(array.Top() == '('){
                array.Push(inFix[i]);
            }else{
                while(array.Top() != '(' && array.getTop() != -1){
                if(array.Top() == '+'){
                    array.Push(inFix[i]);
                    break;
                }else{
                    cout << array.Top();
                    ++j;
                    postFix[j] = array.Top();
                    array.Pop();
                }
                }
            }
        }else if(inFix[i] == '+'){
            if(array.getTop() == -1){
                array.Push(inFix[i]);
            }else if(array.Top() == '('){
                array.Push(inFix[i]);
            }else{
                while(array.Top() != '(' && array.getTop() != -1){
                    cout << array.Top();
                    ++j;
                    postFix[j] = array.Top();
                    array.Pop();
                }
                array.Push(inFix[i]);
                }
        }else if(inFix[i] == '*'){
            if(array.getTop() == -1){
                array.Push(inFix[i]);
            }else if(array.Top() == '('){
                array.Push(inFix[i]);
            }else{
                while(array.Top() != '(' && array.getTop() != -1){
                    if(array.Top() == '-' || array.Top() == '+'){
                    array.Push(inFix[i]);
                    break;
                    }else{
                    cout << array.Top();
                    ++j;
                    postFix[j] = array.Top();
                    array.Pop();
                    }
                }
                }
        }else if(inFix[i] == '/'){
            array.Push(inFix[i]);
        }else{
            cout << inFix[i];
            ++j;
            postFix[j] = inFix[i];
        }
        }
    while(array.getTop() != -1){
        cout << array.Top();
        ++j;
        postFix[j] = array.Top();
        array.Pop();
    }

    postFix[++j] = '\0';
    cout << endl;

    ArrayStack <int> intStack;
    for(int i = 0; i<strlen(postFix); i++){
        if(postFix[i] >= '0' && postFix[i] <= '9'){
            intStack.Push(postFix[i] - 48);
            continue;
        }
        if(postFix[i] == '+'){
            a =  intStack.Top();
            intStack.Pop();
            b = intStack.Top();
            intStack.Pop();
            op = b+a;
            intStack.Push(op);
        }else if(postFix[i] == '-'){
            a = intStack.Top();
            intStack.Pop();
            b = intStack.Top();
            intStack.Pop();
            intStack.Push(b-a);
        }else if(postFix[i] == '*'){
            a = intStack.Top();
            intStack.Pop();
            b = intStack.Top();
            intStack.Pop();
            intStack.Push(b*a);
        }else if(postFix[i] == '/'){
            a = intStack.Top();
            intStack.Pop();
            b = intStack.Top();
            intStack.Pop();
            intStack.Push(b/a);
        }
    }

    cout << "Result: " << intStack.Top() << endl;

    return 0;
}
