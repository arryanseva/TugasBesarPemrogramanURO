# TugasBesarPemrogramanURO
Tugas Besar Pemrograman URO

Cara menjalankan program Urang Robot Orang : 
1. Saat pertama kali program dijalankan akan muncul sebuah kecoak random dalam posisi (x,y) dan akan terlihat dilayar posisi robot (0,0), posisi kecoak random tersebut (x,y) ,
   Health Poin (HP) robot dan kecoak senilai 100 poin serta jarak antara kecoak dan robot tersebut menggunakan teorema pitagoras.
2. Kemudian user akan diminta input yang akan memengaruhi pergerakan robot tersebut untuk membasmi kecoak. Posisi robot selalu menghadap ke depan (ke arah utara / y positif)
   ketika melakukan pergerakan maju, mundur, ke kanan, dan ke kiri satu satuan. Misalnya posisi awal robot (0,0) kemudian maju (0,1) dan ke kanan (1,1). Nah setelah berbelok ke kanan itu,
   posisi robot tetap menghadap ke utara sehingga ketika bergerak maju, posisi selanjutnya ialah (1,2) dan bukan (2,1) yang disebabkan ketika ke kanan posisi robot jadi ke timur.
   Ingat, posisi robot selalu ke utara.
3. Robot juga bisa menembak kecoak dan tertembak kecoak. Robot dapat menembak dari posisi manapun akan tetapi dapat memberikan damage ke kecoak ketika jarak antara robot dan kecoak
   (<= 6 satuan) sehingga HP kecoak berkurang, sebaliknya robot dapat tertembak oleh kecoak ketika jaraknya <= 3 satuan. Singkatnya, radiusnya lingkaran dengan jari - jari 6 dan 3.
4. Damage yang diberikan oleh kecoak adalah 2 poin HP dan oleh robot 50 poin HP. Karena amunisi terbatas, HP robot berkurang 1 poin ketika menembak.
5. Seperti pada game tembak-tembakan tertentu, ketika kecoak ditembak (baik terkena damage (jarak <= 6) atau tidak (jarak >6)) kecoak tersebut akan otomatis berpindah 
   bergerak satu satuan (maju, mundur, ke kanan, dan ke kiri) secara random dan ini hanya berlaku kepada kecoak yang ditargetkan untuk ditembak.
6. Ketika kecoak random pertama tadi mati (HP robot menjadi 100), program akan menampilkan peta dan jumlah kecoak (random) serta posisi robot setelah membunuh kecoak pertama. 
7. Program sama seperti sebelumnya, tetapi kali ini jumlah kecoak yang harus dibasmi jauh lebih banyak dari sebelumnya (sebelumnya cuma 1).
8. Ingat bahwa robot hanya bisa menembak satu kecoak, tetapi robot dapat tertembak oleh sejumlah kecoak asalkan masuk dalam radius tembak, dan apabila masuk radius tembak, 
   HP pasti berkurang sesuai deal damagenya. Jadi jangan hanya memerhatikan posisi 1 kecoak yang akan ditembak, tetapi perhatikan kecoak terdekat dari robot apakah masuk radius tembak atau
   tidak. Poin 5 berlaku kembali.
9. Program akan terus berlanjut sampai HP robot habis atau seluruh kecoak mati.
10. Posisi robot tidak bisa sama dengan posisi suatu kecoak (jarak = 0) dan HP robot tidak bisa bertambah.
11. Selamat bermain dan semoga berhasil membunuh seluruh kecoak!
