#include "main.h"

Stack *Stack::push(Stack *s, Stack *x)
{
    if (this->stackFull(s))
    {
        x->setNext(s);
        cnt++;
        return x;
    }
    return NULL;
}

Stack *Stack::pop(Stack *s, T *x)
{
    if (this->stackEmpty(s))
    {
        *x = s->getValue();
        return s->getNext();
    }
    return NULL;
}

bool Stack::clearStack(Stack *s)
{
    Stack *t;
    while (s)
    {
        t = s;
        t->~Stack();
        s = s->getNext();
        cnt--;
    }
    return true;
}

bool Stack::init(Stack *s)
{
    cnt = 0;
    return true;
}

bool Stack::stackEmpty(Stack *s)
{

    if (s->getNext() != NULL)
        return true;
    return false;
}

bool Stack::stackFull(Stack *s)
{
    if (cnt >= MAXSIZE)
        return false;
    return true;
}

T Stack::getValue()
{
    return this->value;
}

bool Stack::setValue(T x)
{
    this->value = x;
    return true;
}

Stack *Stack::getNext()
{
    return this->next;
}

bool Stack::setNext(Stack *x)
{
    this->next = x;
    return true;
}

/* Test sample */
int main()
{
    Stack *top = new Stack();
    Stack *s = new Stack(1);
    Stack *l = new Stack(2);
    top = top->push(top, s);
    top = top->push(top, l);
    T x;
    top = top->pop(top, &x);
    cout << x << endl;
    top = top->pop(top, &x);
    cout << x << endl;
    return 0;
}