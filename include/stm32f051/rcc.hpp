
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

namespace stmcpp::stm32f051::mrcc
{

// 
using cr_register = stmcpp::register_wrapper<0x40021000, 4, readj-write>;

namespace cr_fields
{

// 
constexpr auto hsion_off = stmcpp::register_field<cr_register, 0, 1>{0};

// 
constexpr auto hsion_on = stmcpp::register_field<cr_register, 0, 1>{1};

using hsion = stmcpp::register_field<cr_register, 0, 1>;


// 
constexpr auto hsirdy_notready = stmcpp::register_field<cr_register, 1, 1>{0};

// 
constexpr auto hsirdy_ready = stmcpp::register_field<cr_register, 1, 1>{1};

using hsirdy = stmcpp::register_field<cr_register, 1, 1>;




// 
constexpr auto hseon = stmcpp::register_field<cr_register, 16, 1>{1};

// 
constexpr auto hserdy = stmcpp::register_field<cr_register, 17, 1>{1};

// 
constexpr auto hsebyp_notbypassed = stmcpp::register_field<cr_register, 18, 1>{0};

// 
constexpr auto hsebyp_bypassed = stmcpp::register_field<cr_register, 18, 1>{1};

using hsebyp = stmcpp::register_field<cr_register, 18, 1>;


// 
constexpr auto csson_off = stmcpp::register_field<cr_register, 19, 1>{0};

// 
constexpr auto csson_on = stmcpp::register_field<cr_register, 19, 1>{1};

using csson = stmcpp::register_field<cr_register, 19, 1>;


// 
constexpr auto pllon = stmcpp::register_field<cr_register, 24, 1>{1};

// 
constexpr auto pllrdy = stmcpp::register_field<cr_register, 25, 1>{1};



} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using cfgr_register = stmcpp::register_wrapper<0x40021004, 4, readj-write>;

namespace cfgr_fields
{

// 
constexpr auto sw_hsi48 = stmcpp::register_field<cfgr_register, 0, 2>{3};

// 
constexpr auto sw_hsi = stmcpp::register_field<cfgr_register, 0, 2>{0};

// 
constexpr auto sw_hse = stmcpp::register_field<cfgr_register, 0, 2>{1};

// 
constexpr auto sw_pll = stmcpp::register_field<cfgr_register, 0, 2>{2};

using sw = stmcpp::register_field<cfgr_register, 0, 2>;


// 
constexpr auto sws_hsi48 = stmcpp::register_field<cfgr_register, 2, 2>{3};

// 
constexpr auto sws_hsi = stmcpp::register_field<cfgr_register, 2, 2>{0};

// 
constexpr auto sws_hse = stmcpp::register_field<cfgr_register, 2, 2>{1};

// 
constexpr auto sws_pll = stmcpp::register_field<cfgr_register, 2, 2>{2};

using sws = stmcpp::register_field<cfgr_register, 2, 2>;


// 
constexpr auto hpre_div1 = stmcpp::register_field<cfgr_register, 4, 4>{0};

// 
constexpr auto hpre_div2 = stmcpp::register_field<cfgr_register, 4, 4>{8};

// 
constexpr auto hpre_div4 = stmcpp::register_field<cfgr_register, 4, 4>{9};

// 
constexpr auto hpre_div8 = stmcpp::register_field<cfgr_register, 4, 4>{10};

// 
constexpr auto hpre_div16 = stmcpp::register_field<cfgr_register, 4, 4>{11};

// 
constexpr auto hpre_div64 = stmcpp::register_field<cfgr_register, 4, 4>{12};

// 
constexpr auto hpre_div128 = stmcpp::register_field<cfgr_register, 4, 4>{13};

// 
constexpr auto hpre_div256 = stmcpp::register_field<cfgr_register, 4, 4>{14};

// 
constexpr auto hpre_div512 = stmcpp::register_field<cfgr_register, 4, 4>{15};

using hpre = stmcpp::register_field<cfgr_register, 4, 4>;


// 
constexpr auto ppre_div1 = stmcpp::register_field<cfgr_register, 8, 3>{0};

// 
constexpr auto ppre_div2 = stmcpp::register_field<cfgr_register, 8, 3>{4};

// 
constexpr auto ppre_div4 = stmcpp::register_field<cfgr_register, 8, 3>{5};

// 
constexpr auto ppre_div8 = stmcpp::register_field<cfgr_register, 8, 3>{6};

// 
constexpr auto ppre_div16 = stmcpp::register_field<cfgr_register, 8, 3>{7};

using ppre = stmcpp::register_field<cfgr_register, 8, 3>;


// 
constexpr auto adcpre = stmcpp::register_field<cfgr_register, 14, 1>{1};

// 
constexpr auto pllsrc_hsi48_div_prediv = stmcpp::register_field<cfgr_register, 15, 2>{3};

// 
constexpr auto pllsrc_hsi_div2 = stmcpp::register_field<cfgr_register, 15, 2>{0};

// 
constexpr auto pllsrc_hsi_div_prediv = stmcpp::register_field<cfgr_register, 15, 2>{1};

// 
constexpr auto pllsrc_hse_div_prediv = stmcpp::register_field<cfgr_register, 15, 2>{2};

using pllsrc = stmcpp::register_field<cfgr_register, 15, 2>;


// 
constexpr auto pllxtpre_div1 = stmcpp::register_field<cfgr_register, 17, 1>{0};

// 
constexpr auto pllxtpre_div2 = stmcpp::register_field<cfgr_register, 17, 1>{1};

using pllxtpre = stmcpp::register_field<cfgr_register, 17, 1>;


// 
constexpr auto pllmul_mul2 = stmcpp::register_field<cfgr_register, 18, 4>{0};

// 
constexpr auto pllmul_mul3 = stmcpp::register_field<cfgr_register, 18, 4>{1};

// 
constexpr auto pllmul_mul4 = stmcpp::register_field<cfgr_register, 18, 4>{2};

// 
constexpr auto pllmul_mul5 = stmcpp::register_field<cfgr_register, 18, 4>{3};

// 
constexpr auto pllmul_mul6 = stmcpp::register_field<cfgr_register, 18, 4>{4};

// 
constexpr auto pllmul_mul7 = stmcpp::register_field<cfgr_register, 18, 4>{5};

// 
constexpr auto pllmul_mul8 = stmcpp::register_field<cfgr_register, 18, 4>{6};

// 
constexpr auto pllmul_mul9 = stmcpp::register_field<cfgr_register, 18, 4>{7};

// 
constexpr auto pllmul_mul10 = stmcpp::register_field<cfgr_register, 18, 4>{8};

// 
constexpr auto pllmul_mul11 = stmcpp::register_field<cfgr_register, 18, 4>{9};

// 
constexpr auto pllmul_mul12 = stmcpp::register_field<cfgr_register, 18, 4>{10};

// 
constexpr auto pllmul_mul13 = stmcpp::register_field<cfgr_register, 18, 4>{11};

// 
constexpr auto pllmul_mul14 = stmcpp::register_field<cfgr_register, 18, 4>{12};

// 
constexpr auto pllmul_mul15 = stmcpp::register_field<cfgr_register, 18, 4>{13};

// 
constexpr auto pllmul_mul16 = stmcpp::register_field<cfgr_register, 18, 4>{14};

// 
constexpr auto pllmul_mul16x = stmcpp::register_field<cfgr_register, 18, 4>{15};

using pllmul = stmcpp::register_field<cfgr_register, 18, 4>;


// 
constexpr auto mco_hsi14 = stmcpp::register_field<cfgr_register, 24, 4>{1};

// 
constexpr auto mco_hsi48 = stmcpp::register_field<cfgr_register, 24, 4>{8};

// 
constexpr auto mco_nomco = stmcpp::register_field<cfgr_register, 24, 4>{0};

// 
constexpr auto mco_lsi = stmcpp::register_field<cfgr_register, 24, 4>{2};

// 
constexpr auto mco_lse = stmcpp::register_field<cfgr_register, 24, 4>{3};

// 
constexpr auto mco_sysclk = stmcpp::register_field<cfgr_register, 24, 4>{4};

// 
constexpr auto mco_hsi = stmcpp::register_field<cfgr_register, 24, 4>{5};

// 
constexpr auto mco_hse = stmcpp::register_field<cfgr_register, 24, 4>{6};

// 
constexpr auto mco_pll = stmcpp::register_field<cfgr_register, 24, 4>{7};

using mco = stmcpp::register_field<cfgr_register, 24, 4>;


// 
constexpr auto mcopre_div1 = stmcpp::register_field<cfgr_register, 28, 3>{0};

// 
constexpr auto mcopre_div2 = stmcpp::register_field<cfgr_register, 28, 3>{1};

// 
constexpr auto mcopre_div4 = stmcpp::register_field<cfgr_register, 28, 3>{2};

// 
constexpr auto mcopre_div8 = stmcpp::register_field<cfgr_register, 28, 3>{3};

// 
constexpr auto mcopre_div16 = stmcpp::register_field<cfgr_register, 28, 3>{4};

// 
constexpr auto mcopre_div32 = stmcpp::register_field<cfgr_register, 28, 3>{5};

// 
constexpr auto mcopre_div64 = stmcpp::register_field<cfgr_register, 28, 3>{6};

// 
constexpr auto mcopre_div128 = stmcpp::register_field<cfgr_register, 28, 3>{7};

using mcopre = stmcpp::register_field<cfgr_register, 28, 3>;


// 
constexpr auto pllnodiv_div2 = stmcpp::register_field<cfgr_register, 31, 1>{0};

// 
constexpr auto pllnodiv_div1 = stmcpp::register_field<cfgr_register, 31, 1>{1};

using pllnodiv = stmcpp::register_field<cfgr_register, 31, 1>;




} // namespace cfgr_fields

constexpr auto cfgr = cfgr_register{};


// 
using cir_register = stmcpp::register_wrapper<0x40021008, 4, readj-write>;

namespace cir_fields
{

// 
constexpr auto lsirdyf_notinterrupted = stmcpp::register_field<cir_register, 0, 1>{0};

// 
constexpr auto lsirdyf_interrupted = stmcpp::register_field<cir_register, 0, 1>{1};

using lsirdyf = stmcpp::register_field<cir_register, 0, 1>;


// 
constexpr auto lserdyf = stmcpp::register_field<cir_register, 1, 1>{1};

// 
constexpr auto hsirdyf = stmcpp::register_field<cir_register, 2, 1>{1};

// 
constexpr auto hserdyf = stmcpp::register_field<cir_register, 3, 1>{1};

// 
constexpr auto pllrdyf = stmcpp::register_field<cir_register, 4, 1>{1};

// 
constexpr auto hsi14rdyf = stmcpp::register_field<cir_register, 5, 1>{1};

// 
constexpr auto hsi48rdyf = stmcpp::register_field<cir_register, 6, 1>{1};

// 
constexpr auto cssf_notinterrupted = stmcpp::register_field<cir_register, 7, 1>{0};

// 
constexpr auto cssf_interrupted = stmcpp::register_field<cir_register, 7, 1>{1};

using cssf = stmcpp::register_field<cir_register, 7, 1>;


// 
constexpr auto lsirdyie_disabled = stmcpp::register_field<cir_register, 8, 1>{0};

// 
constexpr auto lsirdyie_enabled = stmcpp::register_field<cir_register, 8, 1>{1};

using lsirdyie = stmcpp::register_field<cir_register, 8, 1>;


// 
constexpr auto lserdyie = stmcpp::register_field<cir_register, 9, 1>{1};

// 
constexpr auto hsirdyie = stmcpp::register_field<cir_register, 10, 1>{1};

// 
constexpr auto hserdyie = stmcpp::register_field<cir_register, 11, 1>{1};

// 
constexpr auto pllrdyie = stmcpp::register_field<cir_register, 12, 1>{1};

// 
constexpr auto hsi14rdyie = stmcpp::register_field<cir_register, 13, 1>{1};

// 
constexpr auto hsi48rdyie = stmcpp::register_field<cir_register, 14, 1>{1};

// 
constexpr auto lsirdyc_clear = stmcpp::register_field<cir_register, 16, 1>{1};

using lsirdyc = stmcpp::register_field<cir_register, 16, 1>;


// 
constexpr auto lserdyc = stmcpp::register_field<cir_register, 17, 1>{1};

// 
constexpr auto hsirdyc = stmcpp::register_field<cir_register, 18, 1>{1};

// 
constexpr auto hserdyc = stmcpp::register_field<cir_register, 19, 1>{1};

// 
constexpr auto pllrdyc = stmcpp::register_field<cir_register, 20, 1>{1};

// 
constexpr auto hsi14rdyc = stmcpp::register_field<cir_register, 21, 1>{1};

// 
constexpr auto hsi48rdyc = stmcpp::register_field<cir_register, 22, 1>{1};

// 
constexpr auto cssc_clear = stmcpp::register_field<cir_register, 23, 1>{1};

using cssc = stmcpp::register_field<cir_register, 23, 1>;




} // namespace cir_fields

constexpr auto cir = cir_register{};


// 
using apb2rstr_register = stmcpp::register_wrapper<0x4002100c, 4, stmcpp::read_write_flag>;

namespace apb2rstr_fields
{

// 
constexpr auto syscfgrst_reset = stmcpp::register_field<apb2rstr_register, 0, 1>{1};

using syscfgrst = stmcpp::register_field<apb2rstr_register, 0, 1>;


// 
constexpr auto adcrst = stmcpp::register_field<apb2rstr_register, 9, 1>{1};

// 
constexpr auto tim1rst = stmcpp::register_field<apb2rstr_register, 11, 1>{1};

// 
constexpr auto spi1rst = stmcpp::register_field<apb2rstr_register, 12, 1>{1};

// 
constexpr auto usart1rst = stmcpp::register_field<apb2rstr_register, 14, 1>{1};

// 
constexpr auto tim15rst = stmcpp::register_field<apb2rstr_register, 16, 1>{1};

// 
constexpr auto tim16rst = stmcpp::register_field<apb2rstr_register, 17, 1>{1};

// 
constexpr auto tim17rst = stmcpp::register_field<apb2rstr_register, 18, 1>{1};

// 
constexpr auto dbgmcurst = stmcpp::register_field<apb2rstr_register, 22, 1>{1};

// 
constexpr auto usart6rst = stmcpp::register_field<apb2rstr_register, 5, 1>{1};

// 
constexpr auto usart8rst = stmcpp::register_field<apb2rstr_register, 7, 1>{1};

// 
constexpr auto usart7rst = stmcpp::register_field<apb2rstr_register, 6, 1>{1};



} // namespace apb2rstr_fields

constexpr auto apb2rstr = apb2rstr_register{};


// 
using apb1rstr_register = stmcpp::register_wrapper<0x40021010, 4, stmcpp::read_write_flag>;

namespace apb1rstr_fields
{

// 
constexpr auto tim2rst_reset = stmcpp::register_field<apb1rstr_register, 0, 1>{1};

using tim2rst = stmcpp::register_field<apb1rstr_register, 0, 1>;


// 
constexpr auto tim3rst = stmcpp::register_field<apb1rstr_register, 1, 1>{1};

// 
constexpr auto tim6rst = stmcpp::register_field<apb1rstr_register, 4, 1>{1};

// 
constexpr auto tim7rst = stmcpp::register_field<apb1rstr_register, 5, 1>{1};

// 
constexpr auto tim14rst = stmcpp::register_field<apb1rstr_register, 8, 1>{1};

// 
constexpr auto wwdgrst = stmcpp::register_field<apb1rstr_register, 11, 1>{1};

// 
constexpr auto spi2rst = stmcpp::register_field<apb1rstr_register, 14, 1>{1};

// 
constexpr auto usart2rst = stmcpp::register_field<apb1rstr_register, 17, 1>{1};

// 
constexpr auto usart3rst = stmcpp::register_field<apb1rstr_register, 18, 1>{1};

// 
constexpr auto usart4rst = stmcpp::register_field<apb1rstr_register, 19, 1>{1};

// 
constexpr auto usart5rst = stmcpp::register_field<apb1rstr_register, 20, 1>{1};

// 
constexpr auto i2c1rst = stmcpp::register_field<apb1rstr_register, 21, 1>{1};

// 
constexpr auto i2c2rst = stmcpp::register_field<apb1rstr_register, 22, 1>{1};

// 
constexpr auto usbrst = stmcpp::register_field<apb1rstr_register, 23, 1>{1};

// 
constexpr auto canrst = stmcpp::register_field<apb1rstr_register, 25, 1>{1};

// 
constexpr auto crsrst = stmcpp::register_field<apb1rstr_register, 27, 1>{1};

// 
constexpr auto pwrrst = stmcpp::register_field<apb1rstr_register, 28, 1>{1};

// 
constexpr auto dacrst = stmcpp::register_field<apb1rstr_register, 29, 1>{1};

// 
constexpr auto cecrst = stmcpp::register_field<apb1rstr_register, 30, 1>{1};



} // namespace apb1rstr_fields

constexpr auto apb1rstr = apb1rstr_register{};


// 
using ahbenr_register = stmcpp::register_wrapper<0x40021014, 4, stmcpp::read_write_flag>;

namespace ahbenr_fields
{

// 
constexpr auto dmaen_disabled = stmcpp::register_field<ahbenr_register, 0, 1>{0};

// 
constexpr auto dmaen_enabled = stmcpp::register_field<ahbenr_register, 0, 1>{1};

using dmaen = stmcpp::register_field<ahbenr_register, 0, 1>;


// 
constexpr auto dma2en = stmcpp::register_field<ahbenr_register, 1, 1>{1};

// 
constexpr auto sramen = stmcpp::register_field<ahbenr_register, 2, 1>{1};

// 
constexpr auto flitfen = stmcpp::register_field<ahbenr_register, 4, 1>{1};

// 
constexpr auto crcen = stmcpp::register_field<ahbenr_register, 6, 1>{1};

// 
constexpr auto iopaen = stmcpp::register_field<ahbenr_register, 17, 1>{1};

// 
constexpr auto iopben = stmcpp::register_field<ahbenr_register, 18, 1>{1};

// 
constexpr auto iopcen = stmcpp::register_field<ahbenr_register, 19, 1>{1};

// 
constexpr auto iopden = stmcpp::register_field<ahbenr_register, 20, 1>{1};

// 
constexpr auto iopfen = stmcpp::register_field<ahbenr_register, 22, 1>{1};

// 
constexpr auto tscen = stmcpp::register_field<ahbenr_register, 24, 1>{1};

// 
constexpr auto iopeen = stmcpp::register_field<ahbenr_register, 21, 1>{1};



} // namespace ahbenr_fields

constexpr auto ahbenr = ahbenr_register{};


// 
using apb2enr_register = stmcpp::register_wrapper<0x40021018, 4, stmcpp::read_write_flag>;

namespace apb2enr_fields
{

// 
constexpr auto syscfgen_disabled = stmcpp::register_field<apb2enr_register, 0, 1>{0};

// 
constexpr auto syscfgen_enabled = stmcpp::register_field<apb2enr_register, 0, 1>{1};

using syscfgen = stmcpp::register_field<apb2enr_register, 0, 1>;


// 
constexpr auto adcen = stmcpp::register_field<apb2enr_register, 9, 1>{1};

// 
constexpr auto tim1en = stmcpp::register_field<apb2enr_register, 11, 1>{1};

// 
constexpr auto spi1en = stmcpp::register_field<apb2enr_register, 12, 1>{1};

// 
constexpr auto usart1en = stmcpp::register_field<apb2enr_register, 14, 1>{1};

// 
constexpr auto tim15en = stmcpp::register_field<apb2enr_register, 16, 1>{1};

// 
constexpr auto tim16en = stmcpp::register_field<apb2enr_register, 17, 1>{1};

// 
constexpr auto tim17en = stmcpp::register_field<apb2enr_register, 18, 1>{1};

// 
constexpr auto dbgmcuen = stmcpp::register_field<apb2enr_register, 22, 1>{1};

// 
constexpr auto usart6en = stmcpp::register_field<apb2enr_register, 5, 1>{1};

// 
constexpr auto usart8en = stmcpp::register_field<apb2enr_register, 7, 1>{1};

// 
constexpr auto usart7en = stmcpp::register_field<apb2enr_register, 6, 1>{1};



} // namespace apb2enr_fields

constexpr auto apb2enr = apb2enr_register{};


// 
using apb1enr_register = stmcpp::register_wrapper<0x4002101c, 4, stmcpp::read_write_flag>;

namespace apb1enr_fields
{

// 
constexpr auto tim2en_disabled = stmcpp::register_field<apb1enr_register, 0, 1>{0};

// 
constexpr auto tim2en_enabled = stmcpp::register_field<apb1enr_register, 0, 1>{1};

using tim2en = stmcpp::register_field<apb1enr_register, 0, 1>;


// 
constexpr auto tim3en = stmcpp::register_field<apb1enr_register, 1, 1>{1};

// 
constexpr auto tim6en = stmcpp::register_field<apb1enr_register, 4, 1>{1};

// 
constexpr auto tim7en = stmcpp::register_field<apb1enr_register, 5, 1>{1};

// 
constexpr auto tim14en = stmcpp::register_field<apb1enr_register, 8, 1>{1};

// 
constexpr auto wwdgen = stmcpp::register_field<apb1enr_register, 11, 1>{1};

// 
constexpr auto spi2en = stmcpp::register_field<apb1enr_register, 14, 1>{1};

// 
constexpr auto usart2en = stmcpp::register_field<apb1enr_register, 17, 1>{1};

// 
constexpr auto usart3en = stmcpp::register_field<apb1enr_register, 18, 1>{1};

// 
constexpr auto usart4en = stmcpp::register_field<apb1enr_register, 19, 1>{1};

// 
constexpr auto usart5en = stmcpp::register_field<apb1enr_register, 20, 1>{1};

// 
constexpr auto i2c1en = stmcpp::register_field<apb1enr_register, 21, 1>{1};

// 
constexpr auto i2c2en = stmcpp::register_field<apb1enr_register, 22, 1>{1};

// 
constexpr auto usben = stmcpp::register_field<apb1enr_register, 23, 1>{1};

// 
constexpr auto canen = stmcpp::register_field<apb1enr_register, 25, 1>{1};

// 
constexpr auto crsen = stmcpp::register_field<apb1enr_register, 27, 1>{1};

// 
constexpr auto pwren = stmcpp::register_field<apb1enr_register, 28, 1>{1};

// 
constexpr auto dacen = stmcpp::register_field<apb1enr_register, 29, 1>{1};

// 
constexpr auto cecen = stmcpp::register_field<apb1enr_register, 30, 1>{1};



} // namespace apb1enr_fields

constexpr auto apb1enr = apb1enr_register{};


// 
using bdcr_register = stmcpp::register_wrapper<0x40021020, 4, readj-write>;

namespace bdcr_fields
{

// 
constexpr auto lseon_off = stmcpp::register_field<bdcr_register, 0, 1>{0};

// 
constexpr auto lseon_on = stmcpp::register_field<bdcr_register, 0, 1>{1};

using lseon = stmcpp::register_field<bdcr_register, 0, 1>;


// 
constexpr auto lserdy_notready = stmcpp::register_field<bdcr_register, 1, 1>{0};

// 
constexpr auto lserdy_ready = stmcpp::register_field<bdcr_register, 1, 1>{1};

using lserdy = stmcpp::register_field<bdcr_register, 1, 1>;


// 
constexpr auto lsebyp_notbypassed = stmcpp::register_field<bdcr_register, 2, 1>{0};

// 
constexpr auto lsebyp_bypassed = stmcpp::register_field<bdcr_register, 2, 1>{1};

using lsebyp = stmcpp::register_field<bdcr_register, 2, 1>;


// 
constexpr auto lsedrv_low = stmcpp::register_field<bdcr_register, 3, 2>{0};

// 
constexpr auto lsedrv_mediumhigh = stmcpp::register_field<bdcr_register, 3, 2>{1};

// 
constexpr auto lsedrv_mediumlow = stmcpp::register_field<bdcr_register, 3, 2>{2};

// 
constexpr auto lsedrv_high = stmcpp::register_field<bdcr_register, 3, 2>{3};

using lsedrv = stmcpp::register_field<bdcr_register, 3, 2>;


// 
constexpr auto rtcsel_noclock = stmcpp::register_field<bdcr_register, 8, 2>{0};

// 
constexpr auto rtcsel_lse = stmcpp::register_field<bdcr_register, 8, 2>{1};

// 
constexpr auto rtcsel_lsi = stmcpp::register_field<bdcr_register, 8, 2>{2};

// 
constexpr auto rtcsel_hse = stmcpp::register_field<bdcr_register, 8, 2>{3};

using rtcsel = stmcpp::register_field<bdcr_register, 8, 2>;


// 
constexpr auto rtcen_disabled = stmcpp::register_field<bdcr_register, 15, 1>{0};

// 
constexpr auto rtcen_enabled = stmcpp::register_field<bdcr_register, 15, 1>{1};

using rtcen = stmcpp::register_field<bdcr_register, 15, 1>;


// 
constexpr auto bdrst_disabled = stmcpp::register_field<bdcr_register, 16, 1>{0};

// 
constexpr auto bdrst_enabled = stmcpp::register_field<bdcr_register, 16, 1>{1};

using bdrst = stmcpp::register_field<bdcr_register, 16, 1>;




} // namespace bdcr_fields

constexpr auto bdcr = bdcr_register{};


// 
using csr_register = stmcpp::register_wrapper<0x40021024, 4, readj-write>;

namespace csr_fields
{

// 
constexpr auto lsion_off = stmcpp::register_field<csr_register, 0, 1>{0};

// 
constexpr auto lsion_on = stmcpp::register_field<csr_register, 0, 1>{1};

using lsion = stmcpp::register_field<csr_register, 0, 1>;


// 
constexpr auto lsirdy_notready = stmcpp::register_field<csr_register, 1, 1>{0};

// 
constexpr auto lsirdy_ready = stmcpp::register_field<csr_register, 1, 1>{1};

using lsirdy = stmcpp::register_field<csr_register, 1, 1>;


// 
constexpr auto rmvf_clear = stmcpp::register_field<csr_register, 24, 1>{1};

using rmvf = stmcpp::register_field<csr_register, 24, 1>;


// 
constexpr auto oblrstf = stmcpp::register_field<csr_register, 25, 1>{1};

// 
constexpr auto pinrstf = stmcpp::register_field<csr_register, 26, 1>{1};

// 
constexpr auto porrstf = stmcpp::register_field<csr_register, 27, 1>{1};

// 
constexpr auto sftrstf = stmcpp::register_field<csr_register, 28, 1>{1};

// 
constexpr auto iwdgrstf = stmcpp::register_field<csr_register, 29, 1>{1};

// 
constexpr auto wwdgrstf = stmcpp::register_field<csr_register, 30, 1>{1};

// 
constexpr auto lpwrrstf = stmcpp::register_field<csr_register, 31, 1>{1};

// 
constexpr auto v18pwrrstf_noreset = stmcpp::register_field<csr_register, 23, 1>{0};

// 
constexpr auto v18pwrrstf_reset = stmcpp::register_field<csr_register, 23, 1>{1};

using v18pwrrstf = stmcpp::register_field<csr_register, 23, 1>;




} // namespace csr_fields

constexpr auto csr = csr_register{};


// 
using ahbrstr_register = stmcpp::register_wrapper<0x40021028, 4, stmcpp::read_write_flag>;

namespace ahbrstr_fields
{

// 
constexpr auto ioparst_reset = stmcpp::register_field<ahbrstr_register, 17, 1>{1};

using ioparst = stmcpp::register_field<ahbrstr_register, 17, 1>;


// 
constexpr auto iopbrst = stmcpp::register_field<ahbrstr_register, 18, 1>{1};

// 
constexpr auto iopcrst = stmcpp::register_field<ahbrstr_register, 19, 1>{1};

// 
constexpr auto iopdrst = stmcpp::register_field<ahbrstr_register, 20, 1>{1};

// 
constexpr auto iopfrst = stmcpp::register_field<ahbrstr_register, 22, 1>{1};

// 
constexpr auto tscrst = stmcpp::register_field<ahbrstr_register, 24, 1>{1};

// 
constexpr auto ioperst = stmcpp::register_field<ahbrstr_register, 21, 1>{1};



} // namespace ahbrstr_fields

constexpr auto ahbrstr = ahbrstr_register{};


// 
using cfgr2_register = stmcpp::register_wrapper<0x4002102c, 4, stmcpp::read_write_flag>;

namespace cfgr2_fields
{

// 
constexpr auto prediv_div1 = stmcpp::register_field<cfgr2_register, 0, 4>{0};

// 
constexpr auto prediv_div2 = stmcpp::register_field<cfgr2_register, 0, 4>{1};

// 
constexpr auto prediv_div3 = stmcpp::register_field<cfgr2_register, 0, 4>{2};

// 
constexpr auto prediv_div4 = stmcpp::register_field<cfgr2_register, 0, 4>{3};

// 
constexpr auto prediv_div5 = stmcpp::register_field<cfgr2_register, 0, 4>{4};

// 
constexpr auto prediv_div6 = stmcpp::register_field<cfgr2_register, 0, 4>{5};

// 
constexpr auto prediv_div7 = stmcpp::register_field<cfgr2_register, 0, 4>{6};

// 
constexpr auto prediv_div8 = stmcpp::register_field<cfgr2_register, 0, 4>{7};

// 
constexpr auto prediv_div9 = stmcpp::register_field<cfgr2_register, 0, 4>{8};

// 
constexpr auto prediv_div10 = stmcpp::register_field<cfgr2_register, 0, 4>{9};

// 
constexpr auto prediv_div11 = stmcpp::register_field<cfgr2_register, 0, 4>{10};

// 
constexpr auto prediv_div12 = stmcpp::register_field<cfgr2_register, 0, 4>{11};

// 
constexpr auto prediv_div13 = stmcpp::register_field<cfgr2_register, 0, 4>{12};

// 
constexpr auto prediv_div14 = stmcpp::register_field<cfgr2_register, 0, 4>{13};

// 
constexpr auto prediv_div15 = stmcpp::register_field<cfgr2_register, 0, 4>{14};

// 
constexpr auto prediv_div16 = stmcpp::register_field<cfgr2_register, 0, 4>{15};

using prediv = stmcpp::register_field<cfgr2_register, 0, 4>;




} // namespace cfgr2_fields

constexpr auto cfgr2 = cfgr2_register{};


// 
using cfgr3_register = stmcpp::register_wrapper<0x40021030, 4, stmcpp::read_write_flag>;

namespace cfgr3_fields
{

// 
constexpr auto usart1sw_pclk = stmcpp::register_field<cfgr3_register, 0, 2>{0};

// 
constexpr auto usart1sw_sysclk = stmcpp::register_field<cfgr3_register, 0, 2>{1};

// 
constexpr auto usart1sw_lse = stmcpp::register_field<cfgr3_register, 0, 2>{2};

// 
constexpr auto usart1sw_hsi = stmcpp::register_field<cfgr3_register, 0, 2>{3};

using usart1sw = stmcpp::register_field<cfgr3_register, 0, 2>;


// 
constexpr auto i2c1sw_hsi = stmcpp::register_field<cfgr3_register, 4, 1>{0};

// 
constexpr auto i2c1sw_sysclk = stmcpp::register_field<cfgr3_register, 4, 1>{1};

using i2c1sw = stmcpp::register_field<cfgr3_register, 4, 1>;


// 
constexpr auto cecsw_hsi_div244 = stmcpp::register_field<cfgr3_register, 6, 1>{0};

// 
constexpr auto cecsw_lse = stmcpp::register_field<cfgr3_register, 6, 1>{1};

using cecsw = stmcpp::register_field<cfgr3_register, 6, 1>;


// 
constexpr auto usbsw_hsi48 = stmcpp::register_field<cfgr3_register, 7, 1>{0};

// 
constexpr auto usbsw_pllclk = stmcpp::register_field<cfgr3_register, 7, 1>{1};

using usbsw = stmcpp::register_field<cfgr3_register, 7, 1>;


// 
constexpr auto adcsw = stmcpp::register_field<cfgr3_register, 8, 1>{1};





} // namespace cfgr3_fields

constexpr auto cfgr3 = cfgr3_register{};


// 
using cr2_register = stmcpp::register_wrapper<0x40021034, 4, readj-write>;

namespace cr2_fields
{

// 
constexpr auto hsi14on_off = stmcpp::register_field<cr2_register, 0, 1>{0};

// 
constexpr auto hsi14on_on = stmcpp::register_field<cr2_register, 0, 1>{1};

using hsi14on = stmcpp::register_field<cr2_register, 0, 1>;


// 
constexpr auto hsi14rdy_notready = stmcpp::register_field<cr2_register, 1, 1>{0};

// 
constexpr auto hsi14rdy_ready = stmcpp::register_field<cr2_register, 1, 1>{1};

using hsi14rdy = stmcpp::register_field<cr2_register, 1, 1>;


// 
constexpr auto hsi14dis_allow = stmcpp::register_field<cr2_register, 2, 1>{0};

// 
constexpr auto hsi14dis_disallow = stmcpp::register_field<cr2_register, 2, 1>{1};

using hsi14dis = stmcpp::register_field<cr2_register, 2, 1>;




// 
constexpr auto hsi48on_off = stmcpp::register_field<cr2_register, 16, 1>{0};

// 
constexpr auto hsi48on_on = stmcpp::register_field<cr2_register, 16, 1>{1};

using hsi48on = stmcpp::register_field<cr2_register, 16, 1>;


// 
constexpr auto hsi48rdy_notready = stmcpp::register_field<cr2_register, 17, 1>{0};

// 
constexpr auto hsi48rdy_ready = stmcpp::register_field<cr2_register, 17, 1>{1};

using hsi48rdy = stmcpp::register_field<cr2_register, 17, 1>;





} // namespace cr2_fields

constexpr auto cr2 = cr2_register{};




} // namespace stmcpp::stm32f051::mrcc