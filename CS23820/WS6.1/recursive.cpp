/*
 * File:   recursive.cpp
 * Author: nealsnooke
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int myglobal = 0;

void doIt(int level){
    static int mystaticlocal = 42;
    int a = 1;
    int *ap = &a;

    int *b = (int*)malloc(sizeof(int));
    *b = 2;

    cout << "level " << level << '\n' << "ap pojnts to: " << ap <<
         "     b points to: " << b << endl;
    // %p      b points to: %p\n", level, ap, b);

    cout << "location of a: " << &a << " size of ap is: " << (int)sizeof(ap) << endl;
    cout << "location of level: " << &level << endl;
    cout << "location of mystaticlocal is:" << &mystaticlocal << endl;

    cout << "value of a is: " << a << " value of b is: " <<*b << endl;
    cout << "location of a: " << &a << " size of ap is: " << (int)sizeof(ap) << endl;
    cout << "location of level: " << &level << endl;


    if (level>0)
        doIt(--level);
    return;
}

/*
 *
 */
int main(int argc, char** argv) {
    cout << "\nsize of an int on this machine is: " << (int)sizeof(int) << endl;
    doIt(3);
    cout << '\n';
    doIt(3);
    cout << "myglobal location is:" << &myglobal << endl;

    return 0;

}
