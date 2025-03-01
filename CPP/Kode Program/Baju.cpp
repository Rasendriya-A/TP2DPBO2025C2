#include <iostream>
#include <string>
#include "Aksesoris.cpp"

using namespace std;

class Baju : public Aksesoris
{
    private:
        string Untuk;
        string Size;
        string Merk;

    public:
        // Konstruktor
        Baju() 
        {

        }

        // Constructor dengan Parameter
        Baju(string id, string nama, string kategori, int harga, string jenis, string bahan, string warna, string untuk, string size, string merk)
        {
            setId(id);
            setNamaProduk(nama);
            setKategoriProduk(kategori);
            setHargaProduk(harga);
            setJenis(jenis);
            setBahan(bahan);
            setWarna(warna);
            setUntuk(untuk);
            setSize(size);
            setMerk(merk);
        }

        // Setter dan Getter Untuk
        void setUntuk(string untuk)
        {
            Untuk = untuk;
        }

        string getUntuk()
        {
            return Untuk;
        }

        // Setter dan Getter Size
        void setSize(string size)
        {
            Size = size;
        }

        string getSize()
        {
            return Size;
        }

        // Setter dan Getter Merk
        void setMerk(string merk)
        {
            Merk = merk;
        }

        string getMerk()
        {
            return Merk;
        }

        // Destruktor
        ~Baju() 
        {
            
        }
};
