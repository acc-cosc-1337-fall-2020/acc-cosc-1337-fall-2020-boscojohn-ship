//temperature_data.h
#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H
#include <fstream>
#include <vector>
#include <string>
#include "temperature.h"


class TemperatureData
{
public:
    void save_temps(std::vector<Temperature>& ts);
    std::vector<Temperature> get_temps() const;

private:
    const std::string file_name{"temperature.dat"};
};

#endif