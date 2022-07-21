cmd_/home/witut/modules/Module.symvers := sed 's/\.ko$$/\.o/' /home/witut/modules/modules.order | scripts/mod/modpost -m -a  -o /home/witut/modules/Module.symvers -e -i Module.symvers   -T -
