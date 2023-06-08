#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(my_modul, LOG_LEVEL_DBG);

#define SLEEP_INTERVALL   	2000

void main(void){
	int counter=0;
	while(1){
		printk("Hello World! %s\n", CONFIG_BOARD);

		int16_t error_code=2;
		LOG_ERR("An error occurred: %d", error_code);

		LOG_WRN("Warning");

		LOG_INF("Hello, this is an informational message: %d",counter);
		counter++;

		float temp=32.56;
		LOG_DBG("Sensorvalue is: %f",temp);

		k_msleep(SLEEP_INTERVALL);
	}
}
