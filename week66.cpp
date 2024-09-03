#include<iostream>
using namespace std;
class counter
{
    private:
    static int count;
    public: counter()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
    static void resetCount()
    {
        count = 0;
    }
};
int counter::count=0;
int main()
{
cout<<"initial count: "<<counter::getCount()<<endl;

counter c1;
counter c2;

cout<<"Count after creating 2 instances:"<<counter::getCount()<<endl;

counter::resetCount(); 
cout<<"Count after reset:"<<counter::getCount()<<endl;

counter c3;
cout<<"Count after creating another instaance:"<<counter::getCount()<<endl;

return 0;
}
