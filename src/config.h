// config.h
#ifndef CONFIG_H
#define CONFIG_H


const int mqttPort = 1883;
//Future release
const bool sensorZ2 = true;

// network id & ext.sonde id if they are known
uint8_t network_id[] = {0x05, 0xD6, 0x2D, 0x4C};

uint8_t extSon_id = 0xFF;
#endif // CONFIG_H