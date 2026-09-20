/*******************************************************
   MINI EVAPORATIVE AIR COOLER
   ESP32 + DHT22 + Blynk IoT

   DHT22:
   VCC  -> 3.3V
   DATA -> GPIO 4
   GND  -> GND

   Blynk:
   V0 -> Temperature
   V1 -> Humidity
********************************************************/

// -------- BLYNK DETAILS --------
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Mini Air Cooler"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

// -------- LIBRARIES --------
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

// -------- WIFI DETAILS --------
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

// -------- DHT22 SETTINGS --------
#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

// -------- BLYNK TIMER --------
BlynkTimer timer;

// -------- SENSOR FUNCTION --------
void sendSensorData()
{
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check if DHT22 reading is valid
  if (isnan(temperature) || isnan(humidity))
  {
    Serial.println("ERROR: Failed to read DHT22!");
    return;
  }

  // Send temperature to Blynk V0
  Blynk.virtualWrite(V0, temperature);

  // Send humidity to Blynk V1
  Blynk.virtualWrite(V1, humidity);

  // Display values in Serial Monitor
  Serial.println("---------------------------");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.println("---------------------------");
}

void setup()
{
  // Start Serial Monitor
  Serial.begin(115200);

  // Start DHT22
  dht.begin();

  Serial.println();
  Serial.println("Mini Evaporative Air Cooler");
  Serial.println("Starting DHT22...");

  // Connect ESP32 to Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Connected to Blynk!");

  // Read sensor every 2 seconds
  timer.setInterval(2000L, sendSensorData);
}

void loop()
{
  // Run Blynk
  Blynk.run();

  // Run timer
  timer.run();
}