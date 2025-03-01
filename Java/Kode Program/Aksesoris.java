
class Aksesoris extends Petshop
{
    
    private String jenis;
    private String bahan;
    private String warna;

    public Aksesoris()
    {
        // Konstruktor default kosong
    }

    public void setJenis(String jenis) 
    {
        this.jenis = jenis;
    }

    public String getJenis() 
    {
        return jenis;
    }

    public void setBahan(String bahan) 
    {
        this.bahan = bahan;
    }

    public String getBahan() 
    {
        return bahan;
    }

    public void setWarna(String warna) 
    {
        this.warna = warna;
    }

    public String getWarna() 
    {
        return warna;
    }
}
