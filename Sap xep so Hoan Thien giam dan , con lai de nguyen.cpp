#include <iostream>
#define MAX 50


using namespace std;
 
int NhapsoPTsudung ()
{
	int n ;
	do{
		cout << " Nhap so phan tu su dung : " ;
		cin >> n ;
	}while (n < 1 || n > MAX) ;
	return n ;
}

void  NhapMang(int a[MAX],int n)
{
	for (int i =0 ; i < n ; i ++)
		{
			cout << "a[" << i << "] = "; 
			cin >> a[i] ; 
		}
}
//So hoan thien la so co tong uoc so bang chinh so do
int SoHoanThien(int n)
{
	int tong = 0;
	for(int i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			tong += i;
		}
	}
	if(tong == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int SapXepSoHT_GiamDan(int a[], int n)
{
 for(int i = 0; i < n - 1; i++)
 	{
 		if(SoHoanThien (a[i]) == 1)
 		{
		 	for(int j = i + 1; j < n; j++)
			{
            	if(SoHoanThien (a[j]) == 1 && a[i] < a[j] )
				{
	                int tg = a[i];
	                a[i] = a[j];
	                a[j] = tg;        
            	}
		 	}
        
        }
    }
}

void XuatMang(int a [MAX],int n)
{
	cout << "Mang sau khi sap xep : " << endl ;
	for (int i = 0 ; i < n; i++)
	{
		cout << "a[" << i << "] = " << a[i] <<endl ;
	}	
}

int main (){
	int a[MAX], n ;
	n = NhapsoPTsudung() ;
	NhapMang(a,n);
	SapXepSoHT_GiamDan(a,n);
	XuatMang(a,n);
	return 0 ;
	
}

