connect -url tcp:127.0.0.1:3121
source C:/Users/user/Desktop/lab2_simple_arm/lab2_simple_arm/lab2_simple_arm.sdk/hw_platform_0/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zed 210248650939"} -index 0
loadhw C:/Users/user/Desktop/lab2_simple_arm/lab2_simple_arm/lab2_simple_arm.sdk/hw_platform_0/system.hdf
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zed 210248650939"} -index 0
stop
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248650939"} -index 0
rst -processor
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248650939"} -index 0
dow C:/Users/user/Desktop/lab2_simple_arm/lab2_simple_arm/lab2_simple_arm.sdk/lab2_simple/Debug/lab2_simple.elf
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248650939"} -index 0
con
