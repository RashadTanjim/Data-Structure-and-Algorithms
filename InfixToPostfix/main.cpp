
//Name: MD. Rashad Tanjim
//ID: 1620952042
//Section: 1
//CSE225
//Assignment-1


/*
Algorithm for Infix to Postfix

Examine the next element in the input.
If it is operand, output it.
If it is opening parenthesis, push it on stack.
If it is an operator, then
Pop until the top of the stack has an element of lower precedence
Then push it
If it is a closing parenthesis, pop operators from stack and output them until an opening parenthesis is encountered. pop and discard the opening parenthesis.
If there is more input go to step 1
If there is no more input, pop the remaining operators to output.
*/


#include "InfixToPostfix.cpp"
#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    cout <<"Enter any Infix Expression: "<<endl;
    InfixToPostfix<char> s;
    char infix[50];
    char postfix[50];
    gets(infix);
    int size=-1;
    for(int i=0; i<strlen(infix); i++)
    {
        if(infix[i]=='(')
        {
            s.push(infix[i]);

        }
        else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/')
        {
            s.push(infix[i]);

        }
        else if(infix[i]==')')
        {
            for(int k=0; k<2; k++)
            {
                if(s.Top()=='+'||s.Top()=='-'||s.Top()=='*'||s.Top()=='/')
                {
                    size++;
                    postfix[size]=s.Top();
                    s.pop();
                }
                else if(!s.IsEmpty())
                {
                    s.pop();
                }
            }
        }
        else if(infix[i]>='0' && infix[i]<='9')
        {
            size++;
            postfix[size]=infix[i];
        }

        if(infix[i]==')')
        {
            if(!s.IsEmpty())
            {
                if(infix[i+1]=='+'||infix[i+1]=='-'||infix[i+1]=='*'||infix[i+1]=='/')
                {
                    if(s.Top()!='(')
                    {
                        size++;
                        postfix[size]=s.Top();
                        s.pop();
                    }
                }

            }
        }
    }
    if(!s.IsEmpty())
    {
        size++;
        postfix[size]=s.Top();
        s.pop();


    }


     cout <<"Postfix Expression is: "<<endl;
    for(int i=0; i<strlen(infix); i++)
    {
        cout<<postfix[i];
    }
    cout<<endl;
    return 0;
}

