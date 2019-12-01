#pragma once
#include <string>
namespace Conversions {
	class Converter {
	public:
		std::string result;
		std::string Meters(std::string output, std::string inputValue);
		std::string Centimeters(std::string output, std::string inputValue);
		std::string Kilometers(std::string output, std::string inputValue);
		std::string Millimeters(std::string output, std::string inputValue);
		std::string Yards(std::string output, std::string inputValue);
		std::string Mile(std::string output, std::string inputValue);
		std::string Foot(std::string output, std::string inputValue);
		std::string Inch(std::string output, std::string inputValue);
		std::string NauticalMile(std::string output, std::string inputValue);

		std::string CubicMeters(std::string output, std::string inputValue);
		std::string CubicCentimeters(std::string output, std::string inputValue);
		std::string Liter(std::string output, std::string inputValue);
		std::string Millileter(std::string output, std::string inputValue);
		std::string Pint(std::string output, std::string inputValue);
		std::string Quart(std::string output, std::string inputValue);
		std::string Gallon(std::string output, std::string inputValue);

		std::string Milligram(std::string output, std::string inputValue);
		std::string Gram(std::string output, std::string inputValue);
		std::string Kilogram(std::string output, std::string inputValue);
		std::string Ounce(std::string output, std::string inputValue);
		std::string Pounds(std::string output, std::string inputValue);
		std::string Stone(std::string output, std::string inputValue);

		std::string MilesPerHour(std::string output, std::string inputValue);
		std::string KilometersPerHour(std::string output, std::string inputValue);
		std::string FeetPerSecond(std::string output, std::string inputValue);
		std::string MetersPerSecond(std::string output, std::string inputValue);
		std::string Knot(std::string output, std::string inputValue);

		std::string Degrees(std::string output, std::string inputValue);
		std::string Milliradians(std::string output, std::string inputValue);
		std::string Radians(std::string output, std::string inputValue);
		std::string Gradians(std::string output, std::string inputValue);
		std::string Cycles(std::string output, std::string inputValue);
		std::string Revolution(std::string output, std::string inputValue);
		std::string Arcsecond(std::string output, std::string inputValue);
		std::string Arcminute(std::string output, std::string inputValue);
	};
}