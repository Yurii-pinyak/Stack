#include "Stack.h"
int main()
{
    srand(time(0));
    string c = "(x + y)*(x + y}+(c + f)";
    char h;
    int size = c.size();
    int i = 0;
    Stack ST(size);
    for (int i = 0;i < size;i++) {
        h = c[i];
        ST.Push(h);
    }
    int help = 0;
    for (int i = 0;i < size;i++) {
        h = ST.Pop();
        if ((int)h == 40 || (int)h == 41 || (int)h == 91 || (int)h == 93 || (int)h == 123 || (int)h == 125) {
            help++;
        }
        cout << h << " ";
    }
    char* symb = new char[help];
    int* indx = new int[help];
    ST.ntop();
    int k = 0;
    for (int i = 0;i < size;i++) {
        h = ST.Pop();
        if ((int)h == 40 || (int)h == 41 || (int)h == 91 || (int)h == 93 || (int)h == 123 || (int)h == 125) {
            symb[k] = h;
            indx[k] = i;
            k++;
        }
    }
    cout << endl;
    int nfinal = size;
    for (int i = 0;i < help;i++) {
        k = i + 1;
        if ((int)symb[i] == 40) {
            if ((int)symb[k] == 41) {
                i = k + 1;
                continue;
            }
            else {
                nfinal = indx[i];
            }
        }
        else if ((int)symb[i] == 91) {
            if ((int)symb[k] == 93) {
                i = k + 1;
                continue;
            }
            else {
                nfinal = indx[i];
            }
        }
        else if ((int)symb[i] == 123) {
            if ((int)symb[k] == 125) {
                i = k + 1;
                continue;
            }
            else {
                nfinal = indx[i];
            }
        }
    }
    ST.ntop();
    for (int i = 0;i < nfinal + 2;i++) {
        h = ST.Pop();
        cout << h << " ";
    }
}