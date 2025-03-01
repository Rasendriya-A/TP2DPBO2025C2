from Petshop import Petshop

class Aksesoris(Petshop):
    def __init__(self, id="", nama_produk="", kategori_produk="", harga_produk=0, jenis="", bahan="", warna=""):
        super().__init__(id, nama_produk, kategori_produk, harga_produk)
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna

    def set_jenis(self, jenis):
        self.jenis = jenis

    def get_jenis(self):
        return self.jenis

    def set_bahan(self, bahan):
        self.bahan = bahan

    def get_bahan(self):
        return self.bahan

    def set_warna(self, warna):
        self.warna = warna

    def get_warna(self):
        return self.warna