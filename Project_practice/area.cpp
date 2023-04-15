#include<iostream>
#include<math.h>
using namespace std;
class shapes
{
    int radious,height,breadth,length,base,area;
    float area_c;
    void input_circle();
    void input_rectangle();
    void input_tringle();
    void input_cylinder();
    void input_cone();
    void output_circle();
    void output_rectangle();
    void output_tringle();
    void output_cylinder();
    void output_cone();

    public:
    float circle();
    int rectangle();
    float tringle();
    float cylinder();
    float cone();
};
void shapes::input_circle()
{
    cout<<"enter the radious : ";
    cin>>radious;
}
void shapes::input_rectangle()
{
    cout<<"enter the length & breath : ";
    cin>>length>>breadth;
}
void shapes::input_tringle()
{
    cout<<"enter the base & height : ";
    cin>>base>>height;
}
void shapes::input_cylinder()
{
    cout<<"enter radious & height : ";
    cin>>radious>>height;
}
void shapes::input_cone()
{
    cout<<"enter radious & height : ";
    cin>>radious>>height;
}
void shapes::output_circle()
{
    area_c = ( 3.14 * radious * radious );
}
void shapes::output_rectangle()
{
    area = ( length * breadth );
}
void shapes::output_tringle()
{
    area_c = ( 0.5 * base * height);
}
void shapes::output_cylinder()
{
    area_c = ( 2 * 3.14 * radious * height ) + ( 2 * 3.14 * radious * radious );
}
void shapes::output_cone()
{
    area_c = ( 3.14*radious*(radious+sqrt(height*height+radious*radious)));
}
float shapes::circle()
{
    cout<<"inside circle";
    input_circle();
    output_circle();
    return area_c;
}
int shapes::rectangle()
{
    input_rectangle();
    output_rectangle();
    return area;
}
float shapes::tringle()
{
    input_tringle();
    output_tringle();
    return area_c;
}
float shapes::cylinder()
{
    input_cylinder();
    output_cylinder();
    return area_c;
}
float shapes::cone()
{
    input_cone();
    output_cone();
    return area_c;
}
/*
int main()
{
    shapes a1,a2,a3,a4,a5;
    cout<<"circle : "<<a1.circle()<<endl;
    cout<<"rectangle : "<<a2.rectangle()<<endl;
    cout<<"triangle : "<<a3.tringle()<<endl;
    cout<<"cylinder : "<<a4.cylinder()<<endl;
    cout<<"cone : "<<a5.cone()<<endl;
}
*/