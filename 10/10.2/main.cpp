#include "person.h"

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.FormalShow();
    one.Show();
    two.FormalShow();
    two.Show();
    three.FormalShow();
    three.Show();
}