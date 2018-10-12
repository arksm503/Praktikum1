Menentukan Bilangan Ganjil atau Genap

 1.) int bilangan, hasil;
 ===================================================================
    tipe data dari bilangan, hasil adalah integer

 2.) cout<< "Menetukan Bilangan Ganjil atau Genap"<<endl;
 ===================================================================
        cout<< "Menetukan Bilangan Ganjil atau Genap"  : outputnya "Menetukan Bilangan Ganjil atau Genap"
        endl                                           : ganti baris/enter

 3.) cout<< "Input Bilangan : ";
     cin>>bilangan;
     hasil=bilangan%2;
 ===================================================================
        cout<< "Input Bilangan : "                      : outputnya "Input Bilangan : "
        cin>>bilangan;                                  : sebagai input untuk bilangan
        hasil=bilangan%2;                               : rumus, bilangan dibagi 2

 4.)  cout<< "Hasilnya Adalah : ";
        if (hasil==0)
            cout<< "Genap";
        else
            cout<< "Ganjil";

 =====================================================================
  bilangan dibagi 2 didapatkan hasil
    jika hasil bagi 0 maka genap
    selain itu maka ganjil


