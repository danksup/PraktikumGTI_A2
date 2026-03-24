# Agung Rama Pramana Putra
# 24060124120007

## Proyeksi
<img width="838" height="577" alt="image" src="https://github.com/user-attachments/assets/92e97217-1cda-4e09-a4fb-7b494e1f274b" />

## Kubus Berotasi
<img width="630" height="868" alt="image" src="https://github.com/user-attachments/assets/f769777b-fcdd-47a2-a035-bd09c9e9e404" />

# Lengan 
Cara Kerja:
Terdapat dua variabel utama yaitu shoulder dan elbow yang menyimpan sudut rotasi masing-masing sendi.
Pada fungsi display, penggambaran dilakukan sebagai berikut:
- Lengan atas digambar dengan menggeser pivot ke ujung kiri (glTranslatef(-1,0,0)), merotasi sesuai sudut bahu (glRotatef(shoulder,...)), lalu menggeser ke tengah segmen dan menggambar kubus pipih dengan glScalef(2.0, 0.4, 1.0) dan glutWireCube(1.0).
- Lengan Bawah digambar melanjutkan transformasi upper arm, sehingga secara otomatis mengikuti pergerakan bahu. Proses yang sama diterapkan: geser ke ujung upper arm, rotasi sesuai sudut siku, lalu gambar segmen.
- glPushMatrix dan glPopMatrix digunakan untuk menyimpan dan memulihkan state matriks agar transformasi tiap segmen tidak saling mengganggu.
- Kontrol keyboard mengubah nilai shoulder dan elbow sebesar ±5 derajat per penekanan, diikuti glutPostRedisplay untuk memicu redraw. Operator % 360 menjaga sudut dalam rentang 0-359 derajat.
## Tugas
<img width="1024" height="632" alt="image" src="https://github.com/user-attachments/assets/ef708a80-05d0-445a-a4ea-e34220388f1c" />
<img width="1021" height="629" alt="image" src="https://github.com/user-attachments/assets/d011b2d9-2cb8-4666-ab72-ae912d8630d2" />
<img width="1043" height="628" alt="image" src="https://github.com/user-attachments/assets/1afa6a1b-f8d0-4733-b2c2-5195a7f82cf1" />



