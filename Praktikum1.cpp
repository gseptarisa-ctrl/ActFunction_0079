#include <iostream>
using namespace std;

//Deklarasi Global
    float p, l;

//Implementasi Prosedur & Fungsi
void input (){
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar : ";
    cin >> l;
}

float LuasPersegi(float x, float y){
    return x * y;
}

void Output(){
    cout << "Hasilnya = " << LuasPersegi(p, l);
}

//Program Utama
int main()
{//start
    input();
    Output();
}//selesai