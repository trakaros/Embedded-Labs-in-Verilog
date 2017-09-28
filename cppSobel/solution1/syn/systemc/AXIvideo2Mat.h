// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AXIvideo2Mat_HH_
#define _AXIvideo2Mat_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct AXIvideo2Mat : public sc_module {
    // Port declarations 21
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > INPUT_STREAM_TDATA;
    sc_in< sc_logic > INPUT_STREAM_TVALID;
    sc_out< sc_logic > INPUT_STREAM_TREADY;
    sc_in< sc_lv<4> > INPUT_STREAM_TKEEP;
    sc_in< sc_lv<4> > INPUT_STREAM_TSTRB;
    sc_in< sc_lv<1> > INPUT_STREAM_TUSER;
    sc_in< sc_lv<1> > INPUT_STREAM_TLAST;
    sc_in< sc_lv<1> > INPUT_STREAM_TID;
    sc_in< sc_lv<1> > INPUT_STREAM_TDEST;
    sc_in< sc_lv<32> > rows;
    sc_in< sc_lv<32> > cols;
    sc_out< sc_lv<8> > img_0_data_stream_0_din;
    sc_in< sc_logic > img_0_data_stream_0_full_n;
    sc_out< sc_logic > img_0_data_stream_0_write;


    // Module declarations
    AXIvideo2Mat(sc_module_name name);
    SC_HAS_PROCESS(AXIvideo2Mat);

    ~AXIvideo2Mat();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > INPUT_STREAM_V_data_V_0_data_out;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_vld_in;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_vld_out;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_ack_in;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_ack_out;
    sc_signal< sc_lv<32> > INPUT_STREAM_V_data_V_0_payload_A;
    sc_signal< sc_lv<32> > INPUT_STREAM_V_data_V_0_payload_B;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_sel_rd;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_sel_wr;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_sel;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_load_A;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_load_B;
    sc_signal< sc_lv<2> > INPUT_STREAM_V_data_V_0_state;
    sc_signal< sc_logic > INPUT_STREAM_V_data_V_0_state_cmp_full;
    sc_signal< sc_lv<1> > INPUT_STREAM_V_user_V_0_data_out;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_vld_in;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_vld_out;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_ack_in;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_ack_out;
    sc_signal< sc_lv<1> > INPUT_STREAM_V_user_V_0_payload_A;
    sc_signal< sc_lv<1> > INPUT_STREAM_V_user_V_0_payload_B;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_sel_rd;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_sel_wr;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_sel;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_load_A;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_load_B;
    sc_signal< sc_lv<2> > INPUT_STREAM_V_user_V_0_state;
    sc_signal< sc_logic > INPUT_STREAM_V_user_V_0_state_cmp_full;
    sc_signal< sc_lv<1> > INPUT_STREAM_V_last_V_0_data_out;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_vld_in;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_vld_out;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_ack_in;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_ack_out;
    sc_signal< sc_lv<1> > INPUT_STREAM_V_last_V_0_payload_A;
    sc_signal< sc_lv<1> > INPUT_STREAM_V_last_V_0_payload_B;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_sel_rd;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_sel_wr;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_sel;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_load_A;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_load_B;
    sc_signal< sc_lv<2> > INPUT_STREAM_V_last_V_0_state;
    sc_signal< sc_logic > INPUT_STREAM_V_last_V_0_state_cmp_full;
    sc_signal< sc_logic > INPUT_STREAM_V_dest_V_0_vld_in;
    sc_signal< sc_logic > INPUT_STREAM_V_dest_V_0_ack_out;
    sc_signal< sc_lv<2> > INPUT_STREAM_V_dest_V_0_state;
    sc_signal< sc_logic > INPUT_STREAM_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage0_flag00000000;
    sc_signal< sc_lv<1> > exitcond_i_i_reg_376;
    sc_signal< sc_lv<1> > brmerge_i_i_reg_385;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< bool > ap_block_pp2_stage0_flag00000000;
    sc_signal< sc_lv<1> > eol_2_i_i_reg_234;
    sc_signal< sc_logic > img_0_data_stream_0_blk_n;
    sc_signal< sc_lv<6> > p_2_i_i_reg_164;
    sc_signal< sc_lv<1> > eol_i_i_reg_175;
    sc_signal< sc_lv<1> > eol_reg_187;
    sc_signal< sc_lv<32> > axi_data_V_1_i_i_reg_198;
    sc_signal< sc_lv<1> > axi_last_V_3_i_i_reg_245;
    sc_signal< sc_lv<32> > axi_data_V_3_i_i_reg_257;
    sc_signal< sc_lv<6> > tmp_fu_279_p1;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<6> > tmp_9_fu_283_p1;
    sc_signal< sc_lv<32> > tmp_data_V_reg_347;
    sc_signal< sc_lv<1> > tmp_last_V_reg_355;
    sc_signal< sc_lv<1> > exitcond2_i_i_fu_296_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<6> > i_V_fu_301_p2;
    sc_signal< sc_lv<6> > i_V_reg_371;
    sc_signal< sc_lv<1> > exitcond_i_i_fu_307_p2;
    sc_signal< bool > ap_block_state5_pp1_stage0_iter0;
    sc_signal< bool > ap_predicate_op62_read_state6;
    sc_signal< bool > ap_block_state6_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_flag00011001;
    sc_signal< sc_lv<6> > j_V_fu_312_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<1> > brmerge_i_i_fu_321_p2;
    sc_signal< bool > ap_block_state8_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state9_pp2_stage0_iter1;
    sc_signal< bool > ap_block_pp2_stage0_flag00011001;
    sc_signal< bool > ap_block_pp1_stage0_flag00011011;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< bool > ap_block_pp2_stage0_flag00011011;
    sc_signal< sc_lv<1> > eol_2_i_i_phi_fu_237_p4;
    sc_signal< sc_lv<1> > axi_last_V1_i_i_reg_133;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > axi_data_V1_i_i_reg_143;
    sc_signal< sc_lv<6> > p_i_i_reg_153;
    sc_signal< sc_lv<1> > eol_i_i_phi_fu_179_p4;
    sc_signal< sc_lv<1> > axi_last_V_2_i_i_phi_fu_214_p4;
    sc_signal< sc_lv<32> > p_Val2_s_phi_fu_226_p4;
    sc_signal< sc_lv<1> > ap_phi_precharge_reg_pp1_iter1_axi_last_V_2_i_i_reg_209;
    sc_signal< sc_lv<32> > ap_phi_precharge_reg_pp1_iter1_p_Val2_s_reg_222;
    sc_signal< bool > ap_block_pp1_stage0_flag00001001;
    sc_signal< sc_lv<1> > sof_1_i_i_fu_92;
    sc_signal< sc_lv<1> > tmp_user_V_fu_287_p1;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< bool > ap_condition_487;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_pp1_stage0;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_pp2_stage0;
    static const sc_lv<8> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<6> ap_const_lv6_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_INPUT_STREAM_TDATA_blk_n();
    void thread_INPUT_STREAM_TREADY();
    void thread_INPUT_STREAM_V_data_V_0_ack_in();
    void thread_INPUT_STREAM_V_data_V_0_ack_out();
    void thread_INPUT_STREAM_V_data_V_0_data_out();
    void thread_INPUT_STREAM_V_data_V_0_load_A();
    void thread_INPUT_STREAM_V_data_V_0_load_B();
    void thread_INPUT_STREAM_V_data_V_0_sel();
    void thread_INPUT_STREAM_V_data_V_0_state_cmp_full();
    void thread_INPUT_STREAM_V_data_V_0_vld_in();
    void thread_INPUT_STREAM_V_data_V_0_vld_out();
    void thread_INPUT_STREAM_V_dest_V_0_ack_out();
    void thread_INPUT_STREAM_V_dest_V_0_vld_in();
    void thread_INPUT_STREAM_V_last_V_0_ack_in();
    void thread_INPUT_STREAM_V_last_V_0_ack_out();
    void thread_INPUT_STREAM_V_last_V_0_data_out();
    void thread_INPUT_STREAM_V_last_V_0_load_A();
    void thread_INPUT_STREAM_V_last_V_0_load_B();
    void thread_INPUT_STREAM_V_last_V_0_sel();
    void thread_INPUT_STREAM_V_last_V_0_state_cmp_full();
    void thread_INPUT_STREAM_V_last_V_0_vld_in();
    void thread_INPUT_STREAM_V_last_V_0_vld_out();
    void thread_INPUT_STREAM_V_user_V_0_ack_in();
    void thread_INPUT_STREAM_V_user_V_0_ack_out();
    void thread_INPUT_STREAM_V_user_V_0_data_out();
    void thread_INPUT_STREAM_V_user_V_0_load_A();
    void thread_INPUT_STREAM_V_user_V_0_load_B();
    void thread_INPUT_STREAM_V_user_V_0_sel();
    void thread_INPUT_STREAM_V_user_V_0_state_cmp_full();
    void thread_INPUT_STREAM_V_user_V_0_vld_in();
    void thread_INPUT_STREAM_V_user_V_0_vld_out();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp1_stage0_flag00000000();
    void thread_ap_block_pp1_stage0_flag00001001();
    void thread_ap_block_pp1_stage0_flag00011001();
    void thread_ap_block_pp1_stage0_flag00011011();
    void thread_ap_block_pp2_stage0_flag00000000();
    void thread_ap_block_pp2_stage0_flag00011001();
    void thread_ap_block_pp2_stage0_flag00011011();
    void thread_ap_block_state1();
    void thread_ap_block_state5_pp1_stage0_iter0();
    void thread_ap_block_state6_pp1_stage0_iter1();
    void thread_ap_block_state8_pp2_stage0_iter0();
    void thread_ap_block_state9_pp2_stage0_iter1();
    void thread_ap_condition_487();
    void thread_ap_done();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_idle();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_phi_precharge_reg_pp1_iter1_axi_last_V_2_i_i_reg_209();
    void thread_ap_phi_precharge_reg_pp1_iter1_p_Val2_s_reg_222();
    void thread_ap_predicate_op62_read_state6();
    void thread_ap_ready();
    void thread_axi_last_V_2_i_i_phi_fu_214_p4();
    void thread_brmerge_i_i_fu_321_p2();
    void thread_eol_2_i_i_phi_fu_237_p4();
    void thread_eol_i_i_phi_fu_179_p4();
    void thread_exitcond2_i_i_fu_296_p2();
    void thread_exitcond_i_i_fu_307_p2();
    void thread_i_V_fu_301_p2();
    void thread_img_0_data_stream_0_blk_n();
    void thread_img_0_data_stream_0_din();
    void thread_img_0_data_stream_0_write();
    void thread_j_V_fu_312_p2();
    void thread_p_Val2_s_phi_fu_226_p4();
    void thread_tmp_9_fu_283_p1();
    void thread_tmp_fu_279_p1();
    void thread_tmp_user_V_fu_287_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
