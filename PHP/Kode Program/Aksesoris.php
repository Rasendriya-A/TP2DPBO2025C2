<?php
require_once "Petshop.php";

class Aksesoris extends Petshop {
    private $jenis;
    private $bahan;
    private $warna;

    public function __construct($id = "", $nama_produk = "", $kategori_produk = "", $harga_produk = 0, $jenis = "", $bahan = "", $warna = "") 
    {
        parent::__construct($id, $nama_produk, $kategori_produk, $harga_produk);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    public function setJenis($jenis) 
    {
        $this->jenis = $jenis;
    }

    public function getJenis() 
    {
        return $this->jenis;
    }

    public function setBahan($bahan)
    {
        $this->bahan = $bahan;
    }

    public function getBahan()
    {
        return $this->bahan;
    }

    public function setWarna($warna) 
    {
        $this->warna = $warna;
    }

    public function getWarna() 
    {
        return $this->warna;
    }

    public function getDetailProduk() 
    {
        return "ID: " . $this->getId() . 
               ", Nama: " . $this->getNamaProduk() . 
               ", Kategori: " . $this->getKategoriProduk() . 
               ", Harga: " . $this->getHargaProduk() . 
               ", Jenis: " . $this->getJenis() . 
               ", Bahan: " . $this->getBahan() . 
               ", Warna: " . $this->getWarna();
    }
}
?>
