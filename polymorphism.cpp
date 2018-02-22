#include <iostream>

using namespace std;
class mensuration
{
private:
    int a;
    int b;
    int c;
public:
    int area(int a)
    {
        this->a=a;
        return 3.14*a*a;
    }
    int area(int a,int b)
    {
        this->a=a;
        this->b=b;
        return a*b;
    }
    int area(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
        return a*b*c;
    }
};

int main()
{
    mensuration obj1,obj2,obj3;
    int i,l,m,n,b,k;
    do
    {
        b=0;
    cout << "Enter the case no. according to area you need\n1.If you input only 1 value it will give area of circle\n2.If you input only 2 values it will give area of rectangle\n3.If you input only 3 values it will give volume of cuboid ";
    cin>>i;
    switch(i)
    {
        case 1:cout<<"Enter the radius\n";
        cin>>l;
        b=obj1.area(l);
        cout<<"The area is\n"<<b<<"\n";
        break;
        case 2:cout<<"Enter the sides of the rectangle\n";
        cin>>l>>m;
        b=obj2.area(l,m);
        cout<<"The area of the rectangle is \n"<<b<<"\n";
        break;
        case 3:cout<<"Enter the sides of the cuboid\n";
        cin>>l>>m>>n;
        b=obj3.area(l,m,n);
        cout<<"The volume of the cuboid\n"<<b<<"\n";
        break;
    }
    cout<<"Do you want to continue(1|0)";
    cin>>k;
    }while(k==1);
    return 0;
}
