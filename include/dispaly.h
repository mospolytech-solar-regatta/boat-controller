#ifndef SOLAR_DISPALY_H
#define SOLAR_DISPALY_H

#include <Arduino.h>
#include "define.h"
#include "external.h"
#include "log.h"

namespace Display {

    void init(unsigned long baud);

    String read();

    void resetPoints();

    void controllerWatts(long value);

    void timeToGo(String value);

    void controllerVolts(long value);

    void controllerTemp(double value);

    void MPPTVolts(long value);

    void MPPTWatt(long value);

    void motorTemp(double temp);

    void motorRevols(int revols);

    void distance(long dist);

    void satellitesNum(int number);

    void pointA(float lat, float lng);

    void laps(float laps);

    void time(String time);

    void speed(float speed);
}

#endif //SOLAR_DISPALY_H
