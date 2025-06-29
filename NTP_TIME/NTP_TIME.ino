#include <WiFi.h>
#include <WiFiUdp.h>
#include <NTPClient.h>
#include <TimeLib.h>
#include <LiquidCrystal_I2C.h>


const char* ssid     = "Prateek";
const char* password = "justdoelectronics@#12345";

// NTP Server settings
const char* ntpServer = "pool.ntp.org";
const long  utcOffsetInSeconds = 19800; 

LiquidCrystal_I2C lcd(0x27, 16, 2);

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, ntpServer, utcOffsetInSeconds);

void setup() {
  Serial.begin(115200);
  delay(1000);

  lcd.init();
  lcd.backlight();
  WiFi.begin(ssid, password);
  lcd.setCursor(0, 0);
  lcd.print("Connecting WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("WiFi Connected");
  timeClient.begin();
  timeClient.update();
  delay(1000);
}

void loop() {
  timeClient.update();

  unsigned long epochTime = timeClient.getEpochTime();
  setTime(epochTime);

  char timeStr[9]; 
  sprintf(timeStr, "%02d:%02d:%02d", hour(), minute(), second());

  char dateStr[17]; 
  sprintf(dateStr, "%02d-%02d-%04d", day(), month(), year());

  lcd.setCursor(0, 0);
  lcd.print("Time: ");
  lcd.print(timeStr);

  lcd.setCursor(0, 1);
  lcd.print("Date: ");
  lcd.print(dateStr);

  delay(1000);
}
