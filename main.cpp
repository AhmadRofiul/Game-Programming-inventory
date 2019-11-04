#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;


int main()
{
    vector <string> kumpulan_item{"Pedang","Pistol","Tameng",};

    vector <string> item;
    vector <string>::iterator index;
    int pilihan;
    char lanjut = 'y';


    while (lanjut=='y'){
        system("CLS");
        cout << "=== Inventory System ===" << endl ;
        cout << "1. Tampilkan Inventory " << endl ;
        cout << "2. Hapus Item" << endl ;
        cout << "3. Tambah Item" << endl ;
        cout << "Masukkan Pilihan Anda : "; cin >> pilihan ;

        if(pilihan==1){
            if(item.empty()){
                cout << "Inventory masih Kosong" << endl ;
            }else{
                for(index = item.begin(); index!= item.end(); index++){
                    cout << *index << endl ;
                }
            }

        }else if(pilihan==2){
            if(item.empty()){
                cout << "Inventory masih Kosong" << endl ;
            }else{
                for(index = item.begin(); index!= item.end(); index++){
                    cout << *index << endl ;
                }

                cout << "Masukkan Item yang ingin dihapus : "; cin >> pilihan ;
                item.erase(item.begin()+pilihan-1);
            }

        }else if(pilihan==3){
            string input;
            cout << "Masukkan Inputan : "; cin >> input ;
            item.push_back(input);
        }



        cout << "\nMasih ingin menggunakan menu inventory ? (y/n) "; cin >> lanjut ;


    }







    return 0;
}
