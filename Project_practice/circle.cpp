#include<iostream>
using namespace std;

class circle
{
    int r,ans;
    public:
    void get_data();
    void get_data(int);
    int area();
    int show_data();
};
void circle::get_data()
{
    cout<<"enter the radious :";
    cin>>r;
}
void circle::get_data(int x)
{
    r=x;
}
int circle::show_data()
{
    area();
    return ans;
}
int circle::area()
{
    ans=3.14*r*r;
    return ans;
}
int main()
{
    circle x;
    x.get_data();
    cout<<"Area of circle is : "<<x.show_data()<<endl;
}