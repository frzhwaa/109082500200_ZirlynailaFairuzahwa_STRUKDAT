# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Zirlynaila Fairuzahwa - 109082500200</p>

## Dasar Teori

Code::Blocks merupakan Integrated Development Environment (IDE) yang bersifat free, open-source, dan cross-platform serta digunakan untuk pengembangan program C/C++ dan Fortran. IDE menyediakan lingkungan untuk menulis kode, melakukan build, menjalankan program, dan membantu menemukan kesalahan pada program. Penggunaan IDE seperti Code::Blocks dapat membantu proses pembelajaran pemrograman karena menyediakan lingkungan pengembangan yang terintegrasi bagi pengguna pemula [1].

### A. Code::Blocks IDE<br/>

Code::Blocks digunakan sebagai lingkungan pengembangan dalam praktikum untuk membuat dan menjalankan program C++. Dalam Code::Blocks, program dapat dibuat melalui project, ditulis pada editor, kemudian dilakukan build dan run untuk melihat hasil program. [1]

#### 1. Build dan Run
Build merupakan proses membangun syntax menjadi sebuah program, sedangkan Run digunakan untuk menjalankan program yang telah melalui proses build. Code::Blocks juga menyediakan Build and Run untuk melakukan kedua proses tersebut secara berurutan.

#### 2. Error dan Clean Project
Kesalahan penulisan syntax dapat menghasilkan error message yang menunjukkan lokasi kesalahan pada program. Jika program mengalami masalah ketika dijalankan, project dapat dilakukan clean kemudian dibangun kembali.

#### 3. IDE dalam Pembelajaran Pemrograman
Code::Blocks dapat digunakan sebagai lingkungan pembelajaran pemrograman bagi mahasiswa tingkat awal. Penelitian menunjukkan bahwa IDE merupakan bagian penting dalam lingkungan pembelajaran pemrograman, meskipun pengguna pemula tetap perlu memahami fungsi dan fitur IDE yang digunakan [1].

### B. Pengenalan Bahasa C++<br/>

C++ merupakan bahasa pemrograman yang dikembangkan oleh Bjarne Stroustrup di AT&T Bell Laboratories pada awal tahun 1980-an berdasarkan bahasa C. Pada awal perkembangannya, C++ dikenal sebagai C with Classes, kemudian berkembang dengan penambahan fitur seperti operator overloading dan function hingga menjadi C++ [2].

#### 1. Struktur Program, Variabel, dan Tipe Data
Struktur dasar program C++ terdiri dari header/library, deklarasi variabel atau konstanta, fungsi, dan fungsi utama main(). Variabel digunakan untuk menyimpan nilai yang dapat berubah selama program berjalan, sedangkan tipe data menentukan jenis data yang dapat disimpan, seperti int, float, double, dan char.

#### 2. Input, Output, dan Operator
Input digunakan untuk menerima data dari pengguna menggunakan cin, sedangkan output digunakan untuk menampilkan data menggunakan cout. C++ juga memiliki berbagai operator, seperti operator aritmatika, assignment, logika, hubungan, dan increment/decrement yang digunakan untuk melakukan operasi terhadap data.

#### 3. Kondisional, Perulangan, dan Struktur
Kondisional seperti if, if-else, dan switch digunakan untuk pengambilan keputusan berdasarkan suatu kondisi. Perulangan seperti for, while, dan do-while digunakan untuk menjalankan instruksi secara berulang. Selain itu, C++ menyediakan struct untuk mengelompokkan beberapa variabel dengan tipe data berbeda ke dalam satu kesatuan.

## Unguided

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
source code unguided 1

#include <iostream>
using namespace std;

int main(){
    float bil1, bil2;
    cin >> bil1;
    cin >> bil2;
    cout << "Hasil penjumlahan = " << bil1 + bil2 << endl;
    cout << "Hasil pengurangan = " << bil1 - bil2 << endl;
    cout << "Hasil perkalian = " << bil1 * bil2 << endl;
    cout << "Hasil pembagian = " << bil1 / bil2 << endl;
    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT/blob/main/modul1/output/soal1.png)

