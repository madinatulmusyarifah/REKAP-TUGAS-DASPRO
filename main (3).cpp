#include <iostream>

using namespace std;

int main()
{
    //if dan else
    int i;

    cout<< "masukkan angka genap :";cin>>i;
    if(i%2==0){
        cout<<i<< "adalah angka genap";
    }
    else{
        cout<<i<< "adalah angka ganjil";
    }
    cout<< "\n selesai \n"<<endl;
    return 0;
}
