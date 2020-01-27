using namespace std;
#include<iostream>
#define max 5
int s=0;
template <class T>

class stack
{
    T data;
    T arr[max];

    public:
    stack()
    {
        s=0;
    }
    void push()
    {
        cin>>data;
        data*=2;
        arr[s++]=data;
    }
    void pop()
    {
        s--;
    }
    void show()
    {
        for (int num=0;num<s;num++)
        {
            cout<<arr[num]<<" ";
        }
        cout<<endl;
    }

};


int main()
{

     stack <int> s1;
     s1.push();
     s1.push();
     s1.push();
     s1.push();
     s1.push();
     s1.pop();
     s1.show();
     stack <float> s2;
     s2.push();
     s2.push();
     s2.push();
     s2.push();
     s2.push();
     s2.pop();
     s2.show();
     return 0;
     }
