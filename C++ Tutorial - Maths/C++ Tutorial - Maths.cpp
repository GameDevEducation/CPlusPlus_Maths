#include <iostream>
#include <cmath>
#include <numbers>

template <typename T>
T Deg2Rad(T inDegrees)
{
	return inDegrees * std::numbers::pi_v<T> / 180.0f;
}

template <typename T>
T Rad2Deg(T inRadians)
{
	return inRadians * 180.0f / std::numbers::pi_v<T>;
}

int main()
{
	using namespace std;

	float value1 = -1.234f;
	float value2 = 1.234f;
	int value3 = -503;
	int value4 = 124;

	{ // absolute value
		cout << "Absolute Value" << endl
			 << value1 << " -> " << abs(value1) << endl
			 << value2 << " -> " << abs(value2) << endl
			 << value3 << " -> " << abs(value3) << endl
			 << value4 << " -> " << abs(value4) << endl;
	}

	{ // rounding
		cout << "Ceiling" << endl
			 << value1 << " -> " << ceil(value1) << endl
			 << value2 << " -> " << ceil(value2) << endl;
		cout << "Floor" << endl
			 << value1 << " -> " << floor(value1) << endl
			 << value2 << " -> " << floor(value2) << endl;
		cout << "Round" << endl
			 << value1 << " -> " << round(value1) << endl
			 << value2 << " -> " << round(value2) << endl;
		cout << "Sign" << endl
			<< value1 << " -> " << copysign(1.0f, value1) << endl
			<< value2 << " -> " << copysign(1.0f, value2) << endl;
	}

	{ // sqrt/power
		cout << "Sqrt" << endl
			 << "16" << " -> " << sqrt(16.0f) << endl;
		cout << "Power" << endl
			<< "4" << " -> " << pow(4.0f, 3.0f) << endl;
	}

	{ // min/max
		cout << "Min" << endl
			<< "1, 2" << " -> " << min(1, 2) << endl;
		cout << "Max" << endl
			<< "1, 2" << " -> " << max(1, 2) << endl;
	}

	{ // pi
		cout << "Pi" << endl
			<< numbers::pi << endl;
	}

	{ // conversions
		cout << "Conversions" << endl
			 << 60.0f << " -> " << Deg2Rad(60.0f) << " -> " << Rad2Deg(Deg2Rad(60.0f)) << endl;
	}

	{ // trigonometry
		cout << "sin" << endl
			 << 0.f << " -> " << sin(0.f * numbers::pi / 180.f) << endl
			 << 90.f << " -> " << sin(90.f * numbers::pi / 180.f) << endl;
		cout << "cos" << endl
			 << 0.f << " -> " << cos(0.f * numbers::pi / 180.f) << endl
			 << 90.f << " -> " << cos(90.f * numbers::pi / 180.f) << endl;
		cout << "tan" << endl
			 << 0.f << " -> " << tan(0.f * numbers::pi / 180.f) << endl
			 << 45.f << " -> " << tan(45.f * numbers::pi / 180.f) << endl;

		cout << "asin" << endl
			<< 0.5f << " -> " << asin(0.5f) * 180.0f / numbers::pi << endl;
		cout << "acos" << endl
			<< 0.5f << " -> " << acos(0.5f) * 180.0f / numbers::pi << endl;
		cout << "atan" << endl
			<< 0.5f << " -> " << atan(0.5f) * 180.0f / numbers::pi << endl;
		cout << "atan2" << endl
			<< 0.25f << "," << 0.5f << " -> " << atan2(0.5f, 0.25f) * 180.0f / numbers::pi << endl;
	}
}