Program tersebut meminta pengguna untuk menginputkan dua buah bilangan bertipe float. Setelah kedua bilangan dimasukkan, program akan melakukan empat operasi aritmatika, yaitu penjumlahan, pengurangan, perkalian, dan pembagian. Nilai yang diinputkan disimpan ke dalam variabel bil1 dan bil2. Selanjutnya, program menghitung hasil dari setiap operasi menggunakan kedua variabel tersebut, kemudian menampilkan hasilnya ke layar menggunakan cout.
Sebagai contoh, ketika saya menginputkan bilangan 10 dan 8, program akan melakukan operasi penjumlahan 10 + 8 sehingga menghasilkan 18, pengurangan 10 - 8 menghasilkan 2, perkalian 10 * 8 menghasilkan 80, dan pembagian 10 / 8 menghasilkan 1.25. Setelah semua operasi selesai dilakukan, program akan menampilkan masing-masing hasil dengan keterangan "Hasil penjumlahan", "Hasil pengurangan", "Hasil perkalian", dan "Hasil pembagian".

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100. Contoh:
### 79: tujuh puuluh sembilan

```C++
source code unguided 2

#include <iostream>
using namespace std;

int main(){
    int angka, puluhan, satu;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"
    };
    if (angka >= 0 && angka <= 9) {
        cout << satuan[angka];
    } else if (angka == 10) {
        cout << "sepuluh";
    } else if (angka == 11) {
        cout << "sebelas";
    } else if (angka >= 12 && angka <= 19) {
        cout << satuan[angka - 10] << " belas";
    } else if (angka >= 20 && angka <= 99) {
        puluhan = angka / 10;
        satu = angka % 10;
        cout << satuan[puluhan] << " puluh";
        if (satu != 0) {
            cout << " " << satuan[satu];
        }
    } else if (angka == 100) {
        cout << "seratus";
    } else {
        cout << "Angka harus 0 sampai 100";
    }
    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT/blob/main/modul1/output/soal2.png)

Program tersebut meminta pengguna untuk menginputkan sebuah bilangan bulat dari 0 sampai 100. Bilangan yang dimasukkan disimpan ke dalam variabel angka, kemudian program menggunakan array satuan yang berisi nama-nama bilangan dari nol sampai sembilan dalam bentuk string. Selanjutnya, program menggunakan percabangan if,  else if, dan else untuk menentukan penyebutan angka yang sesuai. Untuk angka 0 sampai 9, program langsung mengambil nama angka dari array satuan. Angka 10 dan 11 memiliki penyebutan khusus, yaitu "sepuluh" dan "sebelas", sedangkan angka 12 sampai 19 menggunakan nama angka satuannya ditambah dengan kata "belas". Untuk angka 20 sampai 99, program memisahkan angka puluhan dan satuan menggunakan operasi pembagian (/) dan modulus (%), kemudian menampilkan nama puluhan diikuti kata "puluh" dan nama satuannya jika tidak bernilai nol. Jika angka yang dimasukkan adalah 100, program menampilkan "seratus". Apabila angka yang dimasukkan berada di luar rentang 0 sampai 100, program akan menampilkan pesan bahwa angka harus berada pada rentang tersebut.
Sebagai contoh, ketika saya menginputkan angka 64, program akan menghitung nilai puluhan dengan 64 / 10 sehingga diperoleh 6, sedangkan nilai satuan dengan 64 % 10 sehingga diperoleh 4. Kemudian program mengambil satuan[6] yaitu "enam" dan satuan[4] yaitu "empat", sehingga output yang ditampilkan adalah "dua puluh empat". Sebagai contoh lainnya, jika saya menginputkan angka 9, program akan langsung menampilkan "sembilan", jika menginputkan angka 100, program akan menampilkan "seratus", sedangkan jika menginputkan 200, program akan menampilkan "Angka harus 0 sampai 100".

### 3. Buatlah program yang dapat memberikan input dan output sbb.

```C++
source code unguided 3

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input: ";
    cin >> n;
    for (int i = n; i >= 0; i--){
        for (int s = n; s > i; s--){
            cout << "  ";
        }
        if (i == 0){
            cout << "*";
        } else {
            for (int j = i; j >= 1; j--){
                cout << j << " ";
            }
            cout << "* ";
            for (int j = 1; j <= i; j++){
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT/blob/main/modul1/output/soal3.png)

Program tersebut meminta pengguna untuk menginputkan sebuah bilangan bulat n. Setelah nilai n dimasukkan, program menggunakan perulangan for untuk membuat pola angka dan tanda * secara bertahap dari baris pertama hingga baris terakhir. Perulangan pertama menggunakan variabel i yang dimulai dari n dan terus berkurang sampai 0, sehingga menentukan jumlah angka yang ditampilkan pada setiap baris. Selanjutnya, perulangan s digunakan untuk memberikan spasi di awal baris agar pola bergeser ke kanan secara bertahap. Jika nilai i sama dengan 0, program hanya menampilkan tanda *. Jika nilai i masih lebih dari 0, program menampilkan angka dari i sampai 1, kemudian tanda *, lalu angka dari 1 sampai i. Setelah setiap baris selesai diproses, program menggunakan endl untuk berpindah ke baris berikutnya.
Sebagai contoh, ketika saya menginputkan angka 3, pada baris pertama nilai i adalah 3, sehingga program menampilkan angka dari 3 sampai 1, kemudian tanda *, lalu angka dari 1 sampai 3, yaitu 3 2 1 * 1 2 3. Pada baris berikutnya nilai i berkurang menjadi 2, sehingga jumlah angka yang ditampilkan juga berkurang dan posisi pola bergeser ke kanan. Proses tersebut terus dilakukan sampai nilai i menjadi 0. Pada saat i bernilai 0, program hanya menampilkan tanda *. Dengan demikian, program menghasilkan pola yang semakin mengecil dari atas ke bawah dan tanda * berada di bagian tengah pola.

## Kesimpulan

Pada praktikum Modul 1 Code::Blocks IDE dan Pengenalan Bahasa C++ (Bagian Pertama), dapat disimpulkan bahwa Code::Blocks dapat digunakan untuk menulis, melakukan build, menjalankan, dan memperbaiki kesalahan pada program C++. Praktikum modul 1 ini membantu saya dalam memahami dasar-dasar bahasa C++, seperti penggunaan variabel, tipe data, input cin, output cout, operator aritmatika, percabangan if-else, array, serta perulangan for.
Melalui tiga program unguided yang sudah saya kerjakan, saya memahami penerapan konsep tersebut dalam menyelesaikan permasalahan. Program pertama menerapkan operasi aritmatika pada dua bilangan float, program kedua menggunakan array, percabangan, serta operator pembagian dan modulus untuk mengubah angka menjadi bentuk tulisan, sedangkan program ketiga menggunakan perulangan bersarang untuk menghasilkan pola angka dan tanda *.
Praktikum ini membantu saya dalam memberikan pemahaman dasar mengenai cara kerja program C++ dan bagaimana konsep-konsep dasar tersebut dapat digunakan untuk membuat program sesuai dengan kebutuhan dan permasalahan yang diberikan.

## Referensi

[1] Salinas, M., Leger, P., Fukuda, H., Cardozo, N., Duarte, V., & Figueroa, I. (2023). Evaluations of Integrated Programming Environment for First-Year Students in Computer Engineering. Journal of Universal Computer Science, 29(1), 73–97. https://doi.org/10.3897/jucs.81329.
<br>
[2] Ibragimova, M. K. Q., & Xurramov, R. E. (2022). The Importance and Need of C and C++ Programming Language Teaching in Higher Education Institutions. International Journal of Inclusive and Sustainable Education, 1(6), 122–125. https://doi.org/10.51699/ijise.v1i6.732.