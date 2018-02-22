#include <iostream>

using namespace std;

class studentinfo
{
private:
    int rollno;
    int marks;
public:
    void getdata();
    void display();
} ;
void studentinfo:: getdata()
{
    cout<<"Enter the roll no.and marks of the student";
    cin>>rollno;
    cin>>marks;
}
void studentinfo:: display()
{
    cout<<"Roll no. "<<rollno<<"\n";
    cout<<"Marks "<<marks<<"\n";
}
int main()
{
    studentinfo obj1,obj2;
    obj1.getdata();
    obj1.display();
    obj2.getdata();
    obj2.display();
    return 0;
}
