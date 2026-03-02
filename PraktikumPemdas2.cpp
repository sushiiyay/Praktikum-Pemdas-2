//library
#include <iostream>
using namespace std;

//deklarasi variabel global
int  r;

//implementaasi fungsi dan prosedur
void input(){
    cout << "masukkan r :";
    cin >> r;
}
float luaslingkaran(int b){
    return phi*b*b;
}
//prosedur luas lingkaran
void output (){
    cout <<"Hasilnya : " << luaslingkaran (phi,r) << endl;
}