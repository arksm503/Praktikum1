 #include <iostream>
using namespace std;

int main()
{

    int bilangan, hasil;
        cout<< "Menetukan Bilangan Ganjil atau Genap"<<endl;
        cout<< "Input Bilangan : ";
        cin>>bilangan;
        hasil=bilangan%2;
        cout<< "Hasilnya Adalah : ";
            if (hasil==0)
                cout<< "Genap";
            else
                cout<< "Ganjil";


return 0;

}
