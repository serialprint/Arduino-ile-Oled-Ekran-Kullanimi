#include <Adafruit_SSD1306.h>
 
//Reset pini ayarlanıyor ve ekran boyutu hatası olmasına karşın uyarı devreye alınıyor.
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
#define SSD1306_LCDHEIGHT 64
#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif
 
void setup() {
  //Setup kısmında SSD1306'nın çalışmaya başlaması için gereken kod giriliyor.
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}
 
void loop() {
  display.setTextSize(2); //Ekranda görüntülenecek metnin font büyüklüğü. 1, 2, 3 ve 4 değerlerini alabilir.
  display.setTextColor(WHITE); //Ekrandaki yazı rengi. Genelde WHITE.
  display.setCursor(35,0); //Metnin X ve Y eksenlerindeki piksel cinsinden başlangıç noktası. 0, 0 sol üst köşeyi ifade eder.
  display.clearDisplay(); //Ekranın yenilenmesini yani temizlenmesini sağlar.
  display.print("Serial"); //Ekranda görünmesini istediğimiz metin. Serial.print() ile aynı şekilde kullanılır.
  display.setCursor(35,16); //Metnin X ve Y eksenlerindeki piksel cinsinden başlangıç noktası. 0, 0 sol üst köşeyi ifade eder.
  display.print("Print"); //Ekranda görünmesini istediğimiz metin. Serial.print() ile aynı şekilde kullanılır.
  display.display(); //Yapılan ayarlar ile birlikte istenilen değerlerin ekranda görüntülenmesini sağlar. 
}
