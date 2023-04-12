#ifndef _MQ2SENSOR_H_
#define _MQ2SENSOR_H_

class MQ2Sensor {
  public:
    MQ2Sensor(int pin);
    void begin();
    bool detect();
  private:
    int _pin;
};

#endif
