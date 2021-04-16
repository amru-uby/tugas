#include<iostream>
using namespace std;
int main()
{
    //variabel
    string nm_007[20], addr_007[30], prodi_007[30], asals_007[30];
    char ulangi_007 = 'y';
    int a_007;

    //header program
    cout<< "--------------------------------------------------------------------"<< endl;
    cout<< "\t\t\t SELAMAT DATANG \t\t\t"<< endl;
    cout<< "\t MAHASISWA BARU UNIVERSITAS BOYOLALI \t"<< endl;
    cout<< "---------------------------------------------------------------------"<< endl;
    cout<< endl;

    for(int i_007=0; i_007<5; i_007++){
            cout<<endl;
            cout<< " Nama Mahasiswa           : ";cin>>nm_007[i_007];
            cout<< " Alamat mahasiswa         : ";cin>>addr_007[i_007];
            cout<< " Asal Sekolah Mahasiswa   : ";cin>>asals_007[i_007];
            cout<< " Program Study            : ";cin>>prodi_007[i_007];
            cout<< "---------------------------\n";
            cout<<endl;
    }

        while(ulangi_007 == 'y'){
            cout<<endl;
            cout<<" Data yang ingin ditampilkan (0/1/2/3/4) = ";cin>>a_007;
            cout<<"\n Nama Mahasiswa     :"<<nm_007[a_007];
            cout<<"\n Alamat Mahasiswa   :"<<addr_007[a_007];
            cout<<"\n Asal Sekolah       :"<<asals_007[a_007];
            cout<<"\n Program Studi      :"<<prodi_007[a_007];
            cout<<endl;
            cout<<"apakah mau menampilkan data yang lain? (y/t)";
            cout<< " jawab: ";cin>>ulangi_007;

        }

        cout<<endl;
        cout<<"================================*******=========================\n";
        cout<<" \t  \t \t      perulangan selesai ! \n";
        cout<<"================================*******=========================\n";
        cout<<" \t \t \t \t \t \t SELESAI \n\n";


    return 0;
}

