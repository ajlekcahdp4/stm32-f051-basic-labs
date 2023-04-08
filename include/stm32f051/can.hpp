
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

namespace stmcpp::stm32f051::mcan
{

// 
using mcr_register = stmcpp::register_wrapper<0x40006400, 4, stmcpp::read_write_flag>;

namespace mcr_fields
{

// 
constexpr auto dbf = stmcpp::register_field<mcr_register, 16, 1>{1};

// 
constexpr auto reset = stmcpp::register_field<mcr_register, 15, 1>{1};

// 
constexpr auto ttcm = stmcpp::register_field<mcr_register, 7, 1>{1};

// 
constexpr auto abom = stmcpp::register_field<mcr_register, 6, 1>{1};

// 
constexpr auto awum = stmcpp::register_field<mcr_register, 5, 1>{1};

// 
constexpr auto nart = stmcpp::register_field<mcr_register, 4, 1>{1};

// 
constexpr auto rflm = stmcpp::register_field<mcr_register, 3, 1>{1};

// 
constexpr auto txfp = stmcpp::register_field<mcr_register, 2, 1>{1};

// 
constexpr auto sleep = stmcpp::register_field<mcr_register, 1, 1>{1};

// 
constexpr auto inrq = stmcpp::register_field<mcr_register, 0, 1>{1};



} // namespace mcr_fields

constexpr auto mcr = mcr_register{};


// 
using msr_register = stmcpp::register_wrapper<0x40006404, 4, readj-write>;

namespace msr_fields
{

// 
constexpr auto rx = stmcpp::register_field<msr_register, 11, 1>{1};

// 
constexpr auto samp = stmcpp::register_field<msr_register, 10, 1>{1};

// 
constexpr auto rxm = stmcpp::register_field<msr_register, 9, 1>{1};

// 
constexpr auto txm = stmcpp::register_field<msr_register, 8, 1>{1};

// 
constexpr auto slaki = stmcpp::register_field<msr_register, 4, 1>{1};

// 
constexpr auto wkui = stmcpp::register_field<msr_register, 3, 1>{1};

// 
constexpr auto erri = stmcpp::register_field<msr_register, 2, 1>{1};

// 
constexpr auto slak = stmcpp::register_field<msr_register, 1, 1>{1};

// 
constexpr auto inak = stmcpp::register_field<msr_register, 0, 1>{1};



} // namespace msr_fields

constexpr auto msr = msr_register{};


// 
using tsr_register = stmcpp::register_wrapper<0x40006408, 4, readj-write>;

namespace tsr_fields
{

// 
constexpr auto low2 = stmcpp::register_field<tsr_register, 31, 1>{1};

// 
constexpr auto low1 = stmcpp::register_field<tsr_register, 30, 1>{1};

// 
constexpr auto low0 = stmcpp::register_field<tsr_register, 29, 1>{1};

// 
constexpr auto tme2 = stmcpp::register_field<tsr_register, 28, 1>{1};

// 
constexpr auto tme1 = stmcpp::register_field<tsr_register, 27, 1>{1};

// 
constexpr auto tme0 = stmcpp::register_field<tsr_register, 26, 1>{1};


// 
constexpr auto abrq2 = stmcpp::register_field<tsr_register, 23, 1>{1};

// 
constexpr auto terr2 = stmcpp::register_field<tsr_register, 19, 1>{1};

// 
constexpr auto alst2 = stmcpp::register_field<tsr_register, 18, 1>{1};

// 
constexpr auto txok2 = stmcpp::register_field<tsr_register, 17, 1>{1};

// 
constexpr auto rqcp2 = stmcpp::register_field<tsr_register, 16, 1>{1};

// 
constexpr auto abrq1 = stmcpp::register_field<tsr_register, 15, 1>{1};

// 
constexpr auto terr1 = stmcpp::register_field<tsr_register, 11, 1>{1};

// 
constexpr auto alst1 = stmcpp::register_field<tsr_register, 10, 1>{1};

// 
constexpr auto txok1 = stmcpp::register_field<tsr_register, 9, 1>{1};

// 
constexpr auto rqcp1 = stmcpp::register_field<tsr_register, 8, 1>{1};

// 
constexpr auto abrq0 = stmcpp::register_field<tsr_register, 7, 1>{1};

// 
constexpr auto terr0 = stmcpp::register_field<tsr_register, 3, 1>{1};

// 
constexpr auto alst0 = stmcpp::register_field<tsr_register, 2, 1>{1};

// 
constexpr auto txok0 = stmcpp::register_field<tsr_register, 1, 1>{1};

// 
constexpr auto rqcp0 = stmcpp::register_field<tsr_register, 0, 1>{1};



} // namespace tsr_fields

constexpr auto tsr = tsr_register{};


// 
using ier_register = stmcpp::register_wrapper<0x40006414, 4, stmcpp::read_write_flag>;

namespace ier_fields
{

// 
constexpr auto slkie_disabled = stmcpp::register_field<ier_register, 17, 1>{0};

// 
constexpr auto slkie_enabled = stmcpp::register_field<ier_register, 17, 1>{1};

using slkie = stmcpp::register_field<ier_register, 17, 1>;


// 
constexpr auto wkuie_disabled = stmcpp::register_field<ier_register, 16, 1>{0};

// 
constexpr auto wkuie_enabled = stmcpp::register_field<ier_register, 16, 1>{1};

using wkuie = stmcpp::register_field<ier_register, 16, 1>;


// 
constexpr auto errie_disabled = stmcpp::register_field<ier_register, 15, 1>{0};

// 
constexpr auto errie_enabled = stmcpp::register_field<ier_register, 15, 1>{1};

using errie = stmcpp::register_field<ier_register, 15, 1>;


// 
constexpr auto lecie_disabled = stmcpp::register_field<ier_register, 11, 1>{0};

// 
constexpr auto lecie_enabled = stmcpp::register_field<ier_register, 11, 1>{1};

using lecie = stmcpp::register_field<ier_register, 11, 1>;


// 
constexpr auto bofie_disabled = stmcpp::register_field<ier_register, 10, 1>{0};

// 
constexpr auto bofie_enabled = stmcpp::register_field<ier_register, 10, 1>{1};

using bofie = stmcpp::register_field<ier_register, 10, 1>;


// 
constexpr auto epvie_disabled = stmcpp::register_field<ier_register, 9, 1>{0};

// 
constexpr auto epvie_enabled = stmcpp::register_field<ier_register, 9, 1>{1};

using epvie = stmcpp::register_field<ier_register, 9, 1>;


// 
constexpr auto ewgie_disabled = stmcpp::register_field<ier_register, 8, 1>{0};

// 
constexpr auto ewgie_enabled = stmcpp::register_field<ier_register, 8, 1>{1};

using ewgie = stmcpp::register_field<ier_register, 8, 1>;


// 
constexpr auto fovie1_disabled = stmcpp::register_field<ier_register, 6, 1>{0};

// 
constexpr auto fovie1_enabled = stmcpp::register_field<ier_register, 6, 1>{1};

using fovie1 = stmcpp::register_field<ier_register, 6, 1>;


// 
constexpr auto ffie1_disabled = stmcpp::register_field<ier_register, 5, 1>{0};

// 
constexpr auto ffie1_enabled = stmcpp::register_field<ier_register, 5, 1>{1};

using ffie1 = stmcpp::register_field<ier_register, 5, 1>;


// 
constexpr auto fmpie1_disabled = stmcpp::register_field<ier_register, 4, 1>{0};

// 
constexpr auto fmpie1_enabled = stmcpp::register_field<ier_register, 4, 1>{1};

using fmpie1 = stmcpp::register_field<ier_register, 4, 1>;


// 
constexpr auto fovie0_disabled = stmcpp::register_field<ier_register, 3, 1>{0};

// 
constexpr auto fovie0_enabled = stmcpp::register_field<ier_register, 3, 1>{1};

using fovie0 = stmcpp::register_field<ier_register, 3, 1>;


// 
constexpr auto ffie0_disabled = stmcpp::register_field<ier_register, 2, 1>{0};

// 
constexpr auto ffie0_enabled = stmcpp::register_field<ier_register, 2, 1>{1};

using ffie0 = stmcpp::register_field<ier_register, 2, 1>;


// 
constexpr auto fmpie0_disabled = stmcpp::register_field<ier_register, 1, 1>{0};

// 
constexpr auto fmpie0_enabled = stmcpp::register_field<ier_register, 1, 1>{1};

using fmpie0 = stmcpp::register_field<ier_register, 1, 1>;


// 
constexpr auto tmeie_disabled = stmcpp::register_field<ier_register, 0, 1>{0};

// 
constexpr auto tmeie_enabled = stmcpp::register_field<ier_register, 0, 1>{1};

using tmeie = stmcpp::register_field<ier_register, 0, 1>;




} // namespace ier_fields

constexpr auto ier = ier_register{};


// 
using esr_register = stmcpp::register_wrapper<0x40006418, 4, readj-write>;

namespace esr_fields
{



// 
constexpr auto lec_noerror = stmcpp::register_field<esr_register, 4, 3>{0};

// 
constexpr auto lec_stuff = stmcpp::register_field<esr_register, 4, 3>{1};

// 
constexpr auto lec_form = stmcpp::register_field<esr_register, 4, 3>{2};

// 
constexpr auto lec_ack = stmcpp::register_field<esr_register, 4, 3>{3};

// 
constexpr auto lec_bitrecessive = stmcpp::register_field<esr_register, 4, 3>{4};

// 
constexpr auto lec_bitdominant = stmcpp::register_field<esr_register, 4, 3>{5};

// 
constexpr auto lec_crc = stmcpp::register_field<esr_register, 4, 3>{6};

// 
constexpr auto lec_custom = stmcpp::register_field<esr_register, 4, 3>{7};

using lec = stmcpp::register_field<esr_register, 4, 3>;


// 
constexpr auto boff = stmcpp::register_field<esr_register, 2, 1>{1};

// 
constexpr auto epvf = stmcpp::register_field<esr_register, 1, 1>{1};

// 
constexpr auto ewgf = stmcpp::register_field<esr_register, 0, 1>{1};



} // namespace esr_fields

constexpr auto esr = esr_register{};


// 
using btr_register = stmcpp::register_wrapper<0x4000641c, 4, stmcpp::read_write_flag>;

namespace btr_fields
{

// 
constexpr auto silm_normal = stmcpp::register_field<btr_register, 31, 1>{0};

// 
constexpr auto silm_silent = stmcpp::register_field<btr_register, 31, 1>{1};

using silm = stmcpp::register_field<btr_register, 31, 1>;


// 
constexpr auto lbkm_disabled = stmcpp::register_field<btr_register, 30, 1>{0};

// 
constexpr auto lbkm_enabled = stmcpp::register_field<btr_register, 30, 1>{1};

using lbkm = stmcpp::register_field<btr_register, 30, 1>;








} // namespace btr_fields

constexpr auto btr = btr_register{};


// 
using fmr_register = stmcpp::register_wrapper<0x40006600, 4, stmcpp::read_write_flag>;

namespace fmr_fields
{


// 
constexpr auto finit = stmcpp::register_field<fmr_register, 0, 1>{1};



} // namespace fmr_fields

constexpr auto fmr = fmr_register{};


// 
using fm1r_register = stmcpp::register_wrapper<0x40006604, 4, stmcpp::read_write_flag>;

namespace fm1r_fields
{

// 
constexpr auto fbm0 = stmcpp::register_field<fm1r_register, 0, 1>{1};

// 
constexpr auto fbm1 = stmcpp::register_field<fm1r_register, 1, 1>{1};

// 
constexpr auto fbm2 = stmcpp::register_field<fm1r_register, 2, 1>{1};

// 
constexpr auto fbm3 = stmcpp::register_field<fm1r_register, 3, 1>{1};

// 
constexpr auto fbm4 = stmcpp::register_field<fm1r_register, 4, 1>{1};

// 
constexpr auto fbm5 = stmcpp::register_field<fm1r_register, 5, 1>{1};

// 
constexpr auto fbm6 = stmcpp::register_field<fm1r_register, 6, 1>{1};

// 
constexpr auto fbm7 = stmcpp::register_field<fm1r_register, 7, 1>{1};

// 
constexpr auto fbm8 = stmcpp::register_field<fm1r_register, 8, 1>{1};

// 
constexpr auto fbm9 = stmcpp::register_field<fm1r_register, 9, 1>{1};

// 
constexpr auto fbm10 = stmcpp::register_field<fm1r_register, 10, 1>{1};

// 
constexpr auto fbm11 = stmcpp::register_field<fm1r_register, 11, 1>{1};

// 
constexpr auto fbm12 = stmcpp::register_field<fm1r_register, 12, 1>{1};

// 
constexpr auto fbm13 = stmcpp::register_field<fm1r_register, 13, 1>{1};

// 
constexpr auto fbm14 = stmcpp::register_field<fm1r_register, 14, 1>{1};

// 
constexpr auto fbm15 = stmcpp::register_field<fm1r_register, 15, 1>{1};

// 
constexpr auto fbm16 = stmcpp::register_field<fm1r_register, 16, 1>{1};

// 
constexpr auto fbm17 = stmcpp::register_field<fm1r_register, 17, 1>{1};

// 
constexpr auto fbm18 = stmcpp::register_field<fm1r_register, 18, 1>{1};

// 
constexpr auto fbm19 = stmcpp::register_field<fm1r_register, 19, 1>{1};

// 
constexpr auto fbm20 = stmcpp::register_field<fm1r_register, 20, 1>{1};

// 
constexpr auto fbm21 = stmcpp::register_field<fm1r_register, 21, 1>{1};

// 
constexpr auto fbm22 = stmcpp::register_field<fm1r_register, 22, 1>{1};

// 
constexpr auto fbm23 = stmcpp::register_field<fm1r_register, 23, 1>{1};

// 
constexpr auto fbm24 = stmcpp::register_field<fm1r_register, 24, 1>{1};

// 
constexpr auto fbm25 = stmcpp::register_field<fm1r_register, 25, 1>{1};

// 
constexpr auto fbm26 = stmcpp::register_field<fm1r_register, 26, 1>{1};

// 
constexpr auto fbm27 = stmcpp::register_field<fm1r_register, 27, 1>{1};



} // namespace fm1r_fields

constexpr auto fm1r = fm1r_register{};


// 
using fs1r_register = stmcpp::register_wrapper<0x4000660c, 4, stmcpp::read_write_flag>;

namespace fs1r_fields
{

// 
constexpr auto fsc0 = stmcpp::register_field<fs1r_register, 0, 1>{1};

// 
constexpr auto fsc1 = stmcpp::register_field<fs1r_register, 1, 1>{1};

// 
constexpr auto fsc2 = stmcpp::register_field<fs1r_register, 2, 1>{1};

// 
constexpr auto fsc3 = stmcpp::register_field<fs1r_register, 3, 1>{1};

// 
constexpr auto fsc4 = stmcpp::register_field<fs1r_register, 4, 1>{1};

// 
constexpr auto fsc5 = stmcpp::register_field<fs1r_register, 5, 1>{1};

// 
constexpr auto fsc6 = stmcpp::register_field<fs1r_register, 6, 1>{1};

// 
constexpr auto fsc7 = stmcpp::register_field<fs1r_register, 7, 1>{1};

// 
constexpr auto fsc8 = stmcpp::register_field<fs1r_register, 8, 1>{1};

// 
constexpr auto fsc9 = stmcpp::register_field<fs1r_register, 9, 1>{1};

// 
constexpr auto fsc10 = stmcpp::register_field<fs1r_register, 10, 1>{1};

// 
constexpr auto fsc11 = stmcpp::register_field<fs1r_register, 11, 1>{1};

// 
constexpr auto fsc12 = stmcpp::register_field<fs1r_register, 12, 1>{1};

// 
constexpr auto fsc13 = stmcpp::register_field<fs1r_register, 13, 1>{1};

// 
constexpr auto fsc14 = stmcpp::register_field<fs1r_register, 14, 1>{1};

// 
constexpr auto fsc15 = stmcpp::register_field<fs1r_register, 15, 1>{1};

// 
constexpr auto fsc16 = stmcpp::register_field<fs1r_register, 16, 1>{1};

// 
constexpr auto fsc17 = stmcpp::register_field<fs1r_register, 17, 1>{1};

// 
constexpr auto fsc18 = stmcpp::register_field<fs1r_register, 18, 1>{1};

// 
constexpr auto fsc19 = stmcpp::register_field<fs1r_register, 19, 1>{1};

// 
constexpr auto fsc20 = stmcpp::register_field<fs1r_register, 20, 1>{1};

// 
constexpr auto fsc21 = stmcpp::register_field<fs1r_register, 21, 1>{1};

// 
constexpr auto fsc22 = stmcpp::register_field<fs1r_register, 22, 1>{1};

// 
constexpr auto fsc23 = stmcpp::register_field<fs1r_register, 23, 1>{1};

// 
constexpr auto fsc24 = stmcpp::register_field<fs1r_register, 24, 1>{1};

// 
constexpr auto fsc25 = stmcpp::register_field<fs1r_register, 25, 1>{1};

// 
constexpr auto fsc26 = stmcpp::register_field<fs1r_register, 26, 1>{1};

// 
constexpr auto fsc27 = stmcpp::register_field<fs1r_register, 27, 1>{1};



} // namespace fs1r_fields

constexpr auto fs1r = fs1r_register{};


// 
using ffa1r_register = stmcpp::register_wrapper<0x40006614, 4, stmcpp::read_write_flag>;

namespace ffa1r_fields
{

// 
constexpr auto ffa0 = stmcpp::register_field<ffa1r_register, 0, 1>{1};

// 
constexpr auto ffa1 = stmcpp::register_field<ffa1r_register, 1, 1>{1};

// 
constexpr auto ffa2 = stmcpp::register_field<ffa1r_register, 2, 1>{1};

// 
constexpr auto ffa3 = stmcpp::register_field<ffa1r_register, 3, 1>{1};

// 
constexpr auto ffa4 = stmcpp::register_field<ffa1r_register, 4, 1>{1};

// 
constexpr auto ffa5 = stmcpp::register_field<ffa1r_register, 5, 1>{1};

// 
constexpr auto ffa6 = stmcpp::register_field<ffa1r_register, 6, 1>{1};

// 
constexpr auto ffa7 = stmcpp::register_field<ffa1r_register, 7, 1>{1};

// 
constexpr auto ffa8 = stmcpp::register_field<ffa1r_register, 8, 1>{1};

// 
constexpr auto ffa9 = stmcpp::register_field<ffa1r_register, 9, 1>{1};

// 
constexpr auto ffa10 = stmcpp::register_field<ffa1r_register, 10, 1>{1};

// 
constexpr auto ffa11 = stmcpp::register_field<ffa1r_register, 11, 1>{1};

// 
constexpr auto ffa12 = stmcpp::register_field<ffa1r_register, 12, 1>{1};

// 
constexpr auto ffa13 = stmcpp::register_field<ffa1r_register, 13, 1>{1};

// 
constexpr auto ffa14 = stmcpp::register_field<ffa1r_register, 14, 1>{1};

// 
constexpr auto ffa15 = stmcpp::register_field<ffa1r_register, 15, 1>{1};

// 
constexpr auto ffa16 = stmcpp::register_field<ffa1r_register, 16, 1>{1};

// 
constexpr auto ffa17 = stmcpp::register_field<ffa1r_register, 17, 1>{1};

// 
constexpr auto ffa18 = stmcpp::register_field<ffa1r_register, 18, 1>{1};

// 
constexpr auto ffa19 = stmcpp::register_field<ffa1r_register, 19, 1>{1};

// 
constexpr auto ffa20 = stmcpp::register_field<ffa1r_register, 20, 1>{1};

// 
constexpr auto ffa21 = stmcpp::register_field<ffa1r_register, 21, 1>{1};

// 
constexpr auto ffa22 = stmcpp::register_field<ffa1r_register, 22, 1>{1};

// 
constexpr auto ffa23 = stmcpp::register_field<ffa1r_register, 23, 1>{1};

// 
constexpr auto ffa24 = stmcpp::register_field<ffa1r_register, 24, 1>{1};

// 
constexpr auto ffa25 = stmcpp::register_field<ffa1r_register, 25, 1>{1};

// 
constexpr auto ffa26 = stmcpp::register_field<ffa1r_register, 26, 1>{1};

// 
constexpr auto ffa27 = stmcpp::register_field<ffa1r_register, 27, 1>{1};



} // namespace ffa1r_fields

constexpr auto ffa1r = ffa1r_register{};


// 
using fa1r_register = stmcpp::register_wrapper<0x4000661c, 4, stmcpp::read_write_flag>;

namespace fa1r_fields
{

// 
constexpr auto fact0 = stmcpp::register_field<fa1r_register, 0, 1>{1};

// 
constexpr auto fact1 = stmcpp::register_field<fa1r_register, 1, 1>{1};

// 
constexpr auto fact2 = stmcpp::register_field<fa1r_register, 2, 1>{1};

// 
constexpr auto fact3 = stmcpp::register_field<fa1r_register, 3, 1>{1};

// 
constexpr auto fact4 = stmcpp::register_field<fa1r_register, 4, 1>{1};

// 
constexpr auto fact5 = stmcpp::register_field<fa1r_register, 5, 1>{1};

// 
constexpr auto fact6 = stmcpp::register_field<fa1r_register, 6, 1>{1};

// 
constexpr auto fact7 = stmcpp::register_field<fa1r_register, 7, 1>{1};

// 
constexpr auto fact8 = stmcpp::register_field<fa1r_register, 8, 1>{1};

// 
constexpr auto fact9 = stmcpp::register_field<fa1r_register, 9, 1>{1};

// 
constexpr auto fact10 = stmcpp::register_field<fa1r_register, 10, 1>{1};

// 
constexpr auto fact11 = stmcpp::register_field<fa1r_register, 11, 1>{1};

// 
constexpr auto fact12 = stmcpp::register_field<fa1r_register, 12, 1>{1};

// 
constexpr auto fact13 = stmcpp::register_field<fa1r_register, 13, 1>{1};

// 
constexpr auto fact14 = stmcpp::register_field<fa1r_register, 14, 1>{1};

// 
constexpr auto fact15 = stmcpp::register_field<fa1r_register, 15, 1>{1};

// 
constexpr auto fact16 = stmcpp::register_field<fa1r_register, 16, 1>{1};

// 
constexpr auto fact17 = stmcpp::register_field<fa1r_register, 17, 1>{1};

// 
constexpr auto fact18 = stmcpp::register_field<fa1r_register, 18, 1>{1};

// 
constexpr auto fact19 = stmcpp::register_field<fa1r_register, 19, 1>{1};

// 
constexpr auto fact20 = stmcpp::register_field<fa1r_register, 20, 1>{1};

// 
constexpr auto fact21 = stmcpp::register_field<fa1r_register, 21, 1>{1};

// 
constexpr auto fact22 = stmcpp::register_field<fa1r_register, 22, 1>{1};

// 
constexpr auto fact23 = stmcpp::register_field<fa1r_register, 23, 1>{1};

// 
constexpr auto fact24 = stmcpp::register_field<fa1r_register, 24, 1>{1};

// 
constexpr auto fact25 = stmcpp::register_field<fa1r_register, 25, 1>{1};

// 
constexpr auto fact26 = stmcpp::register_field<fa1r_register, 26, 1>{1};

// 
constexpr auto fact27 = stmcpp::register_field<fa1r_register, 27, 1>{1};



} // namespace fa1r_fields

constexpr auto fa1r = fa1r_register{};


// 
using rf0r_register = stmcpp::register_wrapper<0x4000640c, 4, readj-write>;

namespace rf0r_fields
{

// 
constexpr auto rfom_release = stmcpp::register_field<rf1r_register, 5, 1>{1};

using rfom = stmcpp::register_field<rf1r_register, 5, 1>;


// 
constexpr auto fovr_nooverrun = stmcpp::register_field<rf1r_register, 4, 1>{0};

// 
constexpr auto fovr_overrun = stmcpp::register_field<rf1r_register, 4, 1>{1};

// 
constexpr auto fovr_clear = stmcpp::register_field<rf1r_register, 4, 1>{1};

using fovr = stmcpp::register_field<rf1r_register, 4, 1>;


// 
constexpr auto full_notfull = stmcpp::register_field<rf1r_register, 3, 1>{0};

// 
constexpr auto full_full = stmcpp::register_field<rf1r_register, 3, 1>{1};

// 
constexpr auto full_clear = stmcpp::register_field<rf1r_register, 3, 1>{1};

using full = stmcpp::register_field<rf1r_register, 3, 1>;





} // namespace rf0r_fields

constexpr auto rf0r = rf0r_register{};


// 
using rf1r_register = stmcpp::register_wrapper<0x40006410, 4, readj-write>;

namespace rf1r_fields
{

// 
constexpr auto rfom_release = stmcpp::register_field<rf1r_register, 5, 1>{1};

using rfom = stmcpp::register_field<rf1r_register, 5, 1>;


// 
constexpr auto fovr_nooverrun = stmcpp::register_field<rf1r_register, 4, 1>{0};

// 
constexpr auto fovr_overrun = stmcpp::register_field<rf1r_register, 4, 1>{1};

// 
constexpr auto fovr_clear = stmcpp::register_field<rf1r_register, 4, 1>{1};

using fovr = stmcpp::register_field<rf1r_register, 4, 1>;


// 
constexpr auto full_notfull = stmcpp::register_field<rf1r_register, 3, 1>{0};

// 
constexpr auto full_full = stmcpp::register_field<rf1r_register, 3, 1>{1};

// 
constexpr auto full_clear = stmcpp::register_field<rf1r_register, 3, 1>{1};

using full = stmcpp::register_field<rf1r_register, 3, 1>;





} // namespace rf1r_fields

constexpr auto rf1r = rf1r_register{};




} // namespace stmcpp::stm32f051::mcan