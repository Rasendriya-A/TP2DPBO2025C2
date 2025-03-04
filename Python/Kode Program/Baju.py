from Aksesoris import Aksesoris

class Baju(Aksesoris):
    def __init__(self, id="", nama_produk="", kategori_produk="", harga_produk=0, jenis="", bahan="", warna="", untuk="", size="", merk=""):
        super().__init__(id, nama_produk, kategori_produk, harga_produk, jenis, bahan, warna)
        self.untuk = untuk
        self.size = size
        self.merk = merk

    def set_untuk(self, untuk):
        self.untuk = untuk

    def get_untuk(self):
        return self.untuk

    def set_size(self, size):
        self.size = size

    def get_size(self):
        return self.size

    def set_merk(self, merk):
        self.merk = merk

    def get_merk(self):
        return self.merk