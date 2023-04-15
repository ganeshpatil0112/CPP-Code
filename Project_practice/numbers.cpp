#include<iostream>
using namespace std;
class number
{
    int a1,i,count=0;
    public:
    void get_data();
    void get_data(int);
    int show_data();
    int negate();
    bool check_prime();
    bool check_evenodd();
};

void number::get_data()
{
    cout<<"enter numbers :";
    cin>>a1;
}
void number::get_data(int x)
{
    a1=x;
}
int number::show_data()
{
    return a1;
}
int number::negate()
{
    a1=(-a1);
    return a1;
}
bool number::check_prime()
{
    for(i=1;i<=a1;i++)
    {
        if(a1%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool number::check_evenodd()
{
    if(a1%2)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
int main()
{
    number x;
    x.get_data();
    cout<<"prime test :"<<x.check_prime()<<endl;
    cout<<"even odd test :"<<x.check_evenodd()<<endl;
    cout<<"negate of "<<x.show_data()<<" : "<<x.negate()<<endl;
    //cout<<"negate of : "<<x.show_data()<<" : "<<x.negate()<<endl;
}