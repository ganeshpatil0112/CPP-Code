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