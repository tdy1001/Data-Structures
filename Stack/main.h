#include <iostream>
#define T int
using namespace std;

const int MAXSIZE = 10;

/**
 * name: Stack
 * Author: TDeu
 * Date: 2020/07/12 19:11:15
 * Effect: Basic operation of stack
 * */

class Stack
{
private: //Private member variable
    static int cnt;
    T value;
    Stack *next;

public: //Common member function
    /* CRD */
    //Insert data returns a new pointer
    Stack *push(Stack *s, Stack *x);

    //Output data returns a new pointer
    Stack *pop(Stack *s, T *x);

    //Clearing stack returns whether the clearing was successful
    bool clearStack(Stack *s);

    /* Initialize the stack */
    bool init(Stack *s);
    Stack()
    {
        this->value = 0;
        this->next = NULL;
    }
    Stack(T x)
    {
        this->value = 0;
        this->next = NULL;
        this->value = x;
    }
    ~Stack()
    {
        this->value = 0;
        this->next = NULL;
        delete this;
    }

    /* Determine if it is empty or full */
    bool stackEmpty(Stack *s);
    bool stackFull(Stack *s);

    /* save&change */
    T getValue();
    bool setValue(T x);
    Stack *getNext();
    bool setNext(Stack *x);
};

//Initializes static member variables
int Stack::cnt = 0;