#include<iostream>
using namespace std;
int main()
{
    int nm, jml;
    string nama;
    int gapok, togaji, tunjangan, lembr;

    cout<<"==========================================================\n";
    cout<<"\t            DAFTAR GAJI KARYAWAN\n";
    cout<<"==========================================================\n";
    cout<<"\n";
    cout<<" Nomor Kepegawai       : ";cin>>nm;
    cout<<" Nama Pegawai          : ";cin>>nama;
    cout<<" Gaji Pegawai          : ";cin>>gapok;
    cout<<" Jumlah jam Lembur     : ";cin>>jml;
    cout<<"\n \n";

    tunjangan = gapok * 0.15;
    lembr = gapok * (jml * 0.03);
    togaji = gapok + tunjangan + lembr;

    cout<<"===========================================\n";
    cout<<"\t     DAFTAR PERINCIAN GAJI \n";
    cout<<" Gaji Pokok   : "<< gapok <<endl;
    cout<<" Tunjangan    : "<< tunjangan <<endl;
    cout<<" Uang Lembur  : "<< lembr <<endl;
    cout<<" Total Gaji   : "<< togaji <<endl;
    return 0;
}

