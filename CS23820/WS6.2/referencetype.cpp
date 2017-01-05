
/*
 * File:   referencesandconst.cpp

 */

#include <iostream>
using namespace std;

void TryPtrRef(int * &ob){
    ob = new (int);
    *ob = 55;
}

void TryPtrPtr(int ** ob){
    *ob = new (int);
    **ob = 99;
}

/*
 *
 */
int main(int argc, char** argv) {

    int * a;

    a = new(int);
    //a = (int*)malloc(sizeof(int));
    *a = 42;
    cout << "Address of a (on the stack) is " << &a << endl;
    cout << "a is a pointer to " << a << endl;


    TryPtrRef(a);

    TryPtrPtr(&a);

    cout << "\nFinal value of a is " << *a << endl;

    return (EXIT_SUCCESS);
}

void TryConst(){
    char * s1 = "hello";
    //const char * s1 = "hello";
    s1[0] = 'x';
    s1++;
    cout << s1 <<'\n';

    int a = 10;
    int * const i = new int(42);

    //int s2 = &i;
    //s2 = &i;
    (*i)++;
    cout << *i <<'\n';
    //i=a;

    struct mystr {int i; int j;};
    struct mystr s;
    s.i = 33;
    s.j = 66;
    struct mystr const &s4 = s;
    cout << s4.i << " " << s4.j <<'\n';

    //s4.i = 42;
}

