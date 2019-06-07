#include <iostream>

using namespace::std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_box_with_volume(box b)
{
    cout<<"show box with volume"<<endl;
    cout<<"box maker:"<<b.maker<<endl;
    cout<<"box height:"<<b.height<<endl;
    cout<<"box width:"<<b.width<<endl;
    cout<<"box length:"<<b.length<<endl;
}

void show_box_with_address(box * b)
{
    cout<<"show box with address"<<endl;
    cout<<"box maker:"<<b->maker<<endl;
    cout<<"box height:"<<b->height<<endl;
    cout<<"box width:"<<b->width<<endl;
    cout<<"box length:"<<b->length<<endl;
    b->volume = b->height * b->width * b->length;
    cout<<"box volume:"<<b->volume<<endl;
}



int main()
{
    box b ;
    cout<<"input box:"<<endl;
    cout<<"box maker:";
    cin>>b.maker;
    cout<<"box height:";
    cin>>b.height;
    cout<<"box width:";
    cin>>b.width;
    cout<<"box length:";
    cin>>b.length;
    show_box_with_volume(b);
    show_box_with_address(&b);
}