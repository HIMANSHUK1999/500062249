#include <iostream>

using namespace std;

class simpleinterest
{
private:
    int p;
    float r;
    int t;
public:
    void getdata(int *x,float *y,int *z)
    {
        p=*x;
        r=*y;
        t=*z;
    }
    float calculate()
    {
        float s;
        s=(p*r*t)/100;
        return s;
    }
};
int main()
{
    int a,c;
    float b,d;
    simpleinterest object;
    cout<<"Enter the principal amount, rate , tenure";
    cin>>a>>b>>c;
    object.getdata(&a,&b,&c);
    d=object.calculate();
    cout<<"The simple interest after "<<c<<" years is "<<d;
    return 0;
}
