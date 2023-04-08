
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

namespace stmcpp::stm32f051::musart6
{

// 
using cr1_register = stmcpp::register_wrapper<0x40011400, 4, stmcpp::read_write_flag>;

namespace cr1_fields
{

// 
constexpr auto ue_disabled = stmcpp::register_field<cr1_register, 0, 1>{0};

// 
constexpr auto ue_enabled = stmcpp::register_field<cr1_register, 0, 1>{1};

using ue = stmcpp::register_field<cr1_register, 0, 1>;


// 
constexpr auto uesm_disabled = stmcpp::register_field<cr1_register, 1, 1>{0};

// 
constexpr auto uesm_enabled = stmcpp::register_field<cr1_register, 1, 1>{1};

using uesm = stmcpp::register_field<cr1_register, 1, 1>;


// 
constexpr auto re_disabled = stmcpp::register_field<cr1_register, 2, 1>{0};

// 
constexpr auto re_enabled = stmcpp::register_field<cr1_register, 2, 1>{1};

using re = stmcpp::register_field<cr1_register, 2, 1>;


// 
constexpr auto te_disabled = stmcpp::register_field<cr1_register, 3, 1>{0};

// 
constexpr auto te_enabled = stmcpp::register_field<cr1_register, 3, 1>{1};

using te = stmcpp::register_field<cr1_register, 3, 1>;


// 
constexpr auto idleie_disabled = stmcpp::register_field<cr1_register, 4, 1>{0};

// 
constexpr auto idleie_enabled = stmcpp::register_field<cr1_register, 4, 1>{1};

using idleie = stmcpp::register_field<cr1_register, 4, 1>;


// 
constexpr auto rxneie_disabled = stmcpp::register_field<cr1_register, 5, 1>{0};

// 
constexpr auto rxneie_enabled = stmcpp::register_field<cr1_register, 5, 1>{1};

using rxneie = stmcpp::register_field<cr1_register, 5, 1>;


// 
constexpr auto tcie_disabled = stmcpp::register_field<cr1_register, 6, 1>{0};

// 
constexpr auto tcie_enabled = stmcpp::register_field<cr1_register, 6, 1>{1};

using tcie = stmcpp::register_field<cr1_register, 6, 1>;


// 
constexpr auto txeie_disabled = stmcpp::register_field<cr1_register, 7, 1>{0};

// 
constexpr auto txeie_enabled = stmcpp::register_field<cr1_register, 7, 1>{1};

using txeie = stmcpp::register_field<cr1_register, 7, 1>;


// 
constexpr auto peie_disabled = stmcpp::register_field<cr1_register, 8, 1>{0};

// 
constexpr auto peie_enabled = stmcpp::register_field<cr1_register, 8, 1>{1};

using peie = stmcpp::register_field<cr1_register, 8, 1>;


// 
constexpr auto ps_even = stmcpp::register_field<cr1_register, 9, 1>{0};

// 
constexpr auto ps_odd = stmcpp::register_field<cr1_register, 9, 1>{1};

using ps = stmcpp::register_field<cr1_register, 9, 1>;


// 
constexpr auto pce_disabled = stmcpp::register_field<cr1_register, 10, 1>{0};

// 
constexpr auto pce_enabled = stmcpp::register_field<cr1_register, 10, 1>{1};

using pce = stmcpp::register_field<cr1_register, 10, 1>;


// 
constexpr auto wake_idle = stmcpp::register_field<cr1_register, 11, 1>{0};

// 
constexpr auto wake_address = stmcpp::register_field<cr1_register, 11, 1>{1};

using wake = stmcpp::register_field<cr1_register, 11, 1>;


// 
constexpr auto m0_bit8 = stmcpp::register_field<cr1_register, 12, 1>{0};

// 
constexpr auto m0_bit9 = stmcpp::register_field<cr1_register, 12, 1>{1};

using m0 = stmcpp::register_field<cr1_register, 12, 1>;


// 
constexpr auto mme_disabled = stmcpp::register_field<cr1_register, 13, 1>{0};

// 
constexpr auto mme_enabled = stmcpp::register_field<cr1_register, 13, 1>{1};

using mme = stmcpp::register_field<cr1_register, 13, 1>;


// 
constexpr auto cmie_disabled = stmcpp::register_field<cr1_register, 14, 1>{0};

// 
constexpr auto cmie_enabled = stmcpp::register_field<cr1_register, 14, 1>{1};

using cmie = stmcpp::register_field<cr1_register, 14, 1>;


// 
constexpr auto over8_oversampling16 = stmcpp::register_field<cr1_register, 15, 1>{0};

// 
constexpr auto over8_oversampling8 = stmcpp::register_field<cr1_register, 15, 1>{1};

using over8 = stmcpp::register_field<cr1_register, 15, 1>;




// 
constexpr auto rtoie_disabled = stmcpp::register_field<cr1_register, 26, 1>{0};

// 
constexpr auto rtoie_enabled = stmcpp::register_field<cr1_register, 26, 1>{1};

using rtoie = stmcpp::register_field<cr1_register, 26, 1>;


// 
constexpr auto eobie_disabled = stmcpp::register_field<cr1_register, 27, 1>{0};

// 
constexpr auto eobie_enabled = stmcpp::register_field<cr1_register, 27, 1>{1};

using eobie = stmcpp::register_field<cr1_register, 27, 1>;


// 
constexpr auto m1_m0 = stmcpp::register_field<cr1_register, 28, 1>{0};

// 
constexpr auto m1_bit7 = stmcpp::register_field<cr1_register, 28, 1>{1};

using m1 = stmcpp::register_field<cr1_register, 28, 1>;




} // namespace cr1_fields

constexpr auto cr1 = cr1_register{};


// 
using cr2_register = stmcpp::register_wrapper<0x40011404, 4, stmcpp::read_write_flag>;

namespace cr2_fields
{

// 
constexpr auto rtoen_disabled = stmcpp::register_field<cr2_register, 23, 1>{0};

// 
constexpr auto rtoen_enabled = stmcpp::register_field<cr2_register, 23, 1>{1};

using rtoen = stmcpp::register_field<cr2_register, 23, 1>;


// 
constexpr auto abrmod_start = stmcpp::register_field<cr2_register, 21, 2>{0};

// 
constexpr auto abrmod_edge = stmcpp::register_field<cr2_register, 21, 2>{1};

// 
constexpr auto abrmod_frame7f = stmcpp::register_field<cr2_register, 21, 2>{2};

// 
constexpr auto abrmod_frame55 = stmcpp::register_field<cr2_register, 21, 2>{3};

using abrmod = stmcpp::register_field<cr2_register, 21, 2>;


// 
constexpr auto abren_disabled = stmcpp::register_field<cr2_register, 20, 1>{0};

// 
constexpr auto abren_enabled = stmcpp::register_field<cr2_register, 20, 1>{1};

using abren = stmcpp::register_field<cr2_register, 20, 1>;


// 
constexpr auto msbfirst_lsb = stmcpp::register_field<cr2_register, 19, 1>{0};

// 
constexpr auto msbfirst_msb = stmcpp::register_field<cr2_register, 19, 1>{1};

using msbfirst = stmcpp::register_field<cr2_register, 19, 1>;


// 
constexpr auto datainv_positive = stmcpp::register_field<cr2_register, 18, 1>{0};

// 
constexpr auto datainv_negative = stmcpp::register_field<cr2_register, 18, 1>{1};

using datainv = stmcpp::register_field<cr2_register, 18, 1>;


// 
constexpr auto txinv_standard = stmcpp::register_field<cr2_register, 17, 1>{0};

// 
constexpr auto txinv_inverted = stmcpp::register_field<cr2_register, 17, 1>{1};

using txinv = stmcpp::register_field<cr2_register, 17, 1>;


// 
constexpr auto rxinv_standard = stmcpp::register_field<cr2_register, 16, 1>{0};

// 
constexpr auto rxinv_inverted = stmcpp::register_field<cr2_register, 16, 1>{1};

using rxinv = stmcpp::register_field<cr2_register, 16, 1>;


// 
constexpr auto swap_standard = stmcpp::register_field<cr2_register, 15, 1>{0};

// 
constexpr auto swap_swapped = stmcpp::register_field<cr2_register, 15, 1>{1};

using swap = stmcpp::register_field<cr2_register, 15, 1>;


// 
constexpr auto linen_disabled = stmcpp::register_field<cr2_register, 14, 1>{0};

// 
constexpr auto linen_enabled = stmcpp::register_field<cr2_register, 14, 1>{1};

using linen = stmcpp::register_field<cr2_register, 14, 1>;


// 
constexpr auto stop_stop1 = stmcpp::register_field<cr2_register, 12, 2>{0};

// 
constexpr auto stop_stop0p5 = stmcpp::register_field<cr2_register, 12, 2>{1};

// 
constexpr auto stop_stop2 = stmcpp::register_field<cr2_register, 12, 2>{2};

// 
constexpr auto stop_stop1p5 = stmcpp::register_field<cr2_register, 12, 2>{3};

using stop = stmcpp::register_field<cr2_register, 12, 2>;


// 
constexpr auto clken_disabled = stmcpp::register_field<cr2_register, 11, 1>{0};

// 
constexpr auto clken_enabled = stmcpp::register_field<cr2_register, 11, 1>{1};

using clken = stmcpp::register_field<cr2_register, 11, 1>;


// 
constexpr auto cpol_low = stmcpp::register_field<cr2_register, 10, 1>{0};

// 
constexpr auto cpol_high = stmcpp::register_field<cr2_register, 10, 1>{1};

using cpol = stmcpp::register_field<cr2_register, 10, 1>;


// 
constexpr auto cpha_first = stmcpp::register_field<cr2_register, 9, 1>{0};

// 
constexpr auto cpha_second = stmcpp::register_field<cr2_register, 9, 1>{1};

using cpha = stmcpp::register_field<cr2_register, 9, 1>;


// 
constexpr auto lbcl_notoutput = stmcpp::register_field<cr2_register, 8, 1>{0};

// 
constexpr auto lbcl_output = stmcpp::register_field<cr2_register, 8, 1>{1};

using lbcl = stmcpp::register_field<cr2_register, 8, 1>;


// 
constexpr auto lbdie_disabled = stmcpp::register_field<cr2_register, 6, 1>{0};

// 
constexpr auto lbdie_enabled = stmcpp::register_field<cr2_register, 6, 1>{1};

using lbdie = stmcpp::register_field<cr2_register, 6, 1>;


// 
constexpr auto lbdl_bit10 = stmcpp::register_field<cr2_register, 5, 1>{0};

// 
constexpr auto lbdl_bit11 = stmcpp::register_field<cr2_register, 5, 1>{1};

using lbdl = stmcpp::register_field<cr2_register, 5, 1>;


// 
constexpr auto addm7_bit4 = stmcpp::register_field<cr2_register, 4, 1>{0};

// 
constexpr auto addm7_bit7 = stmcpp::register_field<cr2_register, 4, 1>{1};

using addm7 = stmcpp::register_field<cr2_register, 4, 1>;





} // namespace cr2_fields

constexpr auto cr2 = cr2_register{};


// 
using cr3_register = stmcpp::register_wrapper<0x40011408, 4, stmcpp::read_write_flag>;

namespace cr3_fields
{

// 
constexpr auto wufie_disabled = stmcpp::register_field<cr3_register, 22, 1>{0};

// 
constexpr auto wufie_enabled = stmcpp::register_field<cr3_register, 22, 1>{1};

using wufie = stmcpp::register_field<cr3_register, 22, 1>;


// 
constexpr auto wus_address = stmcpp::register_field<cr3_register, 20, 2>{0};

// 
constexpr auto wus_start = stmcpp::register_field<cr3_register, 20, 2>{2};

// 
constexpr auto wus_rxne = stmcpp::register_field<cr3_register, 20, 2>{3};

using wus = stmcpp::register_field<cr3_register, 20, 2>;



// 
constexpr auto dep_high = stmcpp::register_field<cr3_register, 15, 1>{0};

// 
constexpr auto dep_low = stmcpp::register_field<cr3_register, 15, 1>{1};

using dep = stmcpp::register_field<cr3_register, 15, 1>;


// 
constexpr auto dem_disabled = stmcpp::register_field<cr3_register, 14, 1>{0};

// 
constexpr auto dem_enabled = stmcpp::register_field<cr3_register, 14, 1>{1};

using dem = stmcpp::register_field<cr3_register, 14, 1>;


// 
constexpr auto ddre_notdisabled = stmcpp::register_field<cr3_register, 13, 1>{0};

// 
constexpr auto ddre_disabled = stmcpp::register_field<cr3_register, 13, 1>{1};

using ddre = stmcpp::register_field<cr3_register, 13, 1>;


// 
constexpr auto ovrdis_enabled = stmcpp::register_field<cr3_register, 12, 1>{0};

// 
constexpr auto ovrdis_disabled = stmcpp::register_field<cr3_register, 12, 1>{1};

using ovrdis = stmcpp::register_field<cr3_register, 12, 1>;


// 
constexpr auto onebit_sample3 = stmcpp::register_field<cr3_register, 11, 1>{0};

// 
constexpr auto onebit_sample1 = stmcpp::register_field<cr3_register, 11, 1>{1};

using onebit = stmcpp::register_field<cr3_register, 11, 1>;


// 
constexpr auto ctsie_disabled = stmcpp::register_field<cr3_register, 10, 1>{0};

// 
constexpr auto ctsie_enabled = stmcpp::register_field<cr3_register, 10, 1>{1};

using ctsie = stmcpp::register_field<cr3_register, 10, 1>;


// 
constexpr auto ctse_disabled = stmcpp::register_field<cr3_register, 9, 1>{0};

// 
constexpr auto ctse_enabled = stmcpp::register_field<cr3_register, 9, 1>{1};

using ctse = stmcpp::register_field<cr3_register, 9, 1>;


// 
constexpr auto rtse_disabled = stmcpp::register_field<cr3_register, 8, 1>{0};

// 
constexpr auto rtse_enabled = stmcpp::register_field<cr3_register, 8, 1>{1};

using rtse = stmcpp::register_field<cr3_register, 8, 1>;


// 
constexpr auto dmat_disabled = stmcpp::register_field<cr3_register, 7, 1>{0};

// 
constexpr auto dmat_enabled = stmcpp::register_field<cr3_register, 7, 1>{1};

using dmat = stmcpp::register_field<cr3_register, 7, 1>;


// 
constexpr auto dmar_disabled = stmcpp::register_field<cr3_register, 6, 1>{0};

// 
constexpr auto dmar_enabled = stmcpp::register_field<cr3_register, 6, 1>{1};

using dmar = stmcpp::register_field<cr3_register, 6, 1>;


// 
constexpr auto scen_disabled = stmcpp::register_field<cr3_register, 5, 1>{0};

// 
constexpr auto scen_enabled = stmcpp::register_field<cr3_register, 5, 1>{1};

using scen = stmcpp::register_field<cr3_register, 5, 1>;


// 
constexpr auto nack_disabled = stmcpp::register_field<cr3_register, 4, 1>{0};

// 
constexpr auto nack_enabled = stmcpp::register_field<cr3_register, 4, 1>{1};

using nack = stmcpp::register_field<cr3_register, 4, 1>;


// 
constexpr auto hdsel_notselected = stmcpp::register_field<cr3_register, 3, 1>{0};

// 
constexpr auto hdsel_selected = stmcpp::register_field<cr3_register, 3, 1>{1};

using hdsel = stmcpp::register_field<cr3_register, 3, 1>;


// 
constexpr auto irlp_normal = stmcpp::register_field<cr3_register, 2, 1>{0};

// 
constexpr auto irlp_lowpower = stmcpp::register_field<cr3_register, 2, 1>{1};

using irlp = stmcpp::register_field<cr3_register, 2, 1>;


// 
constexpr auto iren_disabled = stmcpp::register_field<cr3_register, 1, 1>{0};

// 
constexpr auto iren_enabled = stmcpp::register_field<cr3_register, 1, 1>{1};

using iren = stmcpp::register_field<cr3_register, 1, 1>;


// 
constexpr auto eie_disabled = stmcpp::register_field<cr3_register, 0, 1>{0};

// 
constexpr auto eie_enabled = stmcpp::register_field<cr3_register, 0, 1>{1};

using eie = stmcpp::register_field<cr3_register, 0, 1>;




} // namespace cr3_fields

constexpr auto cr3 = cr3_register{};


// 
using brr_register = stmcpp::register_wrapper<0x4001140c, 4, stmcpp::read_write_flag>;

namespace brr_fields
{




} // namespace brr_fields

constexpr auto brr = brr_register{};


// 
using gtpr_register = stmcpp::register_wrapper<0x40011410, 4, stmcpp::read_write_flag>;

namespace gtpr_fields
{





} // namespace gtpr_fields

constexpr auto gtpr = gtpr_register{};


// 
using rtor_register = stmcpp::register_wrapper<0x40011414, 4, stmcpp::read_write_flag>;

namespace rtor_fields
{





} // namespace rtor_fields

constexpr auto rtor = rtor_register{};


// 
using rqr_register = stmcpp::register_wrapper<0x40011418, 4, stmcpp::read_write_flag>;

namespace rqr_fields
{

// 
constexpr auto txfrq_discard = stmcpp::register_field<rqr_register, 4, 1>{1};

using txfrq = stmcpp::register_field<rqr_register, 4, 1>;


// 
constexpr auto rxfrq_discard = stmcpp::register_field<rqr_register, 3, 1>{1};

using rxfrq = stmcpp::register_field<rqr_register, 3, 1>;


// 
constexpr auto mmrq_mute = stmcpp::register_field<rqr_register, 2, 1>{1};

using mmrq = stmcpp::register_field<rqr_register, 2, 1>;


// 
constexpr auto sbkrq_break = stmcpp::register_field<rqr_register, 1, 1>{1};

using sbkrq = stmcpp::register_field<rqr_register, 1, 1>;


// 
constexpr auto abrrq_request = stmcpp::register_field<rqr_register, 0, 1>{1};

using abrrq = stmcpp::register_field<rqr_register, 0, 1>;




} // namespace rqr_fields

constexpr auto rqr = rqr_register{};


// 
using isr_register = stmcpp::register_wrapper<0x4001141c, 4, stmcpp::read_only_flag>;

namespace isr_fields
{

// 
constexpr auto reack = stmcpp::register_field<isr_register, 22, 1>{1};

// 
constexpr auto teack = stmcpp::register_field<isr_register, 21, 1>{1};

// 
constexpr auto wuf = stmcpp::register_field<isr_register, 20, 1>{1};

// 
constexpr auto rwu = stmcpp::register_field<isr_register, 19, 1>{1};

// 
constexpr auto sbkf = stmcpp::register_field<isr_register, 18, 1>{1};

// 
constexpr auto cmf = stmcpp::register_field<isr_register, 17, 1>{1};

// 
constexpr auto busy = stmcpp::register_field<isr_register, 16, 1>{1};

// 
constexpr auto abrf = stmcpp::register_field<isr_register, 15, 1>{1};

// 
constexpr auto abre = stmcpp::register_field<isr_register, 14, 1>{1};

// 
constexpr auto eobf = stmcpp::register_field<isr_register, 12, 1>{1};

// 
constexpr auto rtof = stmcpp::register_field<isr_register, 11, 1>{1};

// 
constexpr auto cts = stmcpp::register_field<isr_register, 10, 1>{1};

// 
constexpr auto ctsif = stmcpp::register_field<isr_register, 9, 1>{1};

// 
constexpr auto lbdf = stmcpp::register_field<isr_register, 8, 1>{1};

// 
constexpr auto txe = stmcpp::register_field<isr_register, 7, 1>{1};

// 
constexpr auto tc = stmcpp::register_field<isr_register, 6, 1>{1};

// 
constexpr auto rxne = stmcpp::register_field<isr_register, 5, 1>{1};

// 
constexpr auto idle = stmcpp::register_field<isr_register, 4, 1>{1};

// 
constexpr auto ore = stmcpp::register_field<isr_register, 3, 1>{1};

// 
constexpr auto nf = stmcpp::register_field<isr_register, 2, 1>{1};

// 
constexpr auto fe = stmcpp::register_field<isr_register, 1, 1>{1};

// 
constexpr auto pe = stmcpp::register_field<isr_register, 0, 1>{1};



} // namespace isr_fields

constexpr auto isr = isr_register{};


// 
using icr_register = stmcpp::register_wrapper<0x40011420, 4, stmcpp::read_write_flag>;

namespace icr_fields
{

// 
constexpr auto wucf_clear = stmcpp::register_field<icr_register, 20, 1>{1};

using wucf = stmcpp::register_field<icr_register, 20, 1>;


// 
constexpr auto cmcf_clear = stmcpp::register_field<icr_register, 17, 1>{1};

using cmcf = stmcpp::register_field<icr_register, 17, 1>;


// 
constexpr auto eobcf_clear = stmcpp::register_field<icr_register, 12, 1>{1};

using eobcf = stmcpp::register_field<icr_register, 12, 1>;


// 
constexpr auto rtocf_clear = stmcpp::register_field<icr_register, 11, 1>{1};

using rtocf = stmcpp::register_field<icr_register, 11, 1>;


// 
constexpr auto ctscf_clear = stmcpp::register_field<icr_register, 9, 1>{1};

using ctscf = stmcpp::register_field<icr_register, 9, 1>;


// 
constexpr auto lbdcf_clear = stmcpp::register_field<icr_register, 8, 1>{1};

using lbdcf = stmcpp::register_field<icr_register, 8, 1>;


// 
constexpr auto tccf_clear = stmcpp::register_field<icr_register, 6, 1>{1};

using tccf = stmcpp::register_field<icr_register, 6, 1>;


// 
constexpr auto idlecf_clear = stmcpp::register_field<icr_register, 4, 1>{1};

using idlecf = stmcpp::register_field<icr_register, 4, 1>;


// 
constexpr auto orecf_clear = stmcpp::register_field<icr_register, 3, 1>{1};

using orecf = stmcpp::register_field<icr_register, 3, 1>;


// 
constexpr auto ncf_clear = stmcpp::register_field<icr_register, 2, 1>{1};

using ncf = stmcpp::register_field<icr_register, 2, 1>;


// 
constexpr auto fecf_clear = stmcpp::register_field<icr_register, 1, 1>{1};

using fecf = stmcpp::register_field<icr_register, 1, 1>;


// 
constexpr auto pecf_clear = stmcpp::register_field<icr_register, 0, 1>{1};

using pecf = stmcpp::register_field<icr_register, 0, 1>;




} // namespace icr_fields

constexpr auto icr = icr_register{};


// 
using rdr_register = stmcpp::register_wrapper<0x40011424, 4, stmcpp::read_only_flag>;

namespace rdr_fields
{




} // namespace rdr_fields

constexpr auto rdr = rdr_register{};


// 
using tdr_register = stmcpp::register_wrapper<0x40011428, 4, stmcpp::read_write_flag>;

namespace tdr_fields
{




} // namespace tdr_fields

constexpr auto tdr = tdr_register{};




} // namespace stmcpp::stm32f051::musart6