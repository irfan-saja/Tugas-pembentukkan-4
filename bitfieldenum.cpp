  
#include<iostream>
using namespace std;

//Enumerasi adalah suatu set Konstanta Integer yang  masing-masing memiliki nama dan 
//nilai berbdeda

//Bit field adalah member dalam suatu struktur data yang dideklarasikan dengan nilai
//bit tertentu berguna untuk menghemat penggunaan memory

enum tgl{bulan=12,hari=31,tahun=2014
};

struct date { 
    // d has value between 1 and 31, so 5 bits 
    // are sufficient 
    unsigned int d : 5; 
  
    // m has value between 1 and 12, so 4 bits 
    // are sufficient 
   	unsigned int m: 4;
  
    unsigned int y; 
}; 
  
int main() 
{ 
	
    struct date dt = { 31,12, 2014 }; 
    cout<<"Date is "<<dt.d<<"/"<<dt.m<<"/"<<dt.y;
    cout<<"\nDate is "<<hari<<"/"<<bulan<<"/"<<tahun;
    return 0; 
}
