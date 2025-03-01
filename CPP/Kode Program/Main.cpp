#include <iostream>
#include <cstring>
#include "Baju.cpp"

using namespace std;

int main()
{
    int n;
    cout << "Jumlah produk yang akan dimasukkan: " << endl;
    cin >> n;
    
    // Array statis untuk menyimpan produk
    Baju Matahari[n + 5]; // 5 untuk inisialisasi awal
    
    // Inisialisasi 5 objek awal
    Matahari[0] = Baju("B001", "Kaos_Anjing", "Pakaian_Hewan", 50000, "Kaos", "Wol", "Merah", "Anjing", "M", "PawPrint");
    Matahari[1] = Baju("B002", "Jaket_Kucing", "Pakaian_Hewan", 75000, "Jaket", "Denim", "Biru", "Kucing", "S", "MeowBrand");
    Matahari[2] = Baju("B003", "Sweater_Anjing", "Pakaian_Hewan", 90000, "Sweater", "Katun", "Abu-Abu", "Anjing", "L", "FurryWear");
    Matahari[3] = Baju("B004", "Rompi_Kucing", "Pakaian_Hewan", 60000, "Rompi", "Poliester", "Hitam", "Kucing", "M", "KittyStyle");
    Matahari[4] = Baju("B005", "Hoodie_Anjing", "Pakaian_Hewan", 85000, "Hoodie", "Fleece", "Coklat", "Anjing", "XL", "DoggieSwag");
    
    // Looping untuk input produk tambahan
    for (int i = 5; i < n + 5; i++)
    {
        string Id, NamaProduk, KategoriProduk, Jenis, Bahan, Warna, Untuk, Size, Merk;
        int HargaProduk;

        cin >> Id >> NamaProduk >> KategoriProduk >> HargaProduk >> Jenis >> Bahan >> Warna >> Untuk >> Size >> Merk;
        
        Matahari[i] = Baju(Id, NamaProduk, KategoriProduk, HargaProduk, Jenis, Bahan, Warna, Untuk, Size, Merk);
    }
    
    //Untuk menampung string terpanjang dari setiap atribut nya
    int Id_terpanjang = 2;              // "Id"
    int NamaProduk_terpanjang = 11;     // "Nama Produk"
    int KategoriProduk_terpanjang = 8;  // "Kategori"
    int Harga_terpanjang = 5;           // "Harga"
    int Jenis_terpanjang = 5;           // "Jenis"
    int Bahan_terpanjang = 5;           // "Bahan"
    int Warna_terpanjang = 5;           // "Warna"
    int Untuk_terpanjang = 5;           // "Untuk"
    int Size_terpanjang = 4;            // "Size"
    int Merk_terpanjang = 4;            // "Merk"

    // Looping untuk mengecek besar string setiap atributnya di tiap indeks nya
    for (int i = 0; i < n + 5; i++)
    {   
        // Pengecekan panjang maksimal setiap atribut
        if (Id_terpanjang < Matahari[i].getId().length())
        {
            Id_terpanjang = Matahari[i].getId().length();
        }

        if (NamaProduk_terpanjang < Matahari[i].getNamaProduk().length()) 
        {
            NamaProduk_terpanjang = Matahari[i].getNamaProduk().length();
        }

        if (KategoriProduk_terpanjang < Matahari[i].getKategoriProduk().length()) 
        {
            KategoriProduk_terpanjang = Matahari[i].getKategoriProduk().length();
        }

        if (Jenis_terpanjang < Matahari[i].getJenis().length()) 
        {
            Jenis_terpanjang = Matahari[i].getJenis().length();
        }

        if (Bahan_terpanjang < Matahari[i].getBahan().length()) 
        {
            Bahan_terpanjang = Matahari[i].getBahan().length();
        }

        if (Warna_terpanjang < Matahari[i].getWarna().length()) 
        {
            Warna_terpanjang = Matahari[i].getWarna().length();
        }

        if (Untuk_terpanjang < Matahari[i].getUntuk().length()) 
        {
            Untuk_terpanjang = Matahari[i].getUntuk().length();
        }

        if (Size_terpanjang < Matahari[i].getSize().length()) 
        {
            Size_terpanjang = Matahari[i].getSize().length();
        }

        if (Merk_terpanjang < Matahari[i].getMerk().length()) 
        {
            Merk_terpanjang = Matahari[i].getMerk().length();
        }

        // Pengecekan jumlah digit dalam HargaProduk
        if (Harga_terpanjang < to_string(Matahari[i].getHargaProduk()).length()) 
        {
            Harga_terpanjang = to_string(Matahari[i].getHargaProduk()).length();
        }
    }
    
    //Membuat border atas
    cout << "+";
    for(int i = 0; i < Id_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < NamaProduk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < KategoriProduk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Harga_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Jenis_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Bahan_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Warna_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Untuk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for (int i = 0; i < Size_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for (int i = 0; i < Merk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+" << endl;

    cout << "| ";
    cout << "Id";
    for(int i = 0; i < Id_terpanjang - 2; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Nama Produk";
    for(int i = 0; i < NamaProduk_terpanjang - 11; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Kategori";
    for(int i = 0; i < KategoriProduk_terpanjang - 8; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Harga";
    for(int i = 0; i < Harga_terpanjang - 5; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Jenis";
    for(int i = 0; i < Jenis_terpanjang - 5; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Bahan";
    for(int i = 0; i < Bahan_terpanjang - 5; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Warna";
    for(int i = 0; i < Warna_terpanjang - 5; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Untuk";
    for(int i = 0; i < Untuk_terpanjang - 5; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Size";
    for (int i = 0; i < Size_terpanjang - 4; i++)
    {
        cout << " ";
    }
    cout << " | ";
    cout << "Merk";
    for (int i = 0; i < Merk_terpanjang - 4; i++)
    {
        cout << " ";
    }
    cout << " |" << endl;

    cout << "+";
    for(int i = 0; i < Id_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < NamaProduk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < KategoriProduk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Harga_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Jenis_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Bahan_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Warna_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Untuk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for (int i = 0; i < Size_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for (int i = 0; i < Merk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+" << endl;

    //Isi
    for(int i = 0; i < n + 5; i++)
    {
        cout << "| ";
        cout << Matahari[i].getId();
        for(int j = 0; j < Id_terpanjang - Matahari[i].getId().length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getNamaProduk();
        for(int j = 0; j < NamaProduk_terpanjang - Matahari[i].getNamaProduk().length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getKategoriProduk();
        for(int j = 0; j < KategoriProduk_terpanjang - Matahari[i].getKategoriProduk().length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getHargaProduk();
        for(int j = 0; j < Harga_terpanjang - to_string(Matahari[i].getHargaProduk()).length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getJenis();
        for(int j = 0; j < Jenis_terpanjang - Matahari[i].getJenis().length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getBahan();
        for(int j = 0; j < Bahan_terpanjang - Matahari[i].getBahan().length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getWarna();
        for(int j = 0; j < Warna_terpanjang - Matahari[i].getWarna().length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getUntuk();
        for(int j = 0; j < Untuk_terpanjang - Matahari[i].getUntuk().length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getSize();
        for (int j = 0; j < Size_terpanjang - Matahari[i].getSize().length(); j++)
        {
            cout << " ";
        }
        cout << " | ";
        cout << Matahari[i].getMerk();
        for (int j = 0; j < Merk_terpanjang - Matahari[i].getMerk().length(); j++)
        {
            cout << " ";
        }
        cout << " |" << endl;
    }

    //Border penutup
    cout << "+";
    for(int i = 0; i < Id_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < NamaProduk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < KategoriProduk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Harga_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Jenis_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Bahan_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Warna_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for(int i = 0; i < Untuk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for (int i = 0; i < Size_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    for (int i = 0; i < Merk_terpanjang + 2; i++)
    {
        cout << "-";
    }
    cout << "+";
    
    return 0;
}