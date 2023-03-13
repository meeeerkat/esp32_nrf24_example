#include "esp_system.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "nrf24.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"



nrf24_t* nrf;
nrf24_config_t nrf_config;


void app_main(void) {
  nrf = nrf24__init(23, 23, 23, 23, 23);

  nrf24__get_config(nrf, &nrf_config);
  
  nrf24_config__print(&nrf_config);



  //nrf24__set_config(nrf, &nrf_config);


  vTaskDelay(pdMS_TO_TICKS(100000));
}
