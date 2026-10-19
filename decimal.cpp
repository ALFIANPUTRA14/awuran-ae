#include <iostream>
#include <string>

using namespace std;

string desimalKeBiner(int desimal){
    if (desimal == 0){
        return "0";
    }

string biner = "";
while (desimal > 0){
    int sisa = desimal % 2;
    biner = to_string(sisa) + biner;
    desimal = desimal / 2;
    }
return biner;
}

int binerKeDesimal(string biner){
    int desimal = 0;
    int nilaiPosisi = 1;

    for(int i = biner.length() - 1; i >= 0; i--){
        if (biner[i] == '1'){
            desimal = desimal + nilaiPosisi;
        }
        nilaiPosisi = nilaiPosisi * 2;
    }
    return desimal;
}


int main(){
    int ulangi = 1;

    while (ulangi == 1){
    cout << "[1] Decimal to binary" << endl;
    cout << "[2] Binary to decimal" << endl;

    int pilihan;
    cout << "Input your option: ";
    cin >> pilihan;
    
    if (pilihan == 1){
    int desimal;
    cout << "Input your decimal: ";
    cin >> desimal;

    cout << "Your binary is: " << desimalKeBiner(desimal) << endl;
    }

    if(pilihan == 2){
    string biner;
    cout << "Input your binary: ";
    cin >> biner;

    cout << "Your decimal is: " << binerKeDesimal(biner) << endl;
    }

    cout << "Repeat? [0:No / 1:Yes] : ";
    cin >> ulangi;
    cout << endl;
}

cout << "Program end" << endl;

return 0;
}




