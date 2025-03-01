import math
from Baju import Baju

def main():
    n = int(input("Jumlah produk yang akan dimasukkan: "))
    
    matahari = [
        Baju("B001", "Kaos_Anjing", "Pakaian_Hewan", 50000, "Kaos", "Wol", "Merah", "Anjing", "M", "PawPrint"),
        Baju("B002", "Jaket_Kucing", "Pakaian_Hewan", 75000, "Jaket", "Denim", "Biru", "Kucing", "S", "MeowBrand"),
        Baju("B003", "Sweater_Anjing", "Pakaian_Hewan", 90000, "Sweater", "Katun", "Abu-Abu", "Anjing", "L", "FurryWear"),
        Baju("B004", "Rompi_Kucing", "Pakaian_Hewan", 60000, "Rompi", "Poliester", "Hitam", "Kucing", "M", "KittyStyle"),
        Baju("B005", "Hoodie_Anjing", "Pakaian_Hewan", 85000, "Hoodie", "Fleece", "Coklat", "Anjing", "XL", "DoggieSwag"),
    ]
    
    for _ in range(n):
        data = input().split()
        matahari.append(Baju(*data[:3], int(data[3]), *data[4:]))
    
    # Menentukan panjang maksimum setiap kolom
    kolom = {
        "Id": 2, "Nama Produk": 11, "Kategori": 8, "Harga": 5, "Jenis": 5,
        "Bahan": 5, "Warna": 5, "Untuk": 5, "Size": 4, "Merk": 4
    }
    
    for baju in matahari:
        kolom["Id"] = max(kolom["Id"], len(baju.get_id()))
        kolom["Nama Produk"] = max(kolom["Nama Produk"], len(baju.get_nama_produk()))
        kolom["Kategori"] = max(kolom["Kategori"], len(baju.get_kategori_produk()))
        kolom["Jenis"] = max(kolom["Jenis"], len(baju.get_jenis()))
        kolom["Bahan"] = max(kolom["Bahan"], len(baju.get_bahan()))
        kolom["Warna"] = max(kolom["Warna"], len(baju.get_warna()))
        kolom["Untuk"] = max(kolom["Untuk"], len(baju.get_untuk()))
        kolom["Size"] = max(kolom["Size"], len(baju.get_size()))
        kolom["Merk"] = max(kolom["Merk"], len(baju.get_merk()))
        kolom["Harga"] = max(kolom["Harga"], len(str(baju.get_harga_produk())))
    
    # Fungsi untuk mencetak garis pemisah
    def cetak_pemisah():
        print("+" + "+".join("-" * (kolom[k] + 2) for k in kolom) + "+")
    
    # Mencetak tabel
    cetak_pemisah()
    print(f"| {'Id':<{kolom['Id']}} | {'Nama Produk':<{kolom['Nama Produk']}} | {'Kategori':<{kolom['Kategori']}} | {'Harga':<{kolom['Harga']}} | "
        f"{'Jenis':<{kolom['Jenis']}} | {'Bahan':<{kolom['Bahan']}} | {'Warna':<{kolom['Warna']}} | {'Untuk':<{kolom['Untuk']}} | {'Size':<{kolom['Size']}} | {'Merk':<{kolom['Merk']}} |")
    cetak_pemisah()
    for baju in matahari:
        print(f"| {baju.get_id():<{kolom['Id']}} | {baju.get_nama_produk():<{kolom['Nama Produk']}} | {baju.get_kategori_produk():<{kolom['Kategori']}} | {baju.get_harga_produk():<{kolom['Harga']}} | "
            f"{baju.get_jenis():<{kolom['Jenis']}} | {baju.get_bahan():<{kolom['Bahan']}} | {baju.get_warna():<{kolom['Warna']}} | {baju.get_untuk():<{kolom['Untuk']}} | {baju.get_size():<{kolom['Size']}} | {baju.get_merk():<{kolom['Merk']}} |")
    cetak_pemisah()

if __name__ == "__main__":
    main()
