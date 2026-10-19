#include <iostream>
using namespace std;

/*int sumNumber (int num1, int num2){
    return num1 + num2;
}

int sumNumber (int num1, int num2, int num3){
    return num1 + num2 + num3;
}

int main(){
    cout << sumNumber(4,5) << endl;
    cout << sumNumber(4,7,6) << endl;

}
*/
void printDate(int day, int month, int year){
string monthName[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
   cout << "The date is " << day << " " << monthName [month-1] << " " << year << endl;

}

void printDate(int day, string month, int year){
    cout << "The date is " << day << " " << month << " " << year;
}

int main(){
    printDate(5, 12, 2026) ;
    printDate(7, "July", 2025);
}