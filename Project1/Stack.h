#pragma once
#include <iostream>
using namespace std;
#include <stdio.h>
#include <Windows.h>
#include <ctime>
#include "stdio.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstdlib>
class Stack
{
    int EMPTY;
    int FULL;
    char* st;
    int top;
public:
    Stack();
    Stack(int size);
    void Push(char c);
    char Pop();
    void Clear();
    bool IsEmpty();
    bool IsFull();
    int GetCount();
    void ntop();
    void ftop();
};
