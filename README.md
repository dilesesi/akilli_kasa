# Akıllı Kasa Ödevi – Ondalıklı Sayılarda Hassasiyet ve Yuvarlama

## 1. Deneyin Amacı

Bu deneyin amacı, C programlama dilinde ondalıklı sayıların bilgisayarda saklanması sırasında oluşabilecek hassasiyet sorunlarını incelemek ve para üstünü doğru hesaplamak için uygun bir yuvarlama yöntemi kullanmaktır.

## 2. Yuvarlama Yapılmadan Para Üstünün Hesaplanması
Deneyde ürün tutarı 18,70 TL, müşterinin ödediği tutar ise 20,00 TL olarak alınmıştır.
Para üstü şu şekilde hesaplanır:
20,00 - 18,70 = 1,30 TL
Kuruşa çevirmek için sonuç 100 ile çarpılır:
1,30 × 100 = 130 kuruş
İlk yöntemde bu sonuç doğrudan tam sayıya dönüştürülür:

```c
paraUstuKurus = (int)((odenenPara - urunTutari) * 100.0);
```

Ancak `double` türündeki sayılar bilgisayarda ikili sayı sistemiyle saklanır. Bazı ondalıklı sayılar bu sistemde tam olarak temsil edilemediğinden işlemler sırasında çok küçük hassasiyet hataları oluşabilir. Sonuç 130 yerine 129,999999 gibi bir değer olursa `(int)` dönüşümü kesirli kısmı atar ve sonuç 129 olur
Bu nedenle doğrudan tam sayıya dönüştürme yöntemi bazı durumlarda bir kuruşluk hataya neden olabilir. Bununla birlikte, 18,70 TL ve 20,00 TL örneğinde bu hatanın mutlaka oluşacağı söylenemez; sonuç kullanılan hesaplamaya bağlıdır.

## 3. Doğru Yuvarlama Yöntemi

Bu sorunu azaltmak için kuruşa çevrilen sonuca 0,5 eklenip ardından tam sayıya dönüştürme işlemi uygulanmıştır:

```c
paraUstuKurus =
    (int)((odenenPara - urunTutari) * 100.0 + 0.5);
```

Bu yöntemde sonuç tam sayıya dönüştürülmeden önce 0,5 eklenir. Böylece pozitif para üstlerinde en yakın tam sayıya yuvarlama yapılması amaçlanır.

Örnekte doğru para üstü 1,30 TL, yani 130 kuruştur. Programda bulunan 130 kuruş, kupürlere ayrılarak müşteriye verilecek para üstü hesaplanır.

## 4. Sonuç

Deney sonucunda, ondalıklı sayıların bilgisayarda saklanması sırasında hassasiyet sorunları oluşabileceği görülmüştür. Bir ondalıklı sayının doğrudan tam sayıya dönüştürülmesi kesirli kısmın atılmasına neden olabilir. Bu nedenle para üstü hesaplamasında kuruşa çevirme işleminden sonra uygun bir yuvarlama yöntemi kullanılmıştır.

Programda para üstü kuruş cinsinden tam sayı olarak tutulmuş, kupürler büyükten küçüğe doğru bölme ve kalan işlemleriyle hesaplanmış ve müşteriye verilen toplam kupür sayısı ekrana yazdırılmıştır.
