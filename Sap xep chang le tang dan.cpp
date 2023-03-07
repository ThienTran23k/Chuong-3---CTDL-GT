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


int SX_ChanLeTangDan(int a[], int n)
{
 for(int i = 0; i < n - 1; i++)
 	{
 		if((a[i]) > 0)
 		{
		 	for(int j = i + 1; j < n; j++)
			{
            	if(((a[i] % 2 == 0 && a[j] % 2 == 0)  ||  (a[i] % 2 != 0 && a[j] % 2 != 0)) && a[i] > a[j])
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
	SX_ChanLeTangDan(a,n);
	XuatMang(a,n);
	return 0 ;
	
}

