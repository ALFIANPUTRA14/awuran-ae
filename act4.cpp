#include <iostream>
using namespace std;

/*Buat fungsi int fact agar nantinya bisa dipanggil di fungsi main untuk mengeksekusi variabel angka yang ada di fungsi main*/
int fact(int number){
    //syarat number harus lebih dari 0
    if (number > 0){
    /*return digunakan untuk mengirim nilai agar kembali ke pamanggil dan di cek apakah masih > 0, 
    jika masih maka nilai akan tetap dieksekusi
    */
        return number * fact(number-1);
    }
    else{
        /*karena menggunakan if maka return 1 digunakan agar ketika program 
        sudah selesai eksekusi maka sistem langsung menghentikan proses tersebut
        */
        return 1;
    }
}
// membuat fungsi int main untuk menjadi fungsi pokok yang mengeksekusi nilai
int main(){
    //membuat variabel yang akan dieksekusi dan dideklarasikan dengan int 
    int result = fact(5) + fact(4);
    //menampilkan hasil eksekusi 
    cout << "The result is " << result << endl;
}