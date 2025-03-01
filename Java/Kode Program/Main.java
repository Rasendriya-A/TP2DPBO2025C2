import java.lang.Math;
import java.util.Scanner;

public class Main 
{
    public static void main(String args[]) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Jumlah produk yang akan dimasukkan: ");
        int n = scanner.nextInt();
        scanner.nextLine();

        Baju[] matahari = new Baju[n + 5];
        matahari[0] = new Baju("B001", "Kaos_Anjing", "Pakaian_Hewan", 50000, "Kaos", "Wol", "Merah", "Anjing", "M", "PawPrint");
        matahari[1] = new Baju("B002", "Jaket_Kucing", "Pakaian_Hewan", 75000, "Jaket", "Denim", "Biru", "Kucing", "S", "MeowBrand");
        matahari[2] = new Baju("B003", "Sweater_Anjing", "Pakaian_Hewan", 90000, "Sweater", "Katun", "Abu-Abu", "Anjing", "L", "FurryWear");
        matahari[3] = new Baju("B004", "Rompi_Kucing", "Pakaian_Hewan", 60000, "Rompi", "Poliester", "Hitam", "Kucing", "M", "KittyStyle");
        matahari[4] = new Baju("B005", "Hoodie_Anjing", "Pakaian_Hewan", 85000, "Hoodie", "Fleece", "Coklat", "Anjing", "XL", "DoggieSwag");

        for (int i = 5; i < n + 5; i++) 
        {
            String id = scanner.next();
            String nama = scanner.next();
            String kategori = scanner.next();
            int harga = scanner.nextInt();
            String jenis = scanner.next();
            String bahan = scanner.next();
            String warna = scanner.next();
            String untuk = scanner.next();
            String size = scanner.next();
            String merk = scanner.next();
            
            matahari[i] = new Baju(id, nama, kategori, harga, jenis, bahan, warna, untuk, size, merk);
        }
        scanner.close();
        
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
            if (Id_terpanjang < matahari[i].getId().length())
            {
                Id_terpanjang = matahari[i].getId().length();
            }

            if (NamaProduk_terpanjang < matahari[i].getNamaProduk().length()) 
            {
                NamaProduk_terpanjang = matahari[i].getNamaProduk().length();
            }

            if (KategoriProduk_terpanjang < matahari[i].getKategoriProduk().length()) 
            {
                KategoriProduk_terpanjang = matahari[i].getKategoriProduk().length();
            }

            if (Jenis_terpanjang < matahari[i].getJenis().length()) 
            {
                Jenis_terpanjang = matahari[i].getJenis().length();
            }

            if (Bahan_terpanjang < matahari[i].getBahan().length()) 
            {
                Bahan_terpanjang = matahari[i].getBahan().length();
            }

            if (Warna_terpanjang < matahari[i].getWarna().length()) 
            {
                Warna_terpanjang = matahari[i].getWarna().length();
            }

            if (Untuk_terpanjang < matahari[i].getUntuk().length()) 
            {
                Untuk_terpanjang = matahari[i].getUntuk().length();
            }

            if (Size_terpanjang < matahari[i].getSize().length()) 
            {
                Size_terpanjang = matahari[i].getSize().length();
            }

            if (Merk_terpanjang < matahari[i].getMerk().length()) 
            {
                Merk_terpanjang = matahari[i].getMerk().length();
            }

            // Ambil harga produk
            int harga = matahari[i].getHargaProduk();

            // Hitung jumlah digit harga
            int digit_harga;
            if (harga == 0) 
            {
                digit_harga = 1;
            } 
            else 
            {
                digit_harga = (int) (Math.log10(harga) + 1);
            }

            // Perbarui nilai harga terpanjang jika lebih besar
            Harga_terpanjang = Math.max(Harga_terpanjang, digit_harga);
        }

        // Membuat border atas
        System.out.print("+");
        System.out.print("-".repeat(Id_terpanjang + 2) + "+");
        System.out.print("-".repeat(NamaProduk_terpanjang + 2) + "+");
        System.out.print("-".repeat(KategoriProduk_terpanjang + 2) + "+");
        System.out.print("-".repeat(Harga_terpanjang + 2) + "+");
        System.out.print("-".repeat(Jenis_terpanjang + 2) + "+");
        System.out.print("-".repeat(Bahan_terpanjang + 2) + "+");
        System.out.print("-".repeat(Warna_terpanjang + 2) + "+");
        System.out.print("-".repeat(Untuk_terpanjang + 2) + "+");
        System.out.print("-".repeat(Size_terpanjang + 2) + "+");
        System.out.println("-".repeat(Merk_terpanjang + 2) + "+");

        // Header tabel
        System.out.printf("| %-"+ Id_terpanjang +"s | %-"+ NamaProduk_terpanjang +"s | %-"+ KategoriProduk_terpanjang +"s | %-"+ Harga_terpanjang +"s | %-"+ Jenis_terpanjang +"s | %-"+ Bahan_terpanjang +"s | %-"+ Warna_terpanjang +"s | %-"+ Untuk_terpanjang +"s | %-"+ Size_terpanjang +"s | %-"+ Merk_terpanjang +"s |\n",
                        "Id", "Nama Produk", "Kategori", "Harga", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk");

        // Membuat border tengah
        System.out.print("+");
        System.out.print("-".repeat(Id_terpanjang + 2) + "+");
        System.out.print("-".repeat(NamaProduk_terpanjang + 2) + "+");
        System.out.print("-".repeat(KategoriProduk_terpanjang + 2) + "+");
        System.out.print("-".repeat(Harga_terpanjang + 2) + "+");
        System.out.print("-".repeat(Jenis_terpanjang + 2) + "+");
        System.out.print("-".repeat(Bahan_terpanjang + 2) + "+");
        System.out.print("-".repeat(Warna_terpanjang + 2) + "+");
        System.out.print("-".repeat(Untuk_terpanjang + 2) + "+");
        System.out.print("-".repeat(Size_terpanjang + 2) + "+");
        System.out.println("-".repeat(Merk_terpanjang + 2) + "+");

        // Isi tabel
        for (int i = 0; i < n + 5; i++) 
        {
            System.out.printf("| %-"+ Id_terpanjang +"s | %-"+ NamaProduk_terpanjang +"s | %-"+ KategoriProduk_terpanjang +"s | %-"+ Harga_terpanjang +"d | %-"+ Jenis_terpanjang +"s | %-"+ Bahan_terpanjang +"s | %-"+ Warna_terpanjang +"s | %-"+ Untuk_terpanjang +"s | %-"+ Size_terpanjang +"s | %-"+ Merk_terpanjang +"s |\n",
                            matahari[i].getId(), matahari[i].getNamaProduk(), matahari[i].getKategoriProduk(), matahari[i].getHargaProduk(),
                            matahari[i].getJenis(), matahari[i].getBahan(), matahari[i].getWarna(), matahari[i].getUntuk(),
                            matahari[i].getSize(), matahari[i].getMerk());
        }

        // Membuat border bawah
        System.out.print("+");
        System.out.print("-".repeat(Id_terpanjang + 2) + "+");
        System.out.print("-".repeat(NamaProduk_terpanjang + 2) + "+");
        System.out.print("-".repeat(KategoriProduk_terpanjang + 2) + "+");
        System.out.print("-".repeat(Harga_terpanjang + 2) + "+");
        System.out.print("-".repeat(Jenis_terpanjang + 2) + "+");
        System.out.print("-".repeat(Bahan_terpanjang + 2) + "+");
        System.out.print("-".repeat(Warna_terpanjang + 2) + "+");
        System.out.print("-".repeat(Untuk_terpanjang + 2) + "+");
        System.out.print("-".repeat(Size_terpanjang + 2) + "+");
        System.out.println("-".repeat(Merk_terpanjang + 2) + "+");

    }
}
