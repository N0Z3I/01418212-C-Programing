#include <stdio.h>

void display1();
void display2();

int value = 50; // GV

int main()
{
    int value = 100; // LV
    printf("value local variables is: %d\n", value);
    display1();
    display2();

    return 0;
}

void display1()
{
    printf("global variables in functions: %d\n", value);
}
void display2()
{
    //value += 15;
    printf("global variables in functions: %d\n", value);
}
