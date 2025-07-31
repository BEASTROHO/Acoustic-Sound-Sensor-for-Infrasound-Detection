#include "stm32f1xx_hal.h"
#include "adc_config.h"
#include "filters.h"
#include "output.h"
#include "utils.h"

int main(void) {
    HAL_Init();
    SystemClock_Config();
    ADC_Init();
    Output_Init();

    while (1) {
        uint16_t adc_value = Read_ADC();
        float voltage = Convert_To_Voltage(adc_value);
        float filtered = Apply_LowPass_Filter(voltage);

        if (filtered > INFRA_THRESHOLD) {
            Trigger_Alert();
        }

        Delay_ms(50);  // ~20 Hz sampling
    }
}
