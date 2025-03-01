<h1 align="center">Tugas Praktikum 2</h1>

<h3 align="left">Janji</h3>
Saya Rasendriya Andhika dengan NIM 2305309 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

<h3 align="left">Diagram</h3>
<img width="795" alt="C++1" src="https://github.com/user-attachments/assets/14391b95-8a3b-4f5c-a017-2a3aaf1f9869" /> <br>

<h3 align="left">Desain Program</h3>
Program terdiri dari 3 class yaitu PetShop, Aksesoris, dan Baju <br>
Didalam class PetShop memiliki 4 Atribut, yaitu :
<ul>
   <li>Id</li>
   <li>NamaProduk</li>
   <li>KategoriProduk</li>
   <li>HargaProduk</li>
</ul>
Didalam class Aksesoris memiliki 3 Atribut, yaitu :
<ul>
   <li>Jenis</li>
   <li>Bahan</li>
   <li>Warna</li>
</ul>
Didalam class Baju memiliki 3 Atribut, yaitu :
<ul>
   <li>Untuk</li>
   <li>Size</li>
   <li>Merk</li>
</ul>
lalu untuk bahasa PHP ada atribut tambahan yaitu :
<ul>
   <li>Gambar</li>
</ul>

<h3 align="left">Alur Program</h3>
<strong> 1. Menampilkan semua produk </strong>
<ul>
   <li>Menu ini digunakan untuk melihat daftar semua produk yang sudah terdaftar.</li>
   <li>Jika belum ada produk yang terdaftar, akan muncul pesan bahwa daftar produk masih kosong.</li>
</ul>  

<strong> 2. Menambahkan produk </strong>
<ul>
   <li>Menu ini digunakan untuk menambahkan produk baru ke dalam sistem.</li>
   <li>Pengguna akan diminta memasukkan ID, kategori, nama, dan harga produk. </li>
   <li>Program akan memeriksa apakah ID yang dimasukkan sudah ada atau belum. Jika ID sudah ada, produk tidak bisa ditambahkan.  </li>
</ul>

<strong> 3. Mengubah produk </strong>
<ul>
   <li>Menu ini digunakan untuk mengubah atribut dari produk yang sudah ada.</li>
   <li>Pengguna harus memasukkan nama produk yang ingin diubah, lalu memilih atribut yang akan diubah (ID, kategori, nama, atau harga).</li>
   <li>Jika produk dengan nama yang dimasukkan tidak ditemukan, perubahan tidak dapat dilakukan.</li>
</ul>

<strong> 4. Menghapus produk </strong>
<ul>
   <li>Menu ini digunakan untuk menghapus produk berdasarkan nama produk.</li>
   <li>Jika produk ditemukan, produk akan dihapus dari daftar.</li>
   <li>Jika produk tidak ditemukan, akan muncul pesan bahwa produk tidak dapat dihapus karena tidak terdaftar.</li>
</ul>

<strong> 5. Mencari produk </strong>
<ul>
   <li>Menu ini digunakan untuk mencari produk berdasarkan nama produk.</li>
   <li>Jika produk ditemukan, informasi produk akan ditampilkan.</li>
   <li>Jika produk tidak ditemukan, akan muncul pesan bahwa produk tidak tersedia.</li>
</ul>

<strong> 7. Selesai (Keluar dari program) </strong>
<ul>
   <li>Menu ini digunakan untuk keluar dari program.</li>
</ul>  

<h3 align="left">Aturan dalam program</h3>  
<strong> 1. ID sebagai Primary Key </strong>
<ul>
   <li>ID produk harus unik (tidak boleh ada ID yang sama saat menambahkan atau mengubah produk).</li>
   <li>Saat mengubah data, ID tidak boleh diganti dengan ID yang sudah ada.</li>
   <li>Saat menambahkan produk, jika ID sudah ada, produk tidak bisa ditambahkan.</li>
</ul> 

<strong> 2. Penghapusan berdasarkan Nama Produk </strong>
<ul>
   <li>Untuk menghapus produk, pengguna harus memasukkan nama produk. Jika nama produk tidak ditemukan, penghapusan tidak bisa dilakukan.</li>
</ul>

<strong> 3. Perubahan data berdasarkan Nama Produk </strong>
<ul>
   <li>Untuk mengubah produk, pengguna harus memasukkan nama produk. Jika nama produk tidak ditemukan, data tidak bisa diubah.</li>
</ul>
