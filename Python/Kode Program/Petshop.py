class Petshop:
    def __init__(self, id="", nama_produk="", kategori_produk="", harga_produk=0):
        self.id = id
        self.nama_produk = nama_produk
        self.kategori_produk = kategori_produk
        self.harga_produk = harga_produk

    def set_id(self, id):
        self.id = id

    def get_id(self):
        return self.id

    def set_nama_produk(self, nama_produk):
        self.nama_produk = nama_produk

    def get_nama_produk(self):
        return self.nama_produk

    def set_kategori_produk(self, kategori_produk):
        self.kategori_produk = kategori_produk

    def get_kategori_produk(self):
        return self.kategori_produk

    def set_harga_produk(self, harga_produk):
        self.harga_produk = harga_produk

    def get_harga_produk(self):
        return self.harga_produk