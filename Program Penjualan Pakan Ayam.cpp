#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;

void Menu(){
    cout<<"===================================================="<<endl;  
    cout<<"\tProgram Pembelian Pakan Ternah"<<endl;  
    cout<<"===================================================="<<endl;  
    cout<<endl;
    cout<<"Menu Pilihan Pakan yang Tersedia"<<endl;
    cout<<"----------------------------------------------------"<<endl;  
    cout<<"\t1. Pakan Starter Ayam Broiler"<<endl; 
    cout<<"\t2. Pakan Finisher Ayam Broiler"<<endl; 
    cout<<"\t3. Pakan Komplit Ayam Petelur"<<endl; 
    cout<<"\t4. Pakan Konsentrat Ayam Petelur"<<endl; 
    cout<<"----------------------------------------------------"<<endl;
}

class PengirimPesan{
    protected:
        string teks;
    public:
        PengirimPesan(string teks){
            this->teks = teks;
        }
    virtual char SetPengirimPesan() = 0;
};

class KirimPesan : public PengirimPesan{
    private:
        string cttn;
    public:
        KirimPesan (string cttn, string teks) :PengirimPesan(teks){
            this->cttn = cttn;
            this->teks = teks;
        }
        char SetPengirimPesan(){
            cout << "Catatan Penjual       : "<<cttn<<endl;
            cout << "Pesan                 : "<<teks;
            return 0;
        }

};

int end(){
	system("exit");
}


int main()
{
    int pkn,nominal,harga, bayar;
 
    long uang,sisa;
    char lagi,psnLG;
    string cttn;
    
    atas :
        Menu();
    do
    {
        cout<<"Pilih Jenis Pakan [1-4]        : ";cin>>pkn;

        if(pkn>4)
            cout<<"Maaf Pakan yang Tersedia Hanya di List"<<endl;
            cout<<"----------------------------------------------------"<<endl;
    }

    while(pkn>4);
    fflush(stdin);
        cout<<"Masukan Catatan Penjual        : "; getline(cin, cttn);
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Pilih Jumlah yang dibeli"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"\t1. 1 Sak"<<endl; 
        cout<<"\t2. 2 Sak"<<endl; 
        cout<<"\t3. 3 Sak"<<endl; 
        cout<<"\t4. 4 Sak"<<endl; 
        cout<<"\t5. 5 Sak"<<endl; 
        cout<<"----------------------------------------------------"<<endl;
        
    do
    {
        cout<<"Pilih Berapa Sak yang akan dibeli [1-5]  : ";cin>>nominal;

        if(nominal>5)
            cout<<"Maaf Nominal Terlalu Banyak!!\n";
    }

    while(nominal>5);
        cout<<"----------------------------------------------------"<<endl;
    {
        switch(pkn)
        {
            case 1:
            cout<<"Pakan yang anda pilih adalah		: Pakan Starter Ayam Broiler\n";break;
            case 2:
            cout<<"Pakan yang anda pilih adalah		: Pakan Finisher Ayam Broiler\n";break;
            case 3:
            cout<<"Pakan yang anda pilih adalah		: Pakan Komplit Ayam Petelur\n";break;
            case 4:
            cout<<"Pakan yang anda pilih adalah		: Pakan Konsentrat Ayam Petelur\n";break;
        }
    } 
        cout<<"Catatan untuk penjual			: "<<cttn<<endl;
    {

    switch(nominal)
    {
        case 1:
        harga=297500;
        cout<<"Harga 1 Sak			: Rp. 297.500\n";break;
        case 2:
        harga=595000;
        cout<<"Harga 2 Sak			: Rp. 595.000\n";break;
        case 3:
        harga=892500;
        cout<<"Harga 3 Sak			: Rp. 892.500\n";break;
        case 4:
        harga=1190000;
        cout<<"Harga 4 Sak			: Rp. 1.190.000\n";break;
        case 5:
        harga=1487500;
        cout<<"Harga 5 Sak			: Rp. 1.487.500\n\n";
        }
    }
        cout<<"Apakah Anda Akan Melakukan Pembayaran[Y/T]    : ";cin>>lagi;
      
    if(lagi=='T'||lagi=='t'){
    	end();
	}
	else if(lagi=='y' || lagi=='Y')

        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        bayar=harga+2000;
        cout<<"Harga Pakan           : Rp. "<<harga<<endl;
        cout<<"Harga Pakan + admin   : Rp. "<<bayar<<endl;
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

    do
    {
        cout<<"Total Bayar           : Rp. ";cin>>uang;
        if(uang<bayar)
            cout<<"Maaf uang anda kurang!!\n";
    }

    while(uang<bayar);
        sisa=uang-bayar;
        cout<<"kembalian             : Rp. "<<sisa<<"\n";
        PengirimPesan *pesan = new KirimPesan(cttn,"Terima kasih telah membeli pakan");
        cout<<pesan->SetPengirimPesan()<<endl;
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;  
        cout<<"Transaksi lagi?[Y/T]        : ";cin>>psnLG;
         
        if(psnLG=='y'||psnLG=='Y'){
        	goto atas;
		}
		else if(psnLG=='t' || psnLG=='T'){
			goto bawah;
		}else{
			cout<<"Salah!!"<<endl;
		}
		bawah:
    
        getch();
        return 0;
		}
	
