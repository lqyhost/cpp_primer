# include <iostream>

using namespace::std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int coplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin>>class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout<<"Done\n";
    return 1;
}

int getinfo(student pa[], int n)
{
    int i = 0;
    for (i = 0; i< n; i++)
    {
        cout << "enter students fullname: ";
        cin.getline(pa[i].fullname,SLEN);
        cout << "enter students hobby: ";
        cin.getline(pa[i].hobby,SLEN);
        cout << "enter students coplevel: ";
        cin>>pa[i].coplevel;
    }
    return i;
}

void display1(student st)
{
    cout<<"Display student:\n"<<st.fullname<<"  "<<st.hobby<<"  "<<st.coplevel<<endl;
}
void display2(const student *ps)
{
    cout<<"Display student:\n"<<ps->fullname<<"  "<<ps->hobby<<"  "<<ps->coplevel<<endl; 
}
void display3(const student pa[], int n)
{
    cout<<"Display student list:\n";
    for (int i = 0; i< n; i++)
    {
        cout<<"Display student:\n"<<i<<"  "<<pa->fullname<<"  "<<pa->hobby<<"  "<<pa->coplevel<<endl; 
    }
}