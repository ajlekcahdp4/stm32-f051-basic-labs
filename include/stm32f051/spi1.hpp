
/** ----------------------------------------------------------------------------'
 * "THE BEER-WARE LICENSE" (Revision 42):'
 * <tsimmerman.ss@phystech.edu> wrote this file.  As long'
 * as you retain this notice you can do whatever you want with this stuff. If we'
 * meet some day, and you think this stuff is worth it, you can buy me a beer in'
 * return.'
 * ----------------------------------------------------------------------------'
 */

#pragma once

#include "stmcpp/register.hpp"

namespace stmcpp::stm32f051::mspi1
{

// 
using cr1_register = stmcpp::register_wrapper<0x40013000, 4, stmcpp::read_write_flag>;

namespace cr1_fields
{

// 
constexpr auto bidimode_unidirectional = stmcpp::register_field<cr1_register, 15, 1>{0};

// 
constexpr auto bidimode_bidirectional = stmcpp::register_field<cr1_register, 15, 1>{1};

using bidimode = stmcpp::register_field<cr1_register, 15, 1>;


// 
constexpr auto bidioe_outputdisabled = stmcpp::register_field<cr1_register, 14, 1>{0};

// 
constexpr auto bidioe_outputenabled = stmcpp::register_field<cr1_register, 14, 1>{1};

using bidioe = stmcpp::register_field<cr1_register, 14, 1>;


// 
constexpr auto crcen_disabled = stmcpp::register_field<cr1_register, 13, 1>{0};

// 
constexpr auto crcen_enabled = stmcpp::register_field<cr1_register, 13, 1>{1};

using crcen = stmcpp::register_field<cr1_register, 13, 1>;


// 
constexpr auto crcnext_txbuffer = stmcpp::register_field<cr1_register, 12, 1>{0};

// 
constexpr auto crcnext_crc = stmcpp::register_field<cr1_register, 12, 1>{1};

using crcnext = stmcpp::register_field<cr1_register, 12, 1>;


// 
constexpr auto crcl_eightbit = stmcpp::register_field<cr1_register, 11, 1>{0};

// 
constexpr auto crcl_sixteenbit = stmcpp::register_field<cr1_register, 11, 1>{1};

using crcl = stmcpp::register_field<cr1_register, 11, 1>;


// 
constexpr auto rxonly_fullduplex = stmcpp::register_field<cr1_register, 10, 1>{0};

// 
constexpr auto rxonly_outputdisabled = stmcpp::register_field<cr1_register, 10, 1>{1};

using rxonly = stmcpp::register_field<cr1_register, 10, 1>;


// 
constexpr auto ssm_disabled = stmcpp::register_field<cr1_register, 9, 1>{0};

// 
constexpr auto ssm_enabled = stmcpp::register_field<cr1_register, 9, 1>{1};

using ssm = stmcpp::register_field<cr1_register, 9, 1>;


// 
constexpr auto ssi_slaveselected = stmcpp::register_field<cr1_register, 8, 1>{0};

// 
constexpr auto ssi_slavenotselected = stmcpp::register_field<cr1_register, 8, 1>{1};

using ssi = stmcpp::register_field<cr1_register, 8, 1>;


// 
constexpr auto lsbfirst_msbfirst = stmcpp::register_field<cr1_register, 7, 1>{0};

// 
constexpr auto lsbfirst_lsbfirst = stmcpp::register_field<cr1_register, 7, 1>{1};

using lsbfirst = stmcpp::register_field<cr1_register, 7, 1>;


// 
constexpr auto spe_disabled = stmcpp::register_field<cr1_register, 6, 1>{0};

// 
constexpr auto spe_enabled = stmcpp::register_field<cr1_register, 6, 1>{1};

using spe = stmcpp::register_field<cr1_register, 6, 1>;


// 
constexpr auto br_div2 = stmcpp::register_field<cr1_register, 3, 3>{0};

// 
constexpr auto br_div4 = stmcpp::register_field<cr1_register, 3, 3>{1};

// 
constexpr auto br_div8 = stmcpp::register_field<cr1_register, 3, 3>{2};

// 
constexpr auto br_div16 = stmcpp::register_field<cr1_register, 3, 3>{3};

// 
constexpr auto br_div32 = stmcpp::register_field<cr1_register, 3, 3>{4};

// 
constexpr auto br_div64 = stmcpp::register_field<cr1_register, 3, 3>{5};

// 
constexpr auto br_div128 = stmcpp::register_field<cr1_register, 3, 3>{6};

// 
constexpr auto br_div256 = stmcpp::register_field<cr1_register, 3, 3>{7};

using br = stmcpp::register_field<cr1_register, 3, 3>;


// 
constexpr auto mstr_slave = stmcpp::register_field<cr1_register, 2, 1>{0};

// 
constexpr auto mstr_master = stmcpp::register_field<cr1_register, 2, 1>{1};

using mstr = stmcpp::register_field<cr1_register, 2, 1>;


// 
constexpr auto cpol_idlelow = stmcpp::register_field<cr1_register, 1, 1>{0};

// 
constexpr auto cpol_idlehigh = stmcpp::register_field<cr1_register, 1, 1>{1};

using cpol = stmcpp::register_field<cr1_register, 1, 1>;


// 
constexpr auto cpha_firstedge = stmcpp::register_field<cr1_register, 0, 1>{0};

// 
constexpr auto cpha_secondedge = stmcpp::register_field<cr1_register, 0, 1>{1};

using cpha = stmcpp::register_field<cr1_register, 0, 1>;




} // namespace cr1_fields

constexpr auto cr1 = cr1_register{};


// 
using cr2_register = stmcpp::register_wrapper<0x40013004, 4, stmcpp::read_write_flag>;

namespace cr2_fields
{

// 
constexpr auto rxdmaen_disabled = stmcpp::register_field<cr2_register, 0, 1>{0};

// 
constexpr auto rxdmaen_enabled = stmcpp::register_field<cr2_register, 0, 1>{1};

using rxdmaen = stmcpp::register_field<cr2_register, 0, 1>;


// 
constexpr auto txdmaen_disabled = stmcpp::register_field<cr2_register, 1, 1>{0};

// 
constexpr auto txdmaen_enabled = stmcpp::register_field<cr2_register, 1, 1>{1};

using txdmaen = stmcpp::register_field<cr2_register, 1, 1>;


// 
constexpr auto ssoe_disabled = stmcpp::register_field<cr2_register, 2, 1>{0};

// 
constexpr auto ssoe_enabled = stmcpp::register_field<cr2_register, 2, 1>{1};

using ssoe = stmcpp::register_field<cr2_register, 2, 1>;


// 
constexpr auto nssp_nopulse = stmcpp::register_field<cr2_register, 3, 1>{0};

// 
constexpr auto nssp_pulsegenerated = stmcpp::register_field<cr2_register, 3, 1>{1};

using nssp = stmcpp::register_field<cr2_register, 3, 1>;


// 
constexpr auto frf_motorola = stmcpp::register_field<cr2_register, 4, 1>{0};

// 
constexpr auto frf_ti = stmcpp::register_field<cr2_register, 4, 1>{1};

using frf = stmcpp::register_field<cr2_register, 4, 1>;


// 
constexpr auto errie_masked = stmcpp::register_field<cr2_register, 5, 1>{0};

// 
constexpr auto errie_notmasked = stmcpp::register_field<cr2_register, 5, 1>{1};

using errie = stmcpp::register_field<cr2_register, 5, 1>;


// 
constexpr auto rxneie_masked = stmcpp::register_field<cr2_register, 6, 1>{0};

// 
constexpr auto rxneie_notmasked = stmcpp::register_field<cr2_register, 6, 1>{1};

using rxneie = stmcpp::register_field<cr2_register, 6, 1>;


// 
constexpr auto txeie_masked = stmcpp::register_field<cr2_register, 7, 1>{0};

// 
constexpr auto txeie_notmasked = stmcpp::register_field<cr2_register, 7, 1>{1};

using txeie = stmcpp::register_field<cr2_register, 7, 1>;


// 
constexpr auto ds_fourbit = stmcpp::register_field<cr2_register, 8, 4>{3};

// 
constexpr auto ds_fivebit = stmcpp::register_field<cr2_register, 8, 4>{4};

// 
constexpr auto ds_sixbit = stmcpp::register_field<cr2_register, 8, 4>{5};

// 
constexpr auto ds_sevenbit = stmcpp::register_field<cr2_register, 8, 4>{6};

// 
constexpr auto ds_eightbit = stmcpp::register_field<cr2_register, 8, 4>{7};

// 
constexpr auto ds_ninebit = stmcpp::register_field<cr2_register, 8, 4>{8};

// 
constexpr auto ds_tenbit = stmcpp::register_field<cr2_register, 8, 4>{9};

// 
constexpr auto ds_elevenbit = stmcpp::register_field<cr2_register, 8, 4>{10};

// 
constexpr auto ds_twelvebit = stmcpp::register_field<cr2_register, 8, 4>{11};

// 
constexpr auto ds_thirteenbit = stmcpp::register_field<cr2_register, 8, 4>{12};

// 
constexpr auto ds_fourteenbit = stmcpp::register_field<cr2_register, 8, 4>{13};

// 
constexpr auto ds_fifteenbit = stmcpp::register_field<cr2_register, 8, 4>{14};

// 
constexpr auto ds_sixteenbit = stmcpp::register_field<cr2_register, 8, 4>{15};

using ds = stmcpp::register_field<cr2_register, 8, 4>;


// 
constexpr auto frxth_half = stmcpp::register_field<cr2_register, 12, 1>{0};

// 
constexpr auto frxth_quarter = stmcpp::register_field<cr2_register, 12, 1>{1};

using frxth = stmcpp::register_field<cr2_register, 12, 1>;


// 
constexpr auto ldma_rx_even = stmcpp::register_field<cr2_register, 13, 1>{0};

// 
constexpr auto ldma_rx_odd = stmcpp::register_field<cr2_register, 13, 1>{1};

using ldma_rx = stmcpp::register_field<cr2_register, 13, 1>;


// 
constexpr auto ldma_tx_even = stmcpp::register_field<cr2_register, 14, 1>{0};

// 
constexpr auto ldma_tx_odd = stmcpp::register_field<cr2_register, 14, 1>{1};

using ldma_tx = stmcpp::register_field<cr2_register, 14, 1>;




} // namespace cr2_fields

constexpr auto cr2 = cr2_register{};


// 
using sr_register = stmcpp::register_wrapper<0x40013008, 4, readj-write>;

namespace sr_fields
{

// 
constexpr auto rxne_empty = stmcpp::register_field<sr_register, 0, 1>{0};

// 
constexpr auto rxne_notempty = stmcpp::register_field<sr_register, 0, 1>{1};

using rxne = stmcpp::register_field<sr_register, 0, 1>;


// 
constexpr auto txe_notempty = stmcpp::register_field<sr_register, 1, 1>{0};

// 
constexpr auto txe_empty = stmcpp::register_field<sr_register, 1, 1>{1};

using txe = stmcpp::register_field<sr_register, 1, 1>;


// 
constexpr auto chside_left = stmcpp::register_field<sr_register, 2, 1>{0};

// 
constexpr auto chside_right = stmcpp::register_field<sr_register, 2, 1>{1};

using chside = stmcpp::register_field<sr_register, 2, 1>;


// 
constexpr auto udr_nounderrun = stmcpp::register_field<sr_register, 3, 1>{0};

// 
constexpr auto udr_underrun = stmcpp::register_field<sr_register, 3, 1>{1};

using udr = stmcpp::register_field<sr_register, 3, 1>;


// 
constexpr auto crcerr_match = stmcpp::register_field<sr_register, 4, 1>{0};

// 
constexpr auto crcerr_nomatch = stmcpp::register_field<sr_register, 4, 1>{1};

using crcerr = stmcpp::register_field<sr_register, 4, 1>;


// 
constexpr auto modf_nofault = stmcpp::register_field<sr_register, 5, 1>{0};

// 
constexpr auto modf_fault = stmcpp::register_field<sr_register, 5, 1>{1};

using modf = stmcpp::register_field<sr_register, 5, 1>;


// 
constexpr auto ovr_nooverrun = stmcpp::register_field<sr_register, 6, 1>{0};

// 
constexpr auto ovr_overrun = stmcpp::register_field<sr_register, 6, 1>{1};

using ovr = stmcpp::register_field<sr_register, 6, 1>;


// 
constexpr auto bsy_notbusy = stmcpp::register_field<sr_register, 7, 1>{0};

// 
constexpr auto bsy_busy = stmcpp::register_field<sr_register, 7, 1>{1};

using bsy = stmcpp::register_field<sr_register, 7, 1>;


// 
constexpr auto fre_noerror = stmcpp::register_field<sr_register, 8, 1>{0};

// 
constexpr auto fre_error = stmcpp::register_field<sr_register, 8, 1>{1};

using fre = stmcpp::register_field<sr_register, 8, 1>;


// 
constexpr auto frlvl_empty = stmcpp::register_field<sr_register, 9, 2>{0};

// 
constexpr auto frlvl_quarter = stmcpp::register_field<sr_register, 9, 2>{1};

// 
constexpr auto frlvl_half = stmcpp::register_field<sr_register, 9, 2>{2};

// 
constexpr auto frlvl_full = stmcpp::register_field<sr_register, 9, 2>{3};

using frlvl = stmcpp::register_field<sr_register, 9, 2>;


// 
constexpr auto ftlvl_empty = stmcpp::register_field<sr_register, 11, 2>{0};

// 
constexpr auto ftlvl_quarter = stmcpp::register_field<sr_register, 11, 2>{1};

// 
constexpr auto ftlvl_half = stmcpp::register_field<sr_register, 11, 2>{2};

// 
constexpr auto ftlvl_full = stmcpp::register_field<sr_register, 11, 2>{3};

using ftlvl = stmcpp::register_field<sr_register, 11, 2>;




} // namespace sr_fields

constexpr auto sr = sr_register{};


// 
using dr_register = stmcpp::register_wrapper<0x4001300c, 4, stmcpp::read_write_flag>;

namespace dr_fields
{




} // namespace dr_fields

constexpr auto dr = dr_register{};


// 
using crcpr_register = stmcpp::register_wrapper<0x40013010, 4, stmcpp::read_write_flag>;

namespace crcpr_fields
{




} // namespace crcpr_fields

constexpr auto crcpr = crcpr_register{};


// 
using rxcrcr_register = stmcpp::register_wrapper<0x40013014, 4, stmcpp::read_only_flag>;

namespace rxcrcr_fields
{




} // namespace rxcrcr_fields

constexpr auto rxcrcr = rxcrcr_register{};


// 
using txcrcr_register = stmcpp::register_wrapper<0x40013018, 4, stmcpp::read_only_flag>;

namespace txcrcr_fields
{




} // namespace txcrcr_fields

constexpr auto txcrcr = txcrcr_register{};


// 
using i2scfgr_register = stmcpp::register_wrapper<0x4001301c, 4, stmcpp::read_write_flag>;

namespace i2scfgr_fields
{

// 
constexpr auto i2smod_spimode = stmcpp::register_field<i2scfgr_register, 11, 1>{0};

// 
constexpr auto i2smod_i2smode = stmcpp::register_field<i2scfgr_register, 11, 1>{1};

using i2smod = stmcpp::register_field<i2scfgr_register, 11, 1>;


// 
constexpr auto i2se_disabled = stmcpp::register_field<i2scfgr_register, 10, 1>{0};

// 
constexpr auto i2se_enabled = stmcpp::register_field<i2scfgr_register, 10, 1>{1};

using i2se = stmcpp::register_field<i2scfgr_register, 10, 1>;


// 
constexpr auto i2scfg_slavetx = stmcpp::register_field<i2scfgr_register, 8, 2>{0};

// 
constexpr auto i2scfg_slaverx = stmcpp::register_field<i2scfgr_register, 8, 2>{1};

// 
constexpr auto i2scfg_mastertx = stmcpp::register_field<i2scfgr_register, 8, 2>{2};

// 
constexpr auto i2scfg_masterrx = stmcpp::register_field<i2scfgr_register, 8, 2>{3};

using i2scfg = stmcpp::register_field<i2scfgr_register, 8, 2>;


// 
constexpr auto pcmsync_short = stmcpp::register_field<i2scfgr_register, 7, 1>{0};

// 
constexpr auto pcmsync_long = stmcpp::register_field<i2scfgr_register, 7, 1>{1};

using pcmsync = stmcpp::register_field<i2scfgr_register, 7, 1>;


// 
constexpr auto i2sstd_philips = stmcpp::register_field<i2scfgr_register, 4, 2>{0};

// 
constexpr auto i2sstd_msb = stmcpp::register_field<i2scfgr_register, 4, 2>{1};

// 
constexpr auto i2sstd_lsb = stmcpp::register_field<i2scfgr_register, 4, 2>{2};

// 
constexpr auto i2sstd_pcm = stmcpp::register_field<i2scfgr_register, 4, 2>{3};

using i2sstd = stmcpp::register_field<i2scfgr_register, 4, 2>;


// 
constexpr auto ckpol_idlelow = stmcpp::register_field<i2scfgr_register, 3, 1>{0};

// 
constexpr auto ckpol_idlehigh = stmcpp::register_field<i2scfgr_register, 3, 1>{1};

using ckpol = stmcpp::register_field<i2scfgr_register, 3, 1>;


// 
constexpr auto datlen_sixteenbit = stmcpp::register_field<i2scfgr_register, 1, 2>{0};

// 
constexpr auto datlen_twentyfourbit = stmcpp::register_field<i2scfgr_register, 1, 2>{1};

// 
constexpr auto datlen_thirtytwobit = stmcpp::register_field<i2scfgr_register, 1, 2>{2};

using datlen = stmcpp::register_field<i2scfgr_register, 1, 2>;


// 
constexpr auto chlen_sixteenbit = stmcpp::register_field<i2scfgr_register, 0, 1>{0};

// 
constexpr auto chlen_thirtytwobit = stmcpp::register_field<i2scfgr_register, 0, 1>{1};

using chlen = stmcpp::register_field<i2scfgr_register, 0, 1>;




} // namespace i2scfgr_fields

constexpr auto i2scfgr = i2scfgr_register{};


// 
using i2spr_register = stmcpp::register_wrapper<0x40013020, 4, stmcpp::read_write_flag>;

namespace i2spr_fields
{

// 
constexpr auto mckoe_disabled = stmcpp::register_field<i2spr_register, 9, 1>{0};

// 
constexpr auto mckoe_enabled = stmcpp::register_field<i2spr_register, 9, 1>{1};

using mckoe = stmcpp::register_field<i2spr_register, 9, 1>;


// 
constexpr auto odd_even = stmcpp::register_field<i2spr_register, 8, 1>{0};

// 
constexpr auto odd_odd = stmcpp::register_field<i2spr_register, 8, 1>{1};

using odd = stmcpp::register_field<i2spr_register, 8, 1>;





} // namespace i2spr_fields

constexpr auto i2spr = i2spr_register{};




} // namespace stmcpp::stm32f051::mspi1