#include<iostream>
using namespace std;
class A
{
    public:
    int i=0;
    A()
    {
        i++;
        cout<<i<<endl;
    }
};
class B:virtual public A
{

};
class C:virtual public A
{};
class D:public B,public C
{};

int main()
{
D obj;

}