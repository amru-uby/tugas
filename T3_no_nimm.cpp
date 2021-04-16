#include<iostream>
using namespace std;
int main()
{
    int gol, jam, hasil, hasjam, lembur;

    cout<<" Masukan Gelombang  : ";cin>>gol;
    cout<<" Masukan Jam Kerja  : ";cin>>jam;

    switch(gol){
    case 1:
        gol = 3000;
        break;
    case 2:
        gol = 3500;
        break;
    case 3:
        gol = 4000;
        break;
    case 4:
        gol = 5000;
        break;
    default:
        break;
    }

if(jam <= 40){
    hasil = gol * jam;
    cout<<" hasil gaji yang diterima :"<< hasil <<endl;
}else{
    hasjam = gol * 1.5;
    lembur = (jam - 40) * hasjam;
    hasil = gol * 40 + lembur;
    cout<<" Hasil yang diterima dengan lembur  :"<< hasil <<endl;
}
    return 0;
}
