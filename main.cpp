#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class SapXep
{
private:
    int n;
    int *a;
public:
    void Nhap()
    {
        cout<< "Nhap gia tri n="; cin>>n;
         a=new int[n];
        for(int i=0;i<n;i++)
        {
            cout<< "\nNhap a["<<i<<"]=";cin>>a[i];
        }
    }
    void SapXep1()
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
    void Xuat()
    {
        for(int i=0;i<n;i++)
        {
            cout<< a[i]<<"\t";
        }
    }
};
class DN
{
private:
    string tendn;
    string diachi;
    int sonv;
    int doanhthu;
public:
    void NhapDn()
    {
        fflush(stdin);
        cout<< "Nhap ten doanh nghiep:"; getline(cin,tendn);
        fflush(stdin);
        cout<< "Nhap dia chi doanh nghiep:"; getline(cin,diachi);
        fflush(stdin);
        cout<< "Nhap so nhan vien:"; cin>>sonv;
        cout<< "Nhap doanh thu:"; cin>>doanhthu;
    }
    void XuatDn()
    {
        cout<< "Ten DN:"<<tendn<< "\t";
        cout<< "Dia chi:"<<diachi << "\t";
        cout<< "So nhan vien:"<<sonv<< "\t";
        cout<< "Doanh thu:"<<doanhthu<< "\t";
        cout<<endl;
    }
};
class HoaDon;
class Date
{
private:
    int D;
    int M;
    int Y;
public:
    friend void NhapNgay();
    friend void XuatNgay();

    friend class HoaDon;
};
class HangHoa
{
private:
    string tenhang;
    string mahang;
    int soluong;
    int gia;
public:
     void NhapHang()
    {
        fflush(stdin);
        cout<< "Nhap ten mat hang:"; getline(cin,tenhang);
        fflush(stdin);
        cout<< "Nhap ma mat hang:";  getline(cin,mahang);
        fflush(stdin);
        cout<< "Nhap so luong:"; cin>>soluong;
        cout<< "Nhap don gia:"; cin>>gia;

    }
     void XuatHang()
    {
        cout<< "Ten mat hang:"<<tenhang<< "\t";
        cout<< "Ma mat hang:"<<mahang<< "\t";
        cout<< "Sp luong mat hang:"<<soluong<< "\t";
        cout<< "Don gia mat hang:"<<gia;
        cout<<endl;

    }

    friend class HoaDon;

};
class HoaDon
{
   private:
       string mahoadon;
       string donvi;
       long sotien;
       string nguoithanhtoan;
       Date ngay;
       HangHoa *ds;
   public:
       void NhapNgay()
    {
        cout<< "Nhap ngay:"; cin>>ngay.D;
        cout<< "Nhap thang:"; cin>>ngay.M;
        cout<< "Nhap Nam:"; cin>>ngay.Y;
    }
    void XuatNgay()
    {
        cout<< "Ngay Xuat:"<<ngay.D<<"/"<<ngay.M<<"/"<<ngay.Y<<endl;
    }

    int n;
    void NhapHD()
    {
        fflush(stdin);
        cout<< "Nhap Ma Hoa Don:"; getline(cin,mahoadon);
        fflush(stdin);
        cout<< "Nhap Don Vi:"; getline(cin,donvi);
        fflush(stdin);
        cout<< "Nhap nguoi thanh toan:"; getline(cin,nguoithanhtoan);
        fflush(stdin);
        NhapNgay();

        cout<< "Nhap so luong hang hoa da mua:"; cin>>n;
        cout<<endl;
        ds=new HangHoa[n];
        for(int i=0;i<n;i++)
        {
            cout<< "\nNhap thong tin mat hang thu:"<<i+1<<endl;
            ds[i].NhapHang();
        }

    }
    void XuatHD()
    {
        cout<< "\n";
        cout<< "Ma Hoa Don:"<<mahoadon<<"\t";
        cout<< "Don vi:"<<donvi<< "\t";
        cout<< "Nguoi thanh toan:"<<nguoithanhtoan<< "\t";
        XuatNgay();
        for(int i=0;i<n;i++)
        {
            ds[i].XuatHang();
        }
        long s=0;
        for(int i=0;i<n;i++)
        {
           s+=ds[i].gia*ds[i].soluong;
        }
        cout<< "Tong gia:"<<s;


    }

};
int main()
{
    HoaDon a;
    a.NhapHD();
    a.XuatHD();
   /* SapXep a;
    a.Nhap();
    a.SapXep1();
    a.Xuat(); */
    /*int n;
    cout<< "Nhap so luong doanh nghiep:"; cin>>n;
    DN a[n];
    for(int i=0;i<n;i++)
    {
        cout<< "Nhap doanh nghiep thu"<<i+1<<endl;
        a[i].NhapDn();
    }
    for(int i=0;i<n;i++)
    {
        a[i].XuatDn();
    } */
    return 0;
}
