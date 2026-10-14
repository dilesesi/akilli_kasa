
#include <stdio.h>

int main() {
    double urunTutari, odenenPara;
    int paraUstuKurus, toplamKupur = 0;

    int ikiYuz, yuz, elli, yirmi, on, bes, bir;
    int elliKurus, yirmiBesKurus, onKurus;
    int besKurus, birKurus;

    printf("Urun tutarini giriniz (TL): ");
    scanf("%lf", &urunTutari);

    printf("Odenen parayi giriniz (TL): ");
    scanf("%lf", &odenenPara);

    paraUstuKurus =
        (int)((odenenPara - urunTutari) * 100.0 + 0.5);

    ikiYuz = paraUstuKurus / 20000;
    paraUstuKurus %= 20000;

    yuz = paraUstuKurus / 10000;
    paraUstuKurus %= 10000;

    elli = paraUstuKurus / 5000;
    paraUstuKurus %= 5000;

    yirmi = paraUstuKurus / 2000;
    paraUstuKurus %= 2000;

    on = paraUstuKurus / 1000;
    paraUstuKurus %= 1000;

    bes = paraUstuKurus / 500;
    paraUstuKurus %= 500;

    bir = paraUstuKurus / 100;
    paraUstuKurus %= 100;

    elliKurus = paraUstuKurus / 50;
    paraUstuKurus %= 50;

    yirmiBesKurus = paraUstuKurus / 25;
    paraUstuKurus %= 25;

    onKurus = paraUstuKurus / 10;
    paraUstuKurus %= 10;

    besKurus = paraUstuKurus / 5;
    paraUstuKurus %= 5;

    birKurus = paraUstuKurus;

    toplamKupur = ikiYuz + yuz + elli + yirmi + on
                + bes + bir + elliKurus + yirmiBesKurus
                + onKurus + besKurus + birKurus;

    printf("\nPara ustu kupur dagilimi:\n");
    printf("200 TL: %d adet\n", ikiYuz);
    printf("100 TL: %d adet\n", yuz);
    printf("50 TL: %d adet\n", elli);
    printf("20 TL: %d adet\n", yirmi);
    printf("10 TL: %d adet\n", on);
    printf("5 TL: %d adet\n", bes);
    printf("1 TL: %d adet\n", bir);
    printf("50 kurus: %d adet\n", elliKurus);
    printf("25 kurus: %d adet\n", yirmiBesKurus);
    printf("10 kurus: %d adet\n", onKurus);
    printf("5 kurus: %d adet\n", besKurus);
    printf("1 kurus: %d adet\n", birKurus);
    printf("Toplam kupur sayisi: %d\n", toplamKupur);

    return 0;
}
