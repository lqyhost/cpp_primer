#include <iostream>
#include <string>

using namespace::std;

struct car
{
    /* data */
    string producter;
    int product_year;
};

void show_car_massage(car c)
{
    cout<<"producter: "<<c.producter<<endl;
    cout<<"product_year: "<<c.product_year<<endl;
}

int main()
{
    int car_num=0;
    cout<<"How many car do you have: ";
    cin>>car_num;
    car *cars = new car[car_num];
    for (int i=0;i<car_num; i++)
    {
        cout<<"No. "<<i+1<<" car massage."<<endl;
        cin.get();
        cout<<"Enter producter of the car:";
        getline(cin,cars[i].producter);
        cout<<"Enter product year of the car:";
        cin>>cars->product_year;
    }
    for (int i=0;i<car_num; i++)
    {
        cout<<"No. "<<i+1<<"cat massage."<<endl;
        show_car_massage(cars[i]);
    }
    delete [] cars;
}