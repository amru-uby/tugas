#include<iostream>
using namespace std;
int main()
{
    int gol_20010007, jam_20010007, hasil_20010007, upahjam_20010007, upahlem_20010007;

    cout<<" Masukan Gelombang Ke : ";cin>>gol_20010007;
    cout<<" Masukan Jam Kerja    : ";cin>>jam_20010007;
    cout<<"\n";
    cout<<"==============================================\n";

    switch(gol_20010007){
    case 1:
        gol_20010007 = 3000;
        break;
    case 2:
        gol_20010007 = 3500;
        break;
    case 3:
        gol_20010007 = 4000;
        break;
    case 4:
        gol_20010007 = 5000;
        break;
    default:
        break;
    }

if(jam_20010007 <= 40){
    hasil_20010007 = gol_20010007 * jam_20010007;
    cout<<" Upah yang diterima tanpa lembur :"<< hasil_20010007 <<endl;
}else{
    upahjam_20010007 = gol_20010007 * 1.5;
    upahlem_20010007 = (jam_20010007 - 40) * upahlem_20010007;
    hasil_20010007 = (gol_20010007 * jam_20010007) + upahjam_20010007;
    cout<<" Satu setengah Upah biasa :"<< upahjam_20010007 <<endl;
    cout<<" Upah lembur perjam * 1.5 uapah biasa: "<< upahlem_20010007 <<endl;
    cout<<" Upah yang diterima dengan lembur :"<< hasil_20010007 <<endl;
}
    return 0;
}
