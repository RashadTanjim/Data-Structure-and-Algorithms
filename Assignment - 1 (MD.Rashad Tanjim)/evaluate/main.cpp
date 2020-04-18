
//Name: MD. Rashad Tanjim
//ID: 1620952042
//Section: 1
//CSE225
//Assignment-1

/*
Algorithm for evaluating a postfix expression

Initialize an empty stack
Read next item in the expression
If item is an operand, push it into the stack
Else, if item is an operator, pop top two items off the stack, apply the operator, and push the answer back into the stack
If there are more items to process, go to step 2
Pop the answer off the stack.
*/

#include<iostream>
#include<cctype>
#include<stack> //using Stack operators from standard library of C++
#include<string>
using namespace std;

int evaluate(int op1, int op2, char operate)
{
    switch (operate)
    {
    case '*':
        return op2 * op1;
    case '/':
        return op2 / op1;
    case '+':
        return op2 + op1;
    case '-':
        return op2 - op1;
    default :
        return 0;
    }
}
int evaluatePostfix(char postfix[], int size)
{
    stack<int> s;
    int i = 0;
    char ch;
    int result;
    while (i < size)
    {
        ch = postfix[i];
        if (isdigit(ch))
        {
            s.push(ch-'0');
        }
        else
        {

            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();
            result = evaluate(op1, op2, ch);

            s.push(result);
        }
        i++;
    }
    return result;
}
int main()
{
    cout<<"Input is = 4 8 + 6 5 - * 3 2 - 2 2 + * "<<endl;
    char postfix[] = {'4','8','+','6','5','-',
                      '*','3','2','-','2','2','+','*','/'
                     };
    int size = sizeof(postfix);
    int result = evaluatePostfix(postfix, size);

    cout<<"Postfix Expression Evaluation is: "<<result;
    cout<<endl;
    return 0;
}
