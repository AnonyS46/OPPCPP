
#include<iostream>
#include<stdio.h>

using namespace std;

class HCN
{
private:
    int D,R;
public:
    void Nhap()
    {
        cout<< "Nhap chieu dai: ";  cin>>D;
        cout<< "Nhap chieu rong: "; cin>>R;
    }
    void Ve()
    {
        for(int i=0;i<D;i++)
        {
            for(int j=0;j<R;j++)
            {
                if(i==0||i==D-1||j==0||j==R-1)
                {
                    cout<<"*";
                }else{
                    cout<<" ";

                }
            }
            cout<<endl;
        }
    }
};

int main()
{
    HCN a;
    a.Nhap();
    a.Ve();
  return 0;
}
