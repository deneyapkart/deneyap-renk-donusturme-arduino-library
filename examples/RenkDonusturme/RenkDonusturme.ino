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
