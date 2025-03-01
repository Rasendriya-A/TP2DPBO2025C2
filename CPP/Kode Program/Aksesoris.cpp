#include <iostream>
#include <string>
#include "PetShop.cpp"

using namespace std;

class Aksesoris : public PetShop
{
    private:
       string Jenis;
       string Bahan;
       string Warna;

    public:
        // Konstruktor
        Aksesoris() 
        {

        }

        // Setter dan Getter Jenis
        void setJenis(string jenis)
        {
            Jenis = jenis;
        }

        string getJenis()
        {
            return Jenis;
        }

        // Setter dan Getter Bahan
        void setBahan(string bahan)
        {
            Bahan = bahan;
        }

        string getBahan()
        {
            return Bahan;
        }

        // Setter dan Getter Warna
        void setWarna(string warna)
        {
            Warna = warna;
        }

        string getWarna()
        {
            return Warna;
        }

        // Destruktor
        ~Aksesoris()
        {
            
        }
};
