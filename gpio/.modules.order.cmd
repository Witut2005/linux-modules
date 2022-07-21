cmd_/home/witut/modules/gpio/modules.order := {   echo /home/witut/modules/gpio/gpio.ko; :; } | awk '!x[$$0]++' - > /home/witut/modules/gpio/modules.order
