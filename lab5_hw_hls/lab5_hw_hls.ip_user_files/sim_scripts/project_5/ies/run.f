-makelib ies/xil_defaultlib -sv \
  "/opt/Xilinx/Vivado/2017.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "/opt/Xilinx/Vivado/2017.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
  "/opt/Xilinx/Vivado/2017.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib ies/xpm \
  "/opt/Xilinx/Vivado/2017.1/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/project_5/hdl/project_5.v" \
-endlib
-makelib ies/axi_infrastructure_v1_1_0 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/7e3a/hdl/axi_infrastructure_v1_1_vl_rfs.v" \
-endlib
-makelib ies/xil_common_vip_v1_0_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/2ad9/hdl/xil_common_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/16a2/hdl/sc_util_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/axi_protocol_checker_v1_1_13 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/8017/hdl/axi_protocol_checker_v1_1_vl_rfs.sv" \
-endlib
-makelib ies/axi_vip_v1_0_1 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/856d/hdl/axi_vip_v1_0_vl_rfs.sv" \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/d5eb/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/project_5/ip/project_5_processing_system7_0_1/sim/project_5_processing_system7_0_1.v" \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/b53b/hdl/verilog/ip_sobel_AXILiteS_s_axi.v" \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/b53b/hdl/verilog/ip_sobel_mul_6ns_bkb.v" \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/b53b/hdl/verilog/ip_sobel_output_img_m_axi.v" \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/b53b/hdl/verilog/ip_sobel_input_img_m_axi.v" \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/b53b/hdl/verilog/ip_sobel.v" \
  "../../../bd/project_5/ip/project_5_ip_sobel_0_0/sim/project_5_ip_sobel_0_0.v" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/aa1d/hdl/sc_axi2sc_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib -sv \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_42/sim/bd_7baa_s00a2s_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_51/sim/bd_7baa_s01a2s_1.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/d148/hdl/sc_sc2axi_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib -sv \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_57/sim/bd_7baa_m00s2a_1.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/986a/hdl/sc_exit_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib -sv \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_63/sim/bd_7baa_m00e_1.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/879e/hdl/sc_node_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib -sv \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_58/sim/bd_7baa_m00arn_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_59/sim/bd_7baa_m00rn_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_60/sim/bd_7baa_m00awn_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_61/sim/bd_7baa_m00wn_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_62/sim/bd_7baa_m00bn_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_52/sim/bd_7baa_sarn_3.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_53/sim/bd_7baa_srn_3.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_54/sim/bd_7baa_sawn_3.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_55/sim/bd_7baa_swn_3.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_56/sim/bd_7baa_sbn_3.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/5300/hdl/sc_mmu_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib -sv \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_48/sim/bd_7baa_s01mmu_1.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/3d93/hdl/sc_transaction_regulator_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib -sv \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_49/sim/bd_7baa_s01tr_1.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/cc66/hdl/sc_si_converter_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib -sv \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_50/sim/bd_7baa_s01sic_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_43/sim/bd_7baa_sarn_2.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_44/sim/bd_7baa_srn_2.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_45/sim/bd_7baa_sawn_2.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_46/sim/bd_7baa_swn_2.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_47/sim/bd_7baa_sbn_2.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_39/sim/bd_7baa_s00mmu_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_40/sim/bd_7baa_s00tr_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_41/sim/bd_7baa_s00sic_1.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/7daf/hdl/sc_switchboard_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib -sv \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_34/sim/bd_7baa_arsw_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_35/sim/bd_7baa_rsw_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_36/sim/bd_7baa_awsw_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_37/sim/bd_7baa_wsw_1.sv" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_38/sim/bd_7baa_bsw_1.sv" \
-endlib
-makelib ies/xlconstant_v1_1_3 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/45df/hdl/xlconstant_v1_1_vl_rfs.v" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_32/sim/bd_7baa_one_1.v" \
-endlib
-makelib ies/lib_cdc_v1_0_2 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/52cb/hdl/lib_cdc_v1_0_rfs.vhd" \
-endlib
-makelib ies/proc_sys_reset_v5_0_11 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/5db7/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/ip/ip_33/sim/bd_7baa_psr_aclk_1.vhd" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/project_5/ip/project_5_axi_smc_0/bd_0/hdl/bd_7baa.v" \
  "../../../bd/project_5/ip/project_5_axi_smc_0/sim/project_5_axi_smc_0.v" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/project_5/ip/project_5_rst_ps7_0_100M_0/sim/project_5_rst_ps7_0_100M_0.vhd" \
-endlib
-makelib ies/generic_baseblocks_v2_1_0 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/f9c1/hdl/generic_baseblocks_v2_1_vl_rfs.v" \
-endlib
-makelib ies/fifo_generator_v13_1_4 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/ebc2/simulation/fifo_generator_vlog_beh.v" \
-endlib
-makelib ies/fifo_generator_v13_1_4 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/ebc2/hdl/fifo_generator_v13_1_rfs.vhd" \
-endlib
-makelib ies/fifo_generator_v13_1_4 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/ebc2/hdl/fifo_generator_v13_1_rfs.v" \
-endlib
-makelib ies/axi_data_fifo_v2_1_11 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/5235/hdl/axi_data_fifo_v2_1_vl_rfs.v" \
-endlib
-makelib ies/axi_register_slice_v2_1_12 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/0e33/hdl/axi_register_slice_v2_1_vl_rfs.v" \
-endlib
-makelib ies/axi_protocol_converter_v2_1_12 \
  "../../../../lab5_hw_hls.srcs/sources_1/bd/project_5/ipshared/138d/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/project_5/ip/project_5_auto_pc_2/sim/project_5_auto_pc_2.v" \
-endlib
-makelib ies/xil_defaultlib \
  glbl.v
-endlib
