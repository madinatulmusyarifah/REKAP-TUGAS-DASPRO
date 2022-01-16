#include <iostream>

using namespace std;

int main()
{
    //if bertingkat

    int i;

    cout<< "Kode barang yang dipilih [1/2/3/4]:";cin>>i;

    if(i==1){
        cout<< "Nama barang : permen jahe"<<endl;
        cout<< "harga : Rp.500"<<endl;
    }
    else if(i==2){
        cout<< "Nama Barang : teh Gelas"<<endl;
        cout<< "Harga Barang : Rp.1000"<<endl;
    }
    else if(i==3){
        cout<< "Nama Barang : wafer"<<endl;
        cout<< "harga : Rp.2000"<<endl;
    }
    else{
        cout<< "Nama Barang : susu"<<endl;
        cout<< "harga : Rp.5000"<<endl;
    }
    cout<< "\n selesai \n"<<endl;
    return 0;
}
