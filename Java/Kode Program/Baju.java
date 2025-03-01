
class Baju extends Aksesoris
{
    
    private String untuk;
    private String size;
    private String merk;

    public Baju() 
    {
        // Konstruktor default kosong
    }

    public Baju(String id, String nama, String kategori, int harga, String jenis, String bahan, String warna, String untuk, String size, String merk) 
    {
        setId(id);
        setNamaProduk(nama);
        setKategoriProduk(kategori);
        setHargaProduk(harga);
        setJenis(jenis);
        setBahan(bahan);
        setWarna(warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    public void setUntuk(String untuk) 
    {
        this.untuk = untuk;
    }

    public String getUntuk() 
    {
        return untuk;
    }

    public void setSize(String size) 
    {
        this.size = size;
    }

    public String getSize() 
    {
        return size;
    }

    public void setMerk(String merk) 
    {
        this.merk = merk;
    }

    public String getMerk() 
    {
        return merk;
    }
}
