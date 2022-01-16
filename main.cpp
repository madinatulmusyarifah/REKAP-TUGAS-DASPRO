#include <iostream>

using namespace std;

int main()
{
    /* Deklarasi awal  */
    float pi = 3.14;            /* Konstanta nilai pi*/
    float r;                    /* Jari2 lingkaran (cm) */
    float L;                    /* Luas lingkaran (cm) */

    /* ALGORITMA */
    cout << "Masukan Jari-jari lingkaran (r) :\n" << endl;  /* tampilan */
    cin>>r;
    L = pi*r*r;
    cout << "jadi luas jari-jari lingkaran" <<L<< "\n";
    return 0;
}
