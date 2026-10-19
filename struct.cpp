#include <iostream>
#include <string>
using namespace std;
/*
int main(){
struct student{
    int niu;
    string fullName;
    int year;
    char gender;
}


agus;
agus.niu = 12345;
agus.fullName = "agusss";
agus.year = 2026;
agus.gender = 'M';

cout << agus.fullName;
}
*/
int main(){
    struct student{
    int niu;
    string fullName;
    int year;
    char gender;
};

student daftar_mahasiswa[3];
    daftar_mahasiswa[0].niu = 1111;
    daftar_mahasiswa[0].fullName = "Andi Kobra";
    daftar_mahasiswa[0].year = 2026;
    daftar_mahasiswa[0].gender = 'M';

    daftar_mahasiswa[1].niu = 2222;
    daftar_mahasiswa[1].fullName = "Jhon Cena";
    daftar_mahasiswa[1].year = 2026;
    daftar_mahasiswa[1].gender = 'M';

    daftar_mahasiswa[2].niu = 3333;
    daftar_mahasiswa[2].fullName = "Siti Situ";
    daftar_mahasiswa[2].year = 2026;
    daftar_mahasiswa[2].gender = 'F';

    cout << "============================================\n";
    cout << "NIU\t| Nama Lengkap| Angkatan| Gender\n";
    cout << "============================================\n";

    for (int i = 0; i < 3; i++){
        cout << daftar_mahasiswa[i].niu << "\t   "
             << daftar_mahasiswa[i].fullName << "\t "
             << daftar_mahasiswa[i].year << "\t     "
             << daftar_mahasiswa[i].gender << "\n" ;
    }

    cout <<"===================================\n";
}
