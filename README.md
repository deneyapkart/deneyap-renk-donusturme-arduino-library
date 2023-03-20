# deneyap-renk-donusturme-arduino-library
The library contains simple functions to convert colors between different systems (RGB, HSV, HSL, temperature)

### SDK
List fo Functions

```c++
static void RgbToHsv(uint8_t r, uint8_t g, uint8_t b, double &hue, double &saturation, double &value);
static void RgbToHsl(uint8_t red, uint8_t green, uint8_t blue, double &hue, double &saturation, double &lighting);
static void HsvToRgb(double hue, double saturation, double value, uint8_t & red, uint8_t & green, uint8_t & blue);
static void HslToRgb(double hue, double saturation, double lightness, uint8_t &red, uint8_t &green, uint8_t &blue);
static void TemperatureToRgb(int kelvin, uint8_t & red, uint8_t & green, uint8_t & blue);
static void HexToRgb(String hex, uint8_t& r, uint8_t& g, uint8_t& b);
static void RgbToHex(uint8_t r, uint8_t g, uint8_t b, String &hex);
```

### Example
This is an example.

```c++
#include "Deneyap_RenkDonusturme.h"

void setup()
{
	uint8_t red = 50;
	uint8_t green = 100;
	uint8_t blue = 150;
	double hue, saturation, lighting, value;

	ColorConverter::RgbToHsl(red, green, blue, hue, saturation, lighting);
	ColorConverter::RgbToHsv(red, green, blue, hue, saturation, value);
	ColorConverter::HslToRgb(hue, saturation, lighting, red, green, blue);
	ColorConverter::HsvToRgb(hue, saturation, lighting, red, green, blue);

	ColorConverter::TemperatureToRgb(15000, red, green, blue);

	String hex = "010509";
	ColorConverter::HexToRgb(hex, red, green, blue);
	ColorConverter::RgbToHex(red, green, blue, hex);
}

void loop()
{

}
```

## :bookmark_tabs:License Information
Based on Arduino-ColorConverter Library by Luis Llamas [SORUCE](https://github.com/luisllamasbinaburo/Arduino-ColorConverter).
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-renk-donusturme-arduino-library/blob/master/LICENSE) file for license information.
