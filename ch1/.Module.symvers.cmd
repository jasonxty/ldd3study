cmd_/home/tianyxu/img/ldd3/ch1/Module.symvers := sed 's/ko$$/o/' /home/tianyxu/img/ldd3/ch1/modules.order | scripts/mod/modpost     -o /home/tianyxu/img/ldd3/ch1/Module.symvers -e -i Module.symvers   -T -