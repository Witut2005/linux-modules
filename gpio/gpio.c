
#include <linux/module.h>
#include <linux/gpio.h>
#include <linux/delay.h>
#include <linux/interrupt.h>

#define GPIO_OK 0
#define GPIO_ERROR 1
#define GPIO_PIN 23
#define GPIO_OUTPUT 0x0
#define GPIO_INPUT  0x1
#define GPIO_PIN_ON 0x1
#define GPIO_PIN_OFF 0x0


static int __init gpio_init(void) // <-- entry
{
    if(!gpio_is_valid(GPIO_PIN))
        return GPIO_ERROR;

    if(gpio_request(GPIO_PIN, "gpio pin :))") < 0)
        return GPIO_ERROR;


    gpio_direction_output(GPIO_PIN, GPIO_OUTPUT);
    gpio_set_value(GPIO_PIN, GPIO_PIN_ON);

    return GPIO_OK;

}


static void __exit gpio_exit(void) // <-- executed when removed (deconstructor)
{
    gpio_set_value(GPIO_PIN, GPIO_PIN_OFF);
}

module_init(gpio_init);
module_exit(gpio_exit);
MODULE_LICENSE("GPL");


