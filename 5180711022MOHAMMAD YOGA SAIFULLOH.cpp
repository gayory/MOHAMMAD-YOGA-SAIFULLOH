#include <iostream>
using namespace std;

double input(string text){
    double nilai;
cout<<"Masukkan Nilai "<<text<<":";cin>>nilai;
return nilai;




}
void iff(double nilai, char huruf){

if(nilai>80){huruf='A';}
else if(nilai>60){huruf='B';}
else if(nilai>40){huruf='C';}
else if(nilai>20){huruf='D';}
else if(nilai>0){huruf='E';}

cout<<"\nAnda Dapat "<<huruf;
}
main(){
double uts,uas,tugas,absen,nilai;
char huruf;
uts  =input("UTS");
uas  =input("UAS");
tugas=input("TUGAS");
absen=input("ABSEN");
nilai=((uts*20)/100)+((uas*30)/100)+((tugas*35)/100)+((absen*15)/100);
cout<<"\nNilaimu : "<<nilai;
iff(nilai,huruf);



}


