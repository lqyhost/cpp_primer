#include <iostream>
#include "list.h"

using namespace::std;

int main()
{
    customer ctms[3]={{"Jack", 33.0}, {"Marry", 45.0}, {"Malt", 55}};
    cout<<ctms[1].payment<<endl;
    List st;
    st.push(ctms[0]);
    st.push(ctms[1]);
    st.show_payment();
    cout<<st.get().payment<<endl;
    st.pop();
    st.show_payment();
}
