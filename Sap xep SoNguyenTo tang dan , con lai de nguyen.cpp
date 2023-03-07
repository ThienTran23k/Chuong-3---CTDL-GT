#include <iostream>
#define MAX 50
#include <math.h>

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

int KTraSoNT(int n)
{
	if(n < 2)
	{
		return 0;
	}
	
	else if(n > 2)
	{
		if(n % 2 == 0)
		{
			return 0;
		}
		for(int i = 3; i <= sqrt((float)n); i+= 2)
		{
			if(n % i == 0)
			{
			return 0;
			}
		}
	}
	return 1;
}

int SapXepSoNT_TangDan(int a[], int n)
{
 for(int i = 0; i < n - 1; i++)
 	{
 		if(KTraSoNT (a[i]) == 1)
 		{
		 	for(int j = i + 1; j < n; j++)
			{
            	if(KTraSoNT (a[j]) == 1 && a[i] > a[j] )
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
	SapXepSoNT_TangDan(a,n);
	XuatMang(a,n);
	return 0 ;
	
}

