/*
*****************************************************************************
@file         Deneyap_RenkDonusturme.cpp
@mainpage     Deneyap Color Converter Arduino library header file
@version      v1.0.0
@date         March 20, 2023
@brief        This file contains all function prototypes and macros
              for Deneyap Color Converter Arduino library
*****************************************************************************
*/

#ifndef _COLOERCONVERTER_h
#define _COLOERCONVERTER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class ColorConverter
{

public:
	static void RgbToHsv(uint8_t r, uint8_t g, uint8_t b, double &hue, double &saturation, double &value);

	static void RgbToHsl(uint8_t red, uint8_t green, uint8_t blue, double &hue, double &saturation, double &lighting);

	static void HsvToRgb(double hue, double saturation, double value, uint8_t & red, uint8_t & green, uint8_t & blue);

	static void HslToRgb(double hue, double saturation, double lightness, uint8_t &red, uint8_t &green, uint8_t &blue);

	static void TemperatureToRgb(int kelvin, uint8_t & red, uint8_t & green, uint8_t & blue);

	static void HexToRgb(String hex, uint8_t& r, uint8_t& g, uint8_t& b);

	static void RgbToHex(uint8_t r, uint8_t g, uint8_t b, String &hex);

private:
	static double threeway_max(double a, double b, double c);
	static double threeway_min(double a, double b, double c);
	static double hue2rgb(double p, double q, double t);
};
#endif
