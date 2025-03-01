
public class Petshop
{

    private String id;
    private String namaProduk;
    private String kategoriProduk;
    private int hargaProduk;

    public Petshop() 
    {
        // Konstruktor default kosong
    }

    public void setId(String id) 
    {
        this.id = id;
    }

    public String getId() 
    {
        return id;
    }

    public void setNamaProduk(String namaProduk) 
    {
        this.namaProduk = namaProduk;
    }

    public String getNamaProduk() 
    {
        return namaProduk;
    }

    public void setKategoriProduk(String kategoriProduk) 
    {
        this.kategoriProduk = kategoriProduk;
    }

    public String getKategoriProduk() 
    {
        return kategoriProduk;
    }

    public void setHargaProduk(int hargaProduk) 
    {
        this.hargaProduk = hargaProduk;
    }

    public int getHargaProduk() 
    {
        return hargaProduk;
    }
}
