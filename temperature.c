/*
 * temperature.c
 *
 *  Created on: 12 mai 2025
 *      Author: Admin
 */

#include "temperature.h"
#include "sl_sensor_rht.h"

int getTemp()
{
  uint32_t rh;
  int32_t t;
  // activer le capteur
  sl_sensor_rht_init();

  sl_sensor_rht_get(&rh,&t);

  // désactiver le capteur
  sl_sensor_rht_deinit();
  return t/10;
}

