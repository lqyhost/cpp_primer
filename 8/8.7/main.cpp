#include <iostream>

using namespace::std;

template<typename T>
void ShowArray(T arr[], int n);

template<typename T>
void ShowArray(T *arr[], int n);

template<typename T>
double SumArray(T arr[], int n);

template<typename T>
double SumArray(T *arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 103, 301,310,130};
    struct debts mt_E[3] = 
    {
        {"Tm",2400},
        {"Ur", 1300},
        {"Ib", 1800}
    };
    double * pd[3];
    for (int i = 0; i < 3; i ++)
        pd[i] = &mt_E[i].amount;
    cout<<"Listing Mr. E's count of thing:\n";
    ShowArray(things, 6);
    cout<<"Sum: "<<SumArray(things, 6)<<endl;
    cout<<"Listing Mr.E's debts:\n";
    ShowArray(pd, 3);
    cout<<"Sum: "<<SumArray(pd, 3)<<endl;
    return 1;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    cout << "template A\n";
    for(int i = 0; i < n ;i++)
        cout<< arr[i]<< ' ';
    cout<<endl;
}

template <typename T>
void ShowArray(T * arr[] ,int n)
{
    cout << "template B\n";
    for(int i = 0; i < n ;i++)
        cout<< *arr[i]<< ' ';
    cout<<endl;
}

template <typename T>
double SumArray(T arr[], int n)
{
    double rt = 0;
    cout << "template A\n";
    for(int i = 0; i < n ;i++)
        rt += arr[i];
    return rt;
}

template <typename T>
double SumArray(T * arr[] ,int n)
{
    double rt = 0;
    cout << "template B\n";
    for(int i = 0; i < n ;i++)
        rt += *arr[i];
    return rt;
}