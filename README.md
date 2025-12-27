# Fake Calculator Prank Windows

Program ini adalah **fake calculator berbasis bahasa C** yang dijalankan lewat **CMD Windows**.  
Program akan terlihat seperti kalkulator biasa, lalu menampilkan proses sistem palsu dan **mematikan PC**.

⚠️ Program ini **TIDAK menghapus file apa pun**.  
⚠️ Hanya untuk **fun / prank / edukasi**.

---

## Apa yang Akan Terjadi

Saat program dijalankan, alurnya sebagai berikut:

1. Muncul tampilan **Simple Calculator**
2. User diminta **memasukkan perhitungan**  
   (input **tidak diproses**, hanya untuk tampilan)
3. Muncul animasi teks secara berurutan:
   - `Processing`
   - `Loading`
   - `Final Answer`
4. Program menampilkan **fake delete System32** dengan **teks warna merah**
5. Muncul **scroll cepat ratusan file** (flood effect)
6. **PC shutdown langsung**

⚠️ Semua proses penghapusan file **hanya tampilan teks**,  
tidak ada file sistem yang benar-benar dihapus.

## Platform yang Didukung

- Windows 7 / 10 / 11
- Command Prompt (CMD) / PowerShell / Terminal VS Code

---

## 🧰 Requirements (WAJIB ADA)

Sebelum menjalankan program ini, **pastikan SEMUA ini sudah terinstall di PC kamu**:

### 1. Install Git (via CMD)

```cmd
winget install --id Git.Git -e
git --version
```

### 2. Install Compiler C (GCC / MinGW) via CMD

Disarankan pakai MSYS2:

```cmd
winget install --id MSYS2.MSYS2 -e
```

Setelah selesai:  
**1.** Buka MSYS2 MINGW64  
**2.** Jalankan:

```cmd
pacman -S mingw-w64-x86_64-gcc
```

Cek:

```cmd
gcc --version
```

**Jika kalian sudah lengkap persyaratan nya, lanjut cara menjalankan nya.**

### Clone Repository

Jalankan di command dengan perintah berikut:

```cmd
git clone https://github.com/zero0-sys/fake-calculator.git
```

Masuk folder project:

```cmd
cd fake-calculator
```

### Compile Program

```cmd
gcc calculator.c -o calculator.exe
```

Jika sukses, akan muncul:

```cmd
calculator.exe
```

### Jalankan Program

```cmd
calculator.exe
```

### ⚠️ PERINGATAN PENTING

Program ini menjalankan:

```c
system("shutdown /s /t 0");
```

Artinya:  
**1.** PC mati langsung (shutdown)  
**2.** Pekerjaan yang belum disimpan bisa hilang

**Mode Aman (tanpa shutdown)**  
Edit `calculator.c`, comment baris:

```c
// system("shutdown /s /t 0");
```

Lalu compile ulang.

### 📕 Catatan

- **Semua "Deleting System32" hanya tampilan teks**
- **Tidak ada file yang benar-benar dihapus**
- **Kode kalkulator asli tetap ada (if (0)), tapi tidak dijalankan**

### Disclaimer

Gunakan dengan tanggung jawab.  
**Author tidak bertanggung jawab** atas kehilangan data atau penyalahgunaan program ini.

Selamat membuat prank terhadap teman lucu kalian! 😄

Kode by Naufal