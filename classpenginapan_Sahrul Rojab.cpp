#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

class penginapan 
{
	public: 
	char kode[5], *nama[5];
	int harga[5], lama[5]; 
	long int bayar[5];
};
main()
{
	char lagi;
	float total;
	int i, j ;
	penginapan hotel;
	awal:
cout<<" PENGINAPAN HOTEL MAJU LANCAR"<<endl;
cout<<"==================================================="<<endl;
cout<<"Masukan jumlah data=";cin>>j;
for(i=1;i<=j;i++)
{
	cout<<"data penyewa ke- :"<<i<<endl;
	cout<<"masukan kode kamar :";cin>>hotel.kode[i];
	if(hotel.kode[i]=='A'||hotel.kode[i]=='a')
	{hotel.nama[i]="Angel";
	hotel.harga[i]=700000;
	}
	else if (hotel.kode[i]=='B'||hotel.kode[i]=='b')
	{hotel.nama[i]="Bunga";
	hotel.harga[i]=555000;
	}
	else
	{hotel.nama[i]="Cantik";
	hotel.harga[i]=450000;
	}		
	cout<<"Nama Kamar\t\t   : "<<hotel.nama[i]<<endl;
	cout<<"Harga Kamar\t\t   : "<<hotel.harga[i]<<endl;
	cout<<"Lama Sewa Kamar\t\t   : ";cin>>hotel.lama[i];
	hotel.bayar[i]=hotel.lama[i]*hotel.harga[i];
	cout<<"Total Bayar\t\t   : "<<hotel.bayar[i]<<endl;
	cout<<endl;	
	}
	cout<<endl<<endl;
	cout<<"PENGINAPAN HOTEL MAJU LANCAR"<<endl;
	cout<<"============================"<<endl;
	cout<<"no.kode nama harga lama biaya"<<endl;
	cout<<"kamar kamar sewa"<<endl;
	cout<<"============================="<<endl;
	for(i=1;i<=j;i++)
	{
	cout<<setiosflags(ios::left)<<setw(5)<<i;
	cout<<setiosflags(ios::left)<<setw(10)<<hotel.kode[i];
	cout<<setiosflags(ios::left)<<setw(10)<<hotel.nama[i];
	cout<<setiosflags(ios::right)<<setprecision(8)<<setw(12)<<hotel.harga[i];
	cout<<setiosflags(ios::right)<<setprecision(2)<<setw(10)<<hotel.lama[i];
	cout<<setiosflags(ios::right)<<setprecision(8)<<setw(10)<<hotel.bayar[i]<<endl;
	total=total+hotel.bayar[i];
	}
	cout<<"============================="<<endl;
	
	cout<<"\n\t\t\t\t\tTotal Biaya = Rp."<<setprecision(10)<<total<<endl<<endl;
	cout<<"Mau Isi Data Lagi?[Y/T]";cin>>lagi;
	if(lagi=='Y'||lagi=='y')
	goto awal;
	else
	goto akhir;
	akhir:
	getch();
	}

