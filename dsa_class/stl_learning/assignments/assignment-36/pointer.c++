#include<iostream>
using namespace std;
class student
{
  private:
  int age;
  int roll;
  public:
 void  setdata(int x,int y)
  {
    age=x;
    roll=y;
  }
  void display()
  {
    cout<<"age  "<<age<<endl;
    cout<<"roll "<<roll<<endl;
  }
};
int main()
{
    student s;
    student *p = &s;

    // s.setdata(4,8);
    // s.display();
    
    p->setdata(3,4);
    p->display();
    return 0;
}