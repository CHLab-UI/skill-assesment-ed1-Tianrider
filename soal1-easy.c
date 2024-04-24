/* ===== (Soal 1 Skill Assesment ED) =====
 * Hanya menjawab apakah bisa kerjain, untuk ingin kerjainnya sendiri opsional
 * Jangan pakai AI ya
 *
 * Soal 1: Input, Output, If, dan While
 *
 * Nama: Isi nama kalian di sini
 */

/* ----- (Ketentuan Soal) -----
 * Membuat Program Menghitung Nilai Ulangan
 * Program meminta input awal berupa jumlah soal
 * Program meminta input untuk setiap soal (1 = benar, 2 = salah, 0 = tidak menjawab)
 *
 * Soal benar mendapat 2 poin
 * Tidak jawab soal mendapat 0 poin
 * soal salah mendapat -1 poin
 */

#include <stdio.h>

// Contoh
// Membuat fungsi main (BISA) [contoh]
int main() {
    // Input jumlah soal (BISA) [isi yang dalam kurung (APAKAH BISA?)]
    int n;
    scanf("%d", &n);

    // Loop sebanyak jumlah soal (BISALAH YAKALI GABISA)
    int count = 0;
    for (int i = 0; i < n; i++) {
        // Setiap loop minta jawaban soal (BISA BNGTTT)
        int jawaban;
        scanf("%d", &jawaban);

        // Tergantung jawaban apa, tambahkan nilai (B I S A)
        if (jawaban == 1)
            count += 2;
        else if (jawaban == 2)
            count -= 1;
        else
            count += 0;
    }

    // Output nilai akhir (gabisa)
}
