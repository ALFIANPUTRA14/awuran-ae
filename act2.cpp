#include <iostream>
using namespace std;

// membuat fungsi fact untuk menghitung factorial dari suatu angka
int fact(int angka){
    int result = 1;
    // menggunakan for untuk perulangan angka agar menemukan angka angka faktorialnya 
    for(int i = 1; i <= angka; i++){
        result *= i;
    }
    return result;
}

/*membuat fungsi main untuk memanggil fungsi fact agar angka pada 
fungsi main yang sudah di deklarasikan dengan tipe data fact bisa dihitung factorialnya 
*/
int main(){
    //deklarasikan variabel yang akan dihitung dengan memanggil fungsi lain
    int result = fact(5) + fact(4);
    // cetak hasil
    cout <<  "The result is " << result << endl;
}