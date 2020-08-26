#include "Stack.h"
Stack::Stack()
{

    EMPTY = -1;
    FULL = 20;
    st = new char[FULL + 1];
    top = EMPTY;
}
Stack::Stack(int size)
{
    EMPTY = -1;
    FULL = size;
    st = new char[FULL + 1];
    top = EMPTY;
}
void Stack::Clear()
{
    top = EMPTY;
}
bool Stack::IsEmpty() {
    return top == EMPTY;
}
bool Stack::IsFull()
{
    return top == FULL;
}
int Stack::GetCount()
{
    return top + 1;
}
void Stack::ntop()
{
    top = FULL - 1;
}
void Stack::Push(char c)
{
    int i = 0;
    if (!IsFull()) {
        st[++top] = c;
        i++;
    }
}
char Stack::Pop()
{
    if (!IsEmpty())
        return st[top--];
    else
        return 0;
}