<?php
require_once "Aksesoris.php";

class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;
    private $gambar;

    public function __construct($id, $nama_produk, $kategori_produk, $harga_produk, $jenis, $bahan, $warna, $untuk, $size, $merk, $gambar = "default.jpg") {
        $this->id = $id;
        $this->nama_produk = $nama_produk;
        $this->kategori_produk = $kategori_produk;
        $this->harga_produk = $harga_produk;
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
        $this->gambar = $gambar;
    }

    public function setUntuk($untuk) 
    {
        $this->untuk = $untuk;
    }

    public function getUntuk() 
    {
        return $this->untuk;
    }

    public function setSize($size) 
    {
        $this->size = $size;
    }

    public function getSize() 
    {
        return $this->size;
    }

    public function setMerk($merk) 
    {
        $this->merk = $merk;
    }

    public function getMerk() 
    {
        return $this->merk;
    }

    public function getGambar() {
        return $this->gambar;
    }

    public function getDetailProduk() 
    {
        return "ID: " . $this->getId() . 
               ", Nama: " . $this->getNamaProduk() . 
               ", Kategori: " . $this->getKategoriProduk() . 
               ", Harga: " . $this->getHargaProduk() . 
               ", Jenis: " . $this->getJenis() . 
               ", Bahan: " . $this->getBahan() . 
               ", Warna: " . $this->getWarna() . 
               ", Untuk: " . $this->getUntuk() . 
               ", Size: " . $this->getSize() . 
               ", Merk: " . $this->getMerk();
    }

    // Fungsi untuk menambahkan baju baru dengan gambar
    public function add($id, $nama_produk, $kategori_produk, $harga_produk, $jenis, $bahan, $warna, $untuk, $size, $merk, $gambar = "default.jpg") 
    {
        return new Baju($id, $nama_produk, $kategori_produk, $harga_produk, $jenis, $bahan, $warna, $untuk, $size, $merk, $gambar);
    }

}
?>
