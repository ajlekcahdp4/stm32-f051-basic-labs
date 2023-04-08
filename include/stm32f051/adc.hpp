
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

namespace stmcpp::stm32f051::madc {

//
using isr_register = stmcpp::register_wrapper<0x40012400, 4, stmcpp::read_write_flag>;

namespace isr_fields {

//
constexpr auto awd_noevent = stmcpp::register_field<isr_register, 7, 1>{0};

//
constexpr auto awd_event = stmcpp::register_field<isr_register, 7, 1>{1};

//
constexpr auto awd_clear = stmcpp::register_field<isr_register, 7, 1>{1};

using awd = stmcpp::register_field<isr_register, 7, 1>;

//
constexpr auto ovr_nooverrun = stmcpp::register_field<isr_register, 4, 1>{0};

//
constexpr auto ovr_overrun = stmcpp::register_field<isr_register, 4, 1>{1};

//
constexpr auto ovr_clear = stmcpp::register_field<isr_register, 4, 1>{1};

using ovr = stmcpp::register_field<isr_register, 4, 1>;

//
constexpr auto eoseq_notcomplete = stmcpp::register_field<isr_register, 3, 1>{0};

//
constexpr auto eoseq_complete = stmcpp::register_field<isr_register, 3, 1>{1};

//
constexpr auto eoseq_clear = stmcpp::register_field<isr_register, 3, 1>{1};

using eoseq = stmcpp::register_field<isr_register, 3, 1>;

//
constexpr auto eoc_notcomplete = stmcpp::register_field<isr_register, 2, 1>{0};

//
constexpr auto eoc_complete = stmcpp::register_field<isr_register, 2, 1>{1};

//
constexpr auto eoc_clear = stmcpp::register_field<isr_register, 2, 1>{1};

using eoc = stmcpp::register_field<isr_register, 2, 1>;

//
constexpr auto eosmp_notatend = stmcpp::register_field<isr_register, 1, 1>{0};

//
constexpr auto eosmp_atend = stmcpp::register_field<isr_register, 1, 1>{1};

//
constexpr auto eosmp_clear = stmcpp::register_field<isr_register, 1, 1>{1};

using eosmp = stmcpp::register_field<isr_register, 1, 1>;

//
constexpr auto adrdy_notready = stmcpp::register_field<isr_register, 0, 1>{0};

//
constexpr auto adrdy_ready = stmcpp::register_field<isr_register, 0, 1>{1};

//
constexpr auto adrdy_clear = stmcpp::register_field<isr_register, 0, 1>{1};

using adrdy = stmcpp::register_field<isr_register, 0, 1>;

} // namespace isr_fields

constexpr auto isr = isr_register{};

//
using ier_register = stmcpp::register_wrapper<0x40012404, 4, stmcpp::read_write_flag>;

namespace ier_fields {

//
constexpr auto awdie_disabled = stmcpp::register_field<ier_register, 7, 1>{0};

//
constexpr auto awdie_enabled = stmcpp::register_field<ier_register, 7, 1>{1};

using awdie = stmcpp::register_field<ier_register, 7, 1>;

//
constexpr auto ovrie_disabled = stmcpp::register_field<ier_register, 4, 1>{0};

//
constexpr auto ovrie_enabled = stmcpp::register_field<ier_register, 4, 1>{1};

using ovrie = stmcpp::register_field<ier_register, 4, 1>;

//
constexpr auto eoseqie_disabled = stmcpp::register_field<ier_register, 3, 1>{0};

//
constexpr auto eoseqie_enabled = stmcpp::register_field<ier_register, 3, 1>{1};

using eoseqie = stmcpp::register_field<ier_register, 3, 1>;

//
constexpr auto eocie_disabled = stmcpp::register_field<ier_register, 2, 1>{0};

//
constexpr auto eocie_enabled = stmcpp::register_field<ier_register, 2, 1>{1};

using eocie = stmcpp::register_field<ier_register, 2, 1>;

//
constexpr auto eosmpie_disabled = stmcpp::register_field<ier_register, 1, 1>{0};

//
constexpr auto eosmpie_enabled = stmcpp::register_field<ier_register, 1, 1>{1};

using eosmpie = stmcpp::register_field<ier_register, 1, 1>;

//
constexpr auto adrdyie_disabled = stmcpp::register_field<ier_register, 0, 1>{0};

//
constexpr auto adrdyie_enabled = stmcpp::register_field<ier_register, 0, 1>{1};

using adrdyie = stmcpp::register_field<ier_register, 0, 1>;

} // namespace ier_fields

constexpr auto ier = ier_register{};

//
using cr_register = stmcpp::register_wrapper<0x40012408, 4, stmcpp::read_write_flag>;

namespace cr_fields {

//
constexpr auto adcal_notcalibrating = stmcpp::register_field<cr_register, 31, 1>{0};

//
constexpr auto adcal_calibrating = stmcpp::register_field<cr_register, 31, 1>{1};

//
constexpr auto adcal_startcalibration = stmcpp::register_field<cr_register, 31, 1>{1};

using adcal = stmcpp::register_field<cr_register, 31, 1>;

//
constexpr auto adstp_notstopping = stmcpp::register_field<cr_register, 4, 1>{0};

//
constexpr auto adstp_stopping = stmcpp::register_field<cr_register, 4, 1>{1};

//
constexpr auto adstp_stopconversion = stmcpp::register_field<cr_register, 4, 1>{1};

using adstp = stmcpp::register_field<cr_register, 4, 1>;

//
constexpr auto adstart_notactive = stmcpp::register_field<cr_register, 2, 1>{0};

//
constexpr auto adstart_active = stmcpp::register_field<cr_register, 2, 1>{1};

//
constexpr auto adstart_startconversion = stmcpp::register_field<cr_register, 2, 1>{1};

using adstart = stmcpp::register_field<cr_register, 2, 1>;

//
constexpr auto addis_notdisabling = stmcpp::register_field<cr_register, 1, 1>{0};

//
constexpr auto addis_disabling = stmcpp::register_field<cr_register, 1, 1>{1};

//
constexpr auto addis_disable = stmcpp::register_field<cr_register, 1, 1>{1};

using addis = stmcpp::register_field<cr_register, 1, 1>;

//
constexpr auto aden_disabled = stmcpp::register_field<cr_register, 0, 1>{0};

//
constexpr auto aden_enabled = stmcpp::register_field<cr_register, 0, 1>{1};

//
constexpr auto aden_enabled = stmcpp::register_field<cr_register, 0, 1>{1};

using aden = stmcpp::register_field<cr_register, 0, 1>;

} // namespace cr_fields

constexpr auto cr = cr_register{};

//
using cfgr1_register = stmcpp::register_wrapper<0x4001240c, 4, stmcpp::read_write_flag>;

namespace cfgr1_fields {

//
constexpr auto awden_disabled = stmcpp::register_field<cfgr1_register, 23, 1>{0};

//
constexpr auto awden_enabled = stmcpp::register_field<cfgr1_register, 23, 1>{1};

using awden = stmcpp::register_field<cfgr1_register, 23, 1>;

//
constexpr auto awdsgl_allchannels = stmcpp::register_field<cfgr1_register, 22, 1>{0};

//
constexpr auto awdsgl_singlechannel = stmcpp::register_field<cfgr1_register, 22, 1>{1};

using awdsgl = stmcpp::register_field<cfgr1_register, 22, 1>;

//
constexpr auto discen_disabled = stmcpp::register_field<cfgr1_register, 16, 1>{0};

//
constexpr auto discen_enabled = stmcpp::register_field<cfgr1_register, 16, 1>{1};

using discen = stmcpp::register_field<cfgr1_register, 16, 1>;

//
constexpr auto autoff_disabled = stmcpp::register_field<cfgr1_register, 15, 1>{0};

//
constexpr auto autoff_enabled = stmcpp::register_field<cfgr1_register, 15, 1>{1};

using autoff = stmcpp::register_field<cfgr1_register, 15, 1>;

//
constexpr auto wait_disabled = stmcpp::register_field<cfgr1_register, 14, 1>{0};

//
constexpr auto wait_enabled = stmcpp::register_field<cfgr1_register, 14, 1>{1};

using wait = stmcpp::register_field<cfgr1_register, 14, 1>;

//
constexpr auto cont_single = stmcpp::register_field<cfgr1_register, 13, 1>{0};

//
constexpr auto cont_continuous = stmcpp::register_field<cfgr1_register, 13, 1>{1};

using cont = stmcpp::register_field<cfgr1_register, 13, 1>;

//
constexpr auto ovrmod_preserved = stmcpp::register_field<cfgr1_register, 12, 1>{0};

//
constexpr auto ovrmod_overwritten = stmcpp::register_field<cfgr1_register, 12, 1>{1};

using ovrmod = stmcpp::register_field<cfgr1_register, 12, 1>;

//
constexpr auto exten_disabled = stmcpp::register_field<cfgr1_register, 10, 2>{0};

//
constexpr auto exten_risingedge = stmcpp::register_field<cfgr1_register, 10, 2>{1};

//
constexpr auto exten_fallingedge = stmcpp::register_field<cfgr1_register, 10, 2>{2};

//
constexpr auto exten_bothedges = stmcpp::register_field<cfgr1_register, 10, 2>{3};

using exten = stmcpp::register_field<cfgr1_register, 10, 2>;

//
constexpr auto extsel_tim2_trgo = stmcpp::register_field<cfgr1_register, 6, 3>{2};

//
constexpr auto extsel_tim1_trgo = stmcpp::register_field<cfgr1_register, 6, 3>{0};

//
constexpr auto extsel_tim1_cc4 = stmcpp::register_field<cfgr1_register, 6, 3>{1};

//
constexpr auto extsel_tim3_trgo = stmcpp::register_field<cfgr1_register, 6, 3>{3};

//
constexpr auto extsel_tim15_trgo = stmcpp::register_field<cfgr1_register, 6, 3>{4};

using extsel = stmcpp::register_field<cfgr1_register, 6, 3>;

//
constexpr auto align_right = stmcpp::register_field<cfgr1_register, 5, 1>{0};

//
constexpr auto align_left = stmcpp::register_field<cfgr1_register, 5, 1>{1};

using align = stmcpp::register_field<cfgr1_register, 5, 1>;

//
constexpr auto res_twelvebit = stmcpp::register_field<cfgr1_register, 3, 2>{0};

//
constexpr auto res_tenbit = stmcpp::register_field<cfgr1_register, 3, 2>{1};

//
constexpr auto res_eightbit = stmcpp::register_field<cfgr1_register, 3, 2>{2};

//
constexpr auto res_sixbit = stmcpp::register_field<cfgr1_register, 3, 2>{3};

using res = stmcpp::register_field<cfgr1_register, 3, 2>;

//
constexpr auto scandir_upward = stmcpp::register_field<cfgr1_register, 2, 1>{0};

//
constexpr auto scandir_backward = stmcpp::register_field<cfgr1_register, 2, 1>{1};

using scandir = stmcpp::register_field<cfgr1_register, 2, 1>;

//
constexpr auto dmacfg_oneshot = stmcpp::register_field<cfgr1_register, 1, 1>{0};

//
constexpr auto dmacfg_circular = stmcpp::register_field<cfgr1_register, 1, 1>{1};

using dmacfg = stmcpp::register_field<cfgr1_register, 1, 1>;

//
constexpr auto dmaen_disabled = stmcpp::register_field<cfgr1_register, 0, 1>{0};

//
constexpr auto dmaen_enabled = stmcpp::register_field<cfgr1_register, 0, 1>{1};

using dmaen = stmcpp::register_field<cfgr1_register, 0, 1>;

} // namespace cfgr1_fields

constexpr auto cfgr1 = cfgr1_register{};

//
using cfgr2_register = stmcpp::register_wrapper<0x40012410, 4, stmcpp::read_write_flag>;

namespace cfgr2_fields {

//
constexpr auto ckmode_adcclk = stmcpp::register_field<cfgr2_register, 30, 2>{0};

//
constexpr auto ckmode_pclk_div2 = stmcpp::register_field<cfgr2_register, 30, 2>{1};

//
constexpr auto ckmode_pclk_div4 = stmcpp::register_field<cfgr2_register, 30, 2>{2};

using ckmode = stmcpp::register_field<cfgr2_register, 30, 2>;

} // namespace cfgr2_fields

constexpr auto cfgr2 = cfgr2_register{};

//
using smpr_register = stmcpp::register_wrapper<0x40012414, 4, stmcpp::read_write_flag>;

namespace smpr_fields {

//
constexpr auto smp_cycles1_5 = stmcpp::register_field<smpr_register, 0, 3>{0};

//
constexpr auto smp_cycles7_5 = stmcpp::register_field<smpr_register, 0, 3>{1};

//
constexpr auto smp_cycles13_5 = stmcpp::register_field<smpr_register, 0, 3>{2};

//
constexpr auto smp_cycles28_5 = stmcpp::register_field<smpr_register, 0, 3>{3};

//
constexpr auto smp_cycles41_5 = stmcpp::register_field<smpr_register, 0, 3>{4};

//
constexpr auto smp_cycles55_5 = stmcpp::register_field<smpr_register, 0, 3>{5};

//
constexpr auto smp_cycles71_5 = stmcpp::register_field<smpr_register, 0, 3>{6};

//
constexpr auto smp_cycles239_5 = stmcpp::register_field<smpr_register, 0, 3>{7};

using smp = stmcpp::register_field<smpr_register, 0, 3>;

} // namespace smpr_fields

constexpr auto smpr = smpr_register{};

//
using tr_register = stmcpp::register_wrapper<0x40012420, 4, stmcpp::read_write_flag>;

namespace tr_fields {} // namespace tr_fields

constexpr auto tr = tr_register{};

//
using chselr_register = stmcpp::register_wrapper<0x40012428, 4, stmcpp::read_write_flag>;

namespace chselr_fields {

//
constexpr auto chsel18 = stmcpp::register_field<chselr_register, 18, 1>{1};

//
constexpr auto chsel17 = stmcpp::register_field<chselr_register, 17, 1>{1};

//
constexpr auto chsel16 = stmcpp::register_field<chselr_register, 16, 1>{1};

//
constexpr auto chsel15 = stmcpp::register_field<chselr_register, 15, 1>{1};

//
constexpr auto chsel14 = stmcpp::register_field<chselr_register, 14, 1>{1};

//
constexpr auto chsel13 = stmcpp::register_field<chselr_register, 13, 1>{1};

//
constexpr auto chsel12 = stmcpp::register_field<chselr_register, 12, 1>{1};

//
constexpr auto chsel11 = stmcpp::register_field<chselr_register, 11, 1>{1};

//
constexpr auto chsel10 = stmcpp::register_field<chselr_register, 10, 1>{1};

//
constexpr auto chsel9 = stmcpp::register_field<chselr_register, 9, 1>{1};

//
constexpr auto chsel8 = stmcpp::register_field<chselr_register, 8, 1>{1};

//
constexpr auto chsel7 = stmcpp::register_field<chselr_register, 7, 1>{1};

//
constexpr auto chsel6 = stmcpp::register_field<chselr_register, 6, 1>{1};

//
constexpr auto chsel5 = stmcpp::register_field<chselr_register, 5, 1>{1};

//
constexpr auto chsel4 = stmcpp::register_field<chselr_register, 4, 1>{1};

//
constexpr auto chsel3 = stmcpp::register_field<chselr_register, 3, 1>{1};

//
constexpr auto chsel2 = stmcpp::register_field<chselr_register, 2, 1>{1};

//
constexpr auto chsel1 = stmcpp::register_field<chselr_register, 1, 1>{1};

//
constexpr auto chsel0_notselected = stmcpp::register_field<chselr_register, 0, 1>{0};

//
constexpr auto chsel0_selected = stmcpp::register_field<chselr_register, 0, 1>{1};

using chsel0 = stmcpp::register_field<chselr_register, 0, 1>;

} // namespace chselr_fields

constexpr auto chselr = chselr_register{};

//
using dr_register = stmcpp::register_wrapper<0x40012440, 4, stmcpp::read_only_flag>;

namespace dr_fields {} // namespace dr_fields

constexpr auto dr = dr_register{};

//
using ccr_register = stmcpp::register_wrapper<0x40012708, 4, stmcpp::read_write_flag>;

namespace ccr_fields {

//
constexpr auto vbaten_disabled = stmcpp::register_field<ccr_register, 24, 1>{0};

//
constexpr auto vbaten_enabled = stmcpp::register_field<ccr_register, 24, 1>{1};

using vbaten = stmcpp::register_field<ccr_register, 24, 1>;

//
constexpr auto tsen_disabled = stmcpp::register_field<ccr_register, 23, 1>{0};

//
constexpr auto tsen_enabled = stmcpp::register_field<ccr_register, 23, 1>{1};

using tsen = stmcpp::register_field<ccr_register, 23, 1>;

//
constexpr auto vrefen_disabled = stmcpp::register_field<ccr_register, 22, 1>{0};

//
constexpr auto vrefen_enabled = stmcpp::register_field<ccr_register, 22, 1>{1};

using vrefen = stmcpp::register_field<ccr_register, 22, 1>;

} // namespace ccr_fields

constexpr auto ccr = ccr_register{};

} // namespace stmcpp::stm32f051::madc