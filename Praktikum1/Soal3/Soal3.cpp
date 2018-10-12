#include <iostream>
using namespace std;

int main()
{
    int a,b;
        cout<< "Mencari Bilangan Terbesar dari Dua Bilangan yang Diinputkan"<<endl;
        cout<< "Input Bilangan A : ";
        cin>>a;
        cout<< "Input Bilangan B : ";
        cin>>b;

        cout<< "Hasilnya Adalah : ";
            if(a<b){
                    cout<<"B Terbesar";
            }else if(a>b){
                    cout<<"A Terbesar";
            }else
            cout<<"Tidak Ada";

return 0;
}
