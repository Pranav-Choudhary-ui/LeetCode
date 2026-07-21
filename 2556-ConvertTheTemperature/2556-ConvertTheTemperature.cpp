// Last updated: 21/07/2026, 09:04:59
class Solution {
public:
    vector<double> convertTemperature(double Celsius) {
        vector<double> res;
        double Kelvin = Celsius + 273.15;
        double Fahrenheit = Celsius * 1.80 + 32.00;
        res.push_back(Kelvin);
        res.push_back(Fahrenheit);
        return res;
    }
};