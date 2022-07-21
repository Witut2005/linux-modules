cmd_/home/witut/modules/modules.order := {   echo /home/witut/modules/hello.ko; :; } | awk '!x[$$0]++' - > /home/witut/modules/modules.order
