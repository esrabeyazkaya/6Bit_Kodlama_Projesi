#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch1, ch2; // Kullan�c�dan al�nacak ASCII karakterler
    int num1, num2, sum;

    printf("Toplanacak iki rakam� girin (0-9):\n");
    
    // Karakterleri oku
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);

    // ASCII karakteri say�ya �evir
    num1 = ch1 - '0'; // �rn: '5' -> 5
    num2 = ch2 - '0';

    // Girdi kontrol�
    if(num1 < 0 || num1 > 9 || num2 < 0 || num2 > 9) {
        printf("Hata: Sadece 0-9 arasi rakam girilebilir!\n");
        system("pause"); // Siyah ekran� a��k tut
        return 1; // Program� hata ile bitir
    }

    sum = num1 + num2;

    // Toplam 9'u ge�erse hata mesaj�
    if(sum > 9) {
        printf("Hata: Toplam 9'u asiyor!\n");
        system("pause"); // Siyah ekran� a��k tut
        return 1;
    }

    // Sonucu ekrana yazd�r (ASCII karakter olarak)
    printf("Toplam: %c\n", sum + '0');

    system("pause"); // Program bitince siyah ekran� a��k tut
    return 0;
}
