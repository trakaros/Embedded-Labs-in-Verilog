// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _convolution_sobel_HH_
#define _convolution_sobel_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "AXIvideo2Mat.h"
#include "Loop_1_proc.h"
#include "Mat2AXIvideo.h"
#include "fifo_w8_d1_A.h"

namespace ap_rtl {

struct convolution_sobel : public sc_module {
    // Port declarations 26
    sc_in< sc_lv<32> > INPUT_STREAM_TDATA;
    sc_in< sc_lv<4> > INPUT_STREAM_TKEEP;
    sc_in< sc_lv<4> > INPUT_STREAM_TSTRB;
    sc_in< sc_lv<1> > INPUT_STREAM_TUSER;
    sc_in< sc_lv<1> > INPUT_STREAM_TLAST;
    sc_in< sc_lv<1> > INPUT_STREAM_TID;
    sc_in< sc_lv<1> > INPUT_STREAM_TDEST;
    sc_out< sc_lv<32> > OUTPUT_STREAM_TDATA;
    sc_out< sc_lv<4> > OUTPUT_STREAM_TKEEP;
    sc_out< sc_lv<4> > OUTPUT_STREAM_TSTRB;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TUSER;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TLAST;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TID;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TDEST;
    sc_in< sc_lv<32> > rows;
    sc_in< sc_lv<32> > cols;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > INPUT_STREAM_TVALID;
    sc_out< sc_logic > INPUT_STREAM_TREADY;
    sc_out< sc_logic > OUTPUT_STREAM_TVALID;
    sc_in< sc_logic > OUTPUT_STREAM_TREADY;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > ap_idle;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    convolution_sobel(sc_module_name name);
    SC_HAS_PROCESS(convolution_sobel);

    ~convolution_sobel();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    AXIvideo2Mat* AXIvideo2Mat_U0;
    Loop_1_proc* Loop_1_proc_U0;
    Mat2AXIvideo* Mat2AXIvideo_U0;
    fifo_w8_d1_A* img_0_data_stream_0_U;
    fifo_w8_d1_A* img_1_data_stream_0_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_start;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_done;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_continue;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_idle;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_logic > AXIvideo2Mat_U0_INPUT_STREAM_TREADY;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_0_data_stream_0_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_0_data_stream_0_write;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_start;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_done;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_continue;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_idle;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_ready;
    sc_signal< sc_lv<8> > Loop_1_proc_U0_img_1_data_stream_0_din;
    sc_signal< sc_logic > Loop_1_proc_U0_img_1_data_stream_0_write;
    sc_signal< sc_logic > Loop_1_proc_U0_img_0_data_stream_0_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_start;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_done;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_continue;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_idle;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_ready;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_1_data_stream_0_read;
    sc_signal< sc_lv<32> > Mat2AXIvideo_U0_OUTPUT_STREAM_TDATA;
    sc_signal< sc_logic > Mat2AXIvideo_U0_OUTPUT_STREAM_TVALID;
    sc_signal< sc_lv<4> > Mat2AXIvideo_U0_OUTPUT_STREAM_TKEEP;
    sc_signal< sc_lv<4> > Mat2AXIvideo_U0_OUTPUT_STREAM_TSTRB;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TUSER;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TLAST;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TID;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TDEST;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > img_0_data_stream_0_full_n;
    sc_signal< sc_lv<8> > img_0_data_stream_0_dout;
    sc_signal< sc_logic > img_0_data_stream_0_empty_n;
    sc_signal< sc_logic > img_1_data_stream_0_full_n;
    sc_signal< sc_lv<8> > img_1_data_stream_0_dout;
    sc_signal< sc_logic > img_1_data_stream_0_empty_n;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_logic > ap_sync_reg_AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_logic > ap_sync_AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_lv<2> > AXIvideo2Mat_U0_ap_ready_count;
    sc_signal< sc_logic > ap_sync_reg_Loop_1_proc_U0_ap_ready;
    sc_signal< sc_logic > ap_sync_Loop_1_proc_U0_ap_ready;
    sc_signal< sc_lv<2> > Loop_1_proc_U0_ap_ready_count;
    sc_signal< sc_logic > ap_sync_reg_Mat2AXIvideo_U0_ap_ready;
    sc_signal< sc_logic > ap_sync_Mat2AXIvideo_U0_ap_ready;
    sc_signal< sc_lv<2> > Mat2AXIvideo_U0_ap_ready_count;
    sc_signal< sc_logic > AXIvideo2Mat_U0_start_full_n;
    sc_signal< sc_logic > AXIvideo2Mat_U0_start_write;
    sc_signal< sc_logic > Loop_1_proc_U0_start_full_n;
    sc_signal< sc_logic > Loop_1_proc_U0_start_write;
    sc_signal< sc_logic > Mat2AXIvideo_U0_start_full_n;
    sc_signal< sc_logic > Mat2AXIvideo_U0_start_write;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_AXIvideo2Mat_U0_ap_continue();
    void thread_AXIvideo2Mat_U0_ap_start();
    void thread_AXIvideo2Mat_U0_start_full_n();
    void thread_AXIvideo2Mat_U0_start_write();
    void thread_INPUT_STREAM_TREADY();
    void thread_Loop_1_proc_U0_ap_continue();
    void thread_Loop_1_proc_U0_ap_start();
    void thread_Loop_1_proc_U0_start_full_n();
    void thread_Loop_1_proc_U0_start_write();
    void thread_Mat2AXIvideo_U0_ap_continue();
    void thread_Mat2AXIvideo_U0_ap_start();
    void thread_Mat2AXIvideo_U0_start_full_n();
    void thread_Mat2AXIvideo_U0_start_write();
    void thread_OUTPUT_STREAM_TDATA();
    void thread_OUTPUT_STREAM_TDEST();
    void thread_OUTPUT_STREAM_TID();
    void thread_OUTPUT_STREAM_TKEEP();
    void thread_OUTPUT_STREAM_TLAST();
    void thread_OUTPUT_STREAM_TSTRB();
    void thread_OUTPUT_STREAM_TUSER();
    void thread_OUTPUT_STREAM_TVALID();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_AXIvideo2Mat_U0_ap_ready();
    void thread_ap_sync_Loop_1_proc_U0_ap_ready();
    void thread_ap_sync_Mat2AXIvideo_U0_ap_ready();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_ready();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif