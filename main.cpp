#include <iostream>
#include <math.h>

using namespace std;
class hinhthang
{
private:
    int daylon,daybe,chieucao;
public:
    void Nhap1()
    {
        cout<< "Nhap day lon: ";  cin>>daylon;
        cout<< "Nhap day be: ";   cin>>daybe;
        cout<< "Nhap chieu cao: ";cin>>chieucao;
    }
    void Tinh1()
    {
        float s=((daybe+daylon)*chieucao)/2.0;
        cout<< "Dien tich hinh thang la: "<<s;

    }
};
class hinhtron
{
private:
    int r;
public:
    void Nhap2()
    {
        cout<< "Nhap ban kinh r: "; cin>>r;
    }
    void Tinh2()
    {
        float p=3.14*2*r;
        float s=3.14*r*r;
        cout<< "Chu vi dien tich lan luot la: "<<p<<" va "<< s;
    }
};
class Pt1
{
private:
    int a,b;
public:
    void Nhap3()
    {
        cout<< "Nhap a: "; cin>>a;
        cout<< "Nhap b: "; cin>>b;
    }
    void Tinh3()
    {

        if(a==0)
        {
            if(b==0)
            {
                cout<< "Phuong trinh vo sao nghiem";
            }else{
              cout<< "Phuong trinh vo nghiem";
            }
        }else{
            float x=-b*1.0/a*1.0;
          cout<< "Nghiem cua phuong trinh la: "<<x;
        }
    }
};
class Pt2
{
private:
    int a,b,c;
public:
    void Nhap4()
    {
        cout<< "Nhap a:"; cin>>a;
        cout<< "Nhap b:"; cin>>b;
        cout<< "Nhap c:"; cin>>c;
    }
    void Tinh4()
    {
        float delta=(b*b*1.0)-(4*a*c);
        if(delta<0)
        {
            cout<< "Phuong trinh vo nghiem";
        }else if(delta==0){
            cout<< "Phuong trinh co nghiem kep="<<(-b*1.0)/2*a;
        }else{
            cout<< "Hai nghiem cua phuong trinh la: "<<((-b*1.0)+sqrt(delta))/2.0*a<< "va"<<((-b*1.0)-sqrt(delta))/2.0*a;
        }
    }
};
class tamgiac
{
private:
    int day,chieucao;
public:
    void Nhap5()
    {
        cout<< "Nhap chieu dai canh day: "; cin>>day;
        cout<< "Nhap chieu cao: ";  cin>>chieucao;

    }
    void Tinh5()
    {
        cout<< "Dien tich cua tam giac la: "<<1.0/2.0*day*chieucao;
        cout<< "Chu vi dua vao lang nhang khong nho cong thuc herong";
    }
};
int main()
{
   // hinhthang a;
   // a.Nhap1();
   // a.Tinh1();
   //hinhtron b;
   //b.Nhap2();
   //b.Tinh2();
   //  Pt1 c;
   //  c.Nhap3();
   //  c.Tinh3();
   //Pt2 d;
   //d.Nhap4();
   //d.Tinh4();
   tamgiac  e;
   e.Nhap5();
   e.Tinh5();
    return 0;
}
