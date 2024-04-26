/* ===== (Soal 2 Skill Assesment ED) =====
 * Hanya menjawab apakah bisa kerjain, untuk ingin kerjainnya sendiri opsional
 * Jangan pakai AI ya
 *
 * Soal 2: Function dan Array
 *
 * Nama: Isi nama kalian di sini
 */

/* ----- (Ketentuan Soal) -----
 * Membuat function print array secara reverse
 *
 */

#include <stdio.h>

// kalau mau ganti tipe function dari void, dipersilahkan
void printReverse(char pujaanHati[]) {
    // Membuat fungsi printReverse secara rekursif(bisa ga ya?)
    if (*pujaanHati == '\0')
        return;

    printReverse(pujaanHati + 1);

    printf("%c", *pujaanHati);
    // jika tidak bisa secara rekursi, membuat fungsi printReverse secara tidak rekursif(gak)
}

int main() {
    // initialisasi array of integer (kalau mau char juga boleh, tapi harus ganti di function) (BISA BANGET)
    char pujaanHati[9] = {'C', 'r', 'y', 's', 't', 'a', 'l', 'y'};

    // Input array pakai loop, atau kalau array of char bisa input sebaga string (g bisa maunya taly)
    /** 🚀🚀[REVIEW]🚀🚀
     *  Masa input string aja gak bisa
     */

    // Panggil fungsi printReverse (APAKAH BISA?)
    printReverse(pujaanHati);
}
