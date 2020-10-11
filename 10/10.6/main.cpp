#include "move.h"

int main()
{
    Move  m(12, 5);
    Move m1(33,8);
    m.showmove();
    Move m2 = m.add(m1);
    m2.showmove();
    m2.reset(11,12);
    m2.showmove();
    return 0;
}