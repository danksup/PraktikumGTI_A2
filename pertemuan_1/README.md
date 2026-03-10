# Perbedaan GL Primitives (Tugas No. 2)

## 1. GL_LINE_STRIP

Membuat rangkaian garis yang saling tersambung secara berurutan.
Setiap vertex baru disambungkan ke vertex sebelumnya.
Ujung terakhir tidak kembali ke vertex pertama (bentuk terbuka).

## 2. GL_LINE_LOOP

Sama seperti `GL_LINE_STRIP`, namun vertex terakhir otomatis disambungkan kembali ke vertex pertama, sehingga membentuk bentuk tertutup.

## 3. GL_TRIANGLE_FAN

Vertex pertama menjadi titik pusat. Setiap segitiga baru dibentuk dari V0, vertex sebelumnya, dan vertex saat ini.

## 4. GL_TRIANGLE_STRIP

Membuat rangkaian segitiga yang saling berbagi sisi. Setiap segitiga baru menggunakan **2 vertex terakhir** dari segitiga sebelumnya ditambah 1 vertex baru. 

## 5. GL_QUADS

Setiap 4 vertex membentuk satu persegi/persegi panjang yang terpisah. Vertex harus diberikan secara berurutan (searah atau berlawanan jarum jam). 

## 6. GL_QUAD_STRIP

Membuat rangkaian persegi yang **saling berbagi sisi**. Vertex dimasukkan secara berpasangan (atas-bawah). Quad baru menggunakan pasangan vertex terakhir ditambah pasangan baru.
