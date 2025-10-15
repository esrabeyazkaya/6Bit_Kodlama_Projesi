#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch1, ch2; // Kullanýcýdan alýnacak ASCII karakterler
    int num1, num2, sum;

    printf("Toplanacak iki rakamý girin (0-9):\n");
    
    // Karakterleri oku
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);

    // ASCII karakteri sayýya çevir
    num1 = ch1 - '0'; // Örn: '5' -> 5
    num2 = ch2 - '0';

    // Girdi kontrolü
    if(num1 < 0 || num1 > 9 || num2 < 0 || num2 > 9) {
        printf("Hata: Sadece 0-9 arasi rakam girilebilir!\n");
        system("pause"); // Siyah ekraný açýk tut
        return 1; // Programý hata ile bitir
    }

    sum = num1 + num2;

    // Toplam 9'u geçerse hata mesajý
    if(sum > 9) {
        printf("Hata: Toplam 9'u asiyor!\n");
        system("pause"); // Siyah ekraný açýk tut
        return 1;
    }

    // Sonucu ekrana yazdýr (ASCII karakter olarak)
    printf("Toplam: %c\n", sum + '0');

    system("pause"); // Program bitince siyah ekraný açýk tut
    return 0;
}
