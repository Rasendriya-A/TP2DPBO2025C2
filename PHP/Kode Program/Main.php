<?php
require_once "Baju.php";
session_start();

// Pastikan folder "Photo" ada
if (!is_dir("Photo")) {
    mkdir("Photo", 0777, true);
}

// Inisialisasi array produk default dalam session "matahari"
if (!isset($_SESSION['matahari'])) {
    $_SESSION['matahari'] = [
        new Baju("B001", "Kaos_Anjing", "Pakaian_Hewan", 50000, "Kaos", "Wol", "Merah", "Anjing", "M", "PawPrint", "default.jpg"),
        new Baju("B002", "Jaket_Kucing", "Pakaian_Hewan", 75000, "Jaket", "Denim", "Biru", "Kucing", "S", "MeowBrand", "default.jpg"),
        new Baju("B003", "Sweater_Anjing", "Pakaian_Hewan", 90000, "Sweater", "Katun", "Abu-Abu", "Anjing", "L", "FurryWear", "default.jpg"),
        new Baju("B004", "Rompi_Kucing", "Pakaian_Hewan", 60000, "Rompi", "Poliester", "Hitam", "Kucing", "M", "KittyStyle", "default.jpg"),
        new Baju("B005", "Hoodie_Anjing", "Pakaian_Hewan", 85000, "Hoodie", "Fleece", "Coklat", "Anjing", "XL", "DoggieSwag", "default.jpg"),
    ];
}

// Menambahkan produk baru jika form dikirim
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $id = $_POST["id"];
    $nama_produk = $_POST["nama_produk"];
    $kategori_produk = $_POST["kategori_produk"];
    $harga_produk = $_POST["harga_produk"];
    $jenis = $_POST["jenis"];
    $bahan = $_POST["bahan"];
    $warna = $_POST["warna"];
    $untuk = $_POST["untuk"];
    $size = $_POST["size"];
    $merk = $_POST["merk"];
    
    // Proses upload gambar
    $gambar = "default.jpg"; // Default jika tidak ada gambar diunggah
    if (!empty($_FILES["gambar"]["name"])) {
        $gambar_nama = basename($_FILES["gambar"]["name"]);
        $gambar_path = "Photo/" . $gambar_nama;
        
        // Cek apakah upload berhasil
        if (move_uploaded_file($_FILES["gambar"]["tmp_name"], $gambar_path)) {
            $gambar = $gambar_nama;
        }
    }

    $produk_baru = new Baju($id, $nama_produk, $kategori_produk, $harga_produk, $jenis, $bahan, $warna, $untuk, $size, $merk, $gambar);
    $_SESSION['matahari'][] = $produk_baru;

    header("Location: Main.php"); // Refresh halaman untuk mencegah re-submit form
    exit();
}
?>

<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Manajemen Produk Petshop</title>
    <style>
        body { font-family: Arial, sans-serif; margin: 20px; }
        table { width: 100%; border-collapse: collapse; margin-top: 20px; }
        table, th, td { border: 1px solid black; }
        th, td { padding: 10px; text-align: center; }
        th { background-color: #f2f2f2; }
        form { margin-top: 20px; }
        label { font-weight: bold; display: block; margin-top: 10px; }
        input, select { width: 100%; padding: 8px; margin-top: 5px; }
        button { margin-top: 10px; padding: 10px; background-color: blue; color: white; border: none; cursor: pointer; }
    </style>
</head>
<body>

<h2>Daftar Produk Petshop</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Kategori</th>
            <th>Harga</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
            <th>Gambar</th>
        </tr>
        <?php foreach ($_SESSION['matahari'] as $produk): ?>
        <tr>
            <td><?= $produk->getId() ?></td>
            <td><?= $produk->getNamaProduk() ?></td>
            <td><?= $produk->getKategoriProduk() ?></td>
            <td>Rp<?= number_format($produk->getHargaProduk(), 0, ',', '.') ?></td>
            <td><?= $produk->getJenis() ?></td>
            <td><?= $produk->getBahan() ?></td>
            <td><?= $produk->getWarna() ?></td>
            <td><?= $produk->getUntuk() ?></td>
            <td><?= $produk->getSize() ?></td>
            <td><?= $produk->getMerk() ?></td>
            <td><img src="Photo/<?= $produk->getGambar() ?>" alt="Gambar Produk" width="100"></td>
        </tr>
        <?php endforeach; ?>
    </table>

    <h2>Tambah Produk Baru</h2>
    <form method="post" enctype="multipart/form-data">
        <label for="id">ID Produk:</label>
        <input type="text" id="id" name="id" required>

        <label for="nama_produk">Nama Produk:</label>
        <input type="text" id="nama_produk" name="nama_produk" required>

        <label for="kategori_produk">Kategori Produk:</label>
        <input type="text" id="kategori_produk" name="kategori_produk" required>

        <label for="harga_produk">Harga Produk:</label>
        <input type="number" id="harga_produk" name="harga_produk" required>

        <label for="jenis">Jenis:</label>
        <input type="text" id="jenis" name="jenis" required>

        <label for="bahan">Bahan:</label>
        <input type="text" id="bahan" name="bahan" required>

        <label for="warna">Warna:</label>
        <input type="text" id="warna" name="warna" required>

        <label for="untuk">Untuk:</label>
        <select id="untuk" name="untuk">
            <option value="Anjing">Anjing</option>
            <option value="Kucing">Kucing</option>
            <option value="Hewan Lain">Hewan Lain</option>
        </select>

        <label for="size">Size:</label>
        <select id="size" name="size">
            <option value="S">S</option>
            <option value="M">M</option>
            <option value="L">L</option>
            <option value="XL">XL</option>
            <option value="XXL">XXL</option>
        </select>

        <label for="merk">Merk:</label>
        <input type="text" id="merk" name="merk" required>

        <label for="gambar">Gambar Produk:</label>
        <input type="file" id="gambar" name="gambar" accept="image/*">

        <button type="submit">Tambah Produk</button>
    </form>

</body>
</html>
