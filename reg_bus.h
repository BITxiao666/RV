/********************************************************************************
 * Files         : reg_bus.h
 * Description   : This project is a C simulator for RISC-V, a graduation project
 *               : in (1) ICT,CAS and (2) Beijing Institute of Technology .
 *               : This file is the head file to define all registers (include 
 *               : architecture and no-architecture ) and buses (used for transfer  
 *               : data between function uints) .
 * Author        : xiaoziyuan 
 * Last Modified : 2019.03.07
 * Version       : V 0.1
 ********************************************************************************/
#include "define.h"

#ifndef REG_H
#define REG_H
typedef struct 
{
    BYTE op_type;
    BYTE op_code;
    BYTE op_smt;    // only for shift instruction
    WORD op_rs1;
    WORD op_rs2;
    WORD op_rd;
    WORD op_imm;
    BYTE data_sel[5];
    BYTE issue_sta;
    WORD ins_addr;
    WORD ins_pred;
    BYTE jump_if;
    BYTE ins_valid;
} s_deliver12;

typedef struct 
{
    char data[256];
} s_cache_line;

typedef struct 
{
    int ins;
    char hit;
} s_icache_res;

typedef struct 
{
    int ins;
    char hit;
} s_dcache_res;

typedef struct 
{
    BYTE op_smt;    
    WORD op_rs1;
    WORD op_rs2;
    WORD op_rd;
    WORD op_imm;
    BYTE data_sel[5];
} s_ins_data;

typedef struct 
{
    BYTE issue_sta;
    BYTE op_code;
    BYTE item_status;
    BYTE Qi;
    BYTE Qj;
    WORD Vi;
    WORD Vj;
    WORD imm;
    BYTE Rd;
    WORD ins_addr;
    BYTE jump_if;
    WORD ins_pred;
    WORD ls_addr;
    BYTE data_sel[4];
} s_queue_item;

typedef struct 
{
    BYTE op;
    BYTE id;
    BYTE Qi;
    BYTE Qj;
    int Vi;
    int Vj;
    int imm;
    BYTE valid;
    BYTE clean;
} s_station_in;

typedef struct 
{
    BYTE valid;
    BYTE id;
    int res;
} s_alu_out;

typedef struct 
{
    BYTE valid;
    WORD res;
    BYTE id;
    BYTE user;
    BYTE jump_if;
    WORD addr;  // in Load Unit it is the effective addr,in J_unit it is jump addr
} s_cmt_bus;

#endif
