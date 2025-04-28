#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    string nama;
    int tgl,bln,tl;

//deskripsi

for(char n = 0; n < 30; ++n){
    cout<<"\nAPAKAH ZODIAK KAMU?";
    cout<<"\n=====================";
    cout<<"\nNama \t: ";
    getline(cin, nama);
    cout<<"\nTanngal Lahir Anda (1-30) \t: ";
    cin>>tgl;
    cout<<"\nBulan Lahir Anda (1-20) \t: ";
    cin>>bln;
    cout<<"\nTahun Lahir Anda (4 digit) \t: ";
    cin>>tl;
    cout<<endl;

//rumus

    cout<<"Tanggal Lahir Anda "<<tgl<<"-"<<bln<<"-"<<tl<<" \n";

    if (tgl>=22 && bln ==12 || tgl<=19 && bln==1){
        cout<<"Zodiak Anda adalah Capricorn"<<endl;
        }
    else if (tgl>=20 && bln ==1 || tgl<=18 && bln==2){
        cout<<"Zodiak Anda adalah Aquarius"<<endl;
        }
    else if (tgl>=19 && bln ==2 || tgl<=20 && bln==3){
        cout<<"Zodiak Anda adalah Pisces"<<endl;
        }
    else if (tgl>=21 && bln ==3 || tgl<=19 && bln==4){
        cout<<"Zodiak Anda adalah Aries"<<endl;
        }
    else if (tgl>=20 && bln ==4 || tgl<=20 && bln==5){
        cout<<"Zodiak Anda adalah Taurus"<<endl;
        }
    else if (tgl>=21 && bln ==5 || tgl<=20 && bln==6){
        cout<<"Zodiak Anda adalah Gemini"<<endl;
        }
    else if (tgl>=21 && bln ==6 || tgl<=22 && bln==7){
        cout<<"Zodiak Anda adalah Cancer"<<endl;
        }
    else if (tgl>=23 && bln ==7 || tgl<=22 && bln==8){
        cout<<"Zodiak Anda adalah Leo"<<endl;
        }
    else if (tgl>=23 && bln ==8 || tgl<=22 && bln==9){
        cout<<"Zodiak Anda adalah Virgo"<<endl;
        }
    else if (tgl>=23 && bln ==9 || tgl<=22 && bln==10){
        cout<<"Zodiak Anda adalah Libra"<<endl;
        }
    else if (tgl>=23 && bln ==10 || tgl<=21 && bln==11){
        cout<<"Zodiak Anda adalah Scorpio"<<endl;
        }
    else if (tgl>=22 && bln ==11 || tgl<=21 && bln==12){
        cout<<"Zodiak Anda adalah Sagitarius"<<endl;
        }
    else{
        cout<<"Tolong Perhatikan Tanggal, Bulan , Atau Tahun Lahir anda."<<endl;
        }

    if (tl%400 == 0){
        cout << tl << " Merupakan Tahun Kabisat\n";
            } else if(tl%100 == 0){
        cout << tl << " Bukan Tahun Kabisat\n";
            } else if(tl%4 == 0){
        cout << tl << " Merupakan Tahun Kabisat\n";
            } else {
        cout << tl << " Bukan Tahun kabisat\n";
            }

}


    getch();
}
