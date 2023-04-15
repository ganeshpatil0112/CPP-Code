#include<iostream>
using namespace std;

class unit
{
    float cm,m,km,feat;
    public:
    void get_data();
    void show_data();
    unit();
    private:
    float meter();
    float kilometer();
    float feats();
};
unit::unit()
{
    cout<<"constructor "<<endl;
    cm = 0;
    m = 0;
    km = 0;
    feat = 0;
}
void unit::get_data()
{
    cout<<"Enter the value in centimeter : ";
    cin>>cm;
}
float unit::meter()
{
    m = cm / 100;
    return m;
}
float unit::kilometer()
{
    km = cm / 1000;
    return km;
}
float unit::feats()
{
    feat = cm / 30;
    return feat;
}
void unit::show_data()
{
    cout<<"Meter : "<<meter()<<endl;
    cout<<"kilometer : "<<kilometer()<<endl;
    cout<<"feats : "<<feats()<<endl;
}

int main()
{
    unit x;
    x.show_data();
}