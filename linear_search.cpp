#include<iostream>
using namespace std;
class info
{
private:
char arr[12],i;
public:
void getdata(int n)
{
cout<<"Enter the characters in the array.";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
}
void search(char a)
{
int i,n;
cout<<"Again enter the limit till you had entered the array";
cin>>n;
for(i=0;i<n;i++)
{
if(arr[i]==a)
{
cout<<"The element is in "<<i+1<<"th position\n";
}
}
}
};
int main()
{
info obj1;
char a;
int n;
cout<<"Enter the limit untill which you want to insert in an array";
cin>>n;
obj1.getdata(n);
cout<<"Enter the character that you want to search in the array";
cin>>a;
obj1.search(a);
return 0;
}

