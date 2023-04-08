
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

namespace stmcpp::stm32f051::mtim3
{

// 
using cr1_register = stmcpp::register_wrapper<0x40000400, 4, stmcpp::read_write_flag>;

namespace cr1_fields
{

// 
constexpr auto ckd_div1 = stmcpp::register_field<cr1_register, 8, 2>{0};

// 
constexpr auto ckd_div2 = stmcpp::register_field<cr1_register, 8, 2>{1};

// 
constexpr auto ckd_div4 = stmcpp::register_field<cr1_register, 8, 2>{2};

using ckd = stmcpp::register_field<cr1_register, 8, 2>;


// 
constexpr auto arpe_disabled = stmcpp::register_field<cr1_register, 7, 1>{0};

// 
constexpr auto arpe_enabled = stmcpp::register_field<cr1_register, 7, 1>{1};

using arpe = stmcpp::register_field<cr1_register, 7, 1>;


// 
constexpr auto cms_edgealigned = stmcpp::register_field<cr1_register, 5, 2>{0};

// 
constexpr auto cms_centeraligned1 = stmcpp::register_field<cr1_register, 5, 2>{1};

// 
constexpr auto cms_centeraligned2 = stmcpp::register_field<cr1_register, 5, 2>{2};

// 
constexpr auto cms_centeraligned3 = stmcpp::register_field<cr1_register, 5, 2>{3};

using cms = stmcpp::register_field<cr1_register, 5, 2>;


// 
constexpr auto dir_up = stmcpp::register_field<cr1_register, 4, 1>{0};

// 
constexpr auto dir_down = stmcpp::register_field<cr1_register, 4, 1>{1};

using dir = stmcpp::register_field<cr1_register, 4, 1>;


// 
constexpr auto opm_disabled = stmcpp::register_field<cr1_register, 3, 1>{0};

// 
constexpr auto opm_enabled = stmcpp::register_field<cr1_register, 3, 1>{1};

using opm = stmcpp::register_field<cr1_register, 3, 1>;


// 
constexpr auto urs_anyevent = stmcpp::register_field<cr1_register, 2, 1>{0};

// 
constexpr auto urs_counteronly = stmcpp::register_field<cr1_register, 2, 1>{1};

using urs = stmcpp::register_field<cr1_register, 2, 1>;


// 
constexpr auto udis_enabled = stmcpp::register_field<cr1_register, 1, 1>{0};

// 
constexpr auto udis_disabled = stmcpp::register_field<cr1_register, 1, 1>{1};

using udis = stmcpp::register_field<cr1_register, 1, 1>;


// 
constexpr auto cen_disabled = stmcpp::register_field<cr1_register, 0, 1>{0};

// 
constexpr auto cen_enabled = stmcpp::register_field<cr1_register, 0, 1>{1};

using cen = stmcpp::register_field<cr1_register, 0, 1>;




} // namespace cr1_fields

constexpr auto cr1 = cr1_register{};


// 
using cr2_register = stmcpp::register_wrapper<0x40000404, 4, stmcpp::read_write_flag>;

namespace cr2_fields
{

// 
constexpr auto ti1s_normal = stmcpp::register_field<cr2_register, 7, 1>{0};

// 
constexpr auto ti1s_xor = stmcpp::register_field<cr2_register, 7, 1>{1};

using ti1s = stmcpp::register_field<cr2_register, 7, 1>;


// 
constexpr auto mms_reset = stmcpp::register_field<cr2_register, 4, 3>{0};

// 
constexpr auto mms_enable = stmcpp::register_field<cr2_register, 4, 3>{1};

// 
constexpr auto mms_update = stmcpp::register_field<cr2_register, 4, 3>{2};

// 
constexpr auto mms_comparepulse = stmcpp::register_field<cr2_register, 4, 3>{3};

// 
constexpr auto mms_compareoc1 = stmcpp::register_field<cr2_register, 4, 3>{4};

// 
constexpr auto mms_compareoc2 = stmcpp::register_field<cr2_register, 4, 3>{5};

// 
constexpr auto mms_compareoc3 = stmcpp::register_field<cr2_register, 4, 3>{6};

// 
constexpr auto mms_compareoc4 = stmcpp::register_field<cr2_register, 4, 3>{7};

using mms = stmcpp::register_field<cr2_register, 4, 3>;


// 
constexpr auto ccds_oncompare = stmcpp::register_field<cr2_register, 3, 1>{0};

// 
constexpr auto ccds_onupdate = stmcpp::register_field<cr2_register, 3, 1>{1};

using ccds = stmcpp::register_field<cr2_register, 3, 1>;




} // namespace cr2_fields

constexpr auto cr2 = cr2_register{};


// 
using smcr_register = stmcpp::register_wrapper<0x40000408, 4, stmcpp::read_write_flag>;

namespace smcr_fields
{

// 
constexpr auto etp_notinverted = stmcpp::register_field<smcr_register, 15, 1>{0};

// 
constexpr auto etp_inverted = stmcpp::register_field<smcr_register, 15, 1>{1};

using etp = stmcpp::register_field<smcr_register, 15, 1>;


// 
constexpr auto ece_disabled = stmcpp::register_field<smcr_register, 14, 1>{0};

// 
constexpr auto ece_enabled = stmcpp::register_field<smcr_register, 14, 1>{1};

using ece = stmcpp::register_field<smcr_register, 14, 1>;


// 
constexpr auto etps_div1 = stmcpp::register_field<smcr_register, 12, 2>{0};

// 
constexpr auto etps_div2 = stmcpp::register_field<smcr_register, 12, 2>{1};

// 
constexpr auto etps_div4 = stmcpp::register_field<smcr_register, 12, 2>{2};

// 
constexpr auto etps_div8 = stmcpp::register_field<smcr_register, 12, 2>{3};

using etps = stmcpp::register_field<smcr_register, 12, 2>;


// 
constexpr auto etf_nofilter = stmcpp::register_field<smcr_register, 8, 4>{0};

// 
constexpr auto etf_fck_int_n2 = stmcpp::register_field<smcr_register, 8, 4>{1};

// 
constexpr auto etf_fck_int_n4 = stmcpp::register_field<smcr_register, 8, 4>{2};

// 
constexpr auto etf_fck_int_n8 = stmcpp::register_field<smcr_register, 8, 4>{3};

// 
constexpr auto etf_fdts_div2_n6 = stmcpp::register_field<smcr_register, 8, 4>{4};

// 
constexpr auto etf_fdts_div2_n8 = stmcpp::register_field<smcr_register, 8, 4>{5};

// 
constexpr auto etf_fdts_div4_n6 = stmcpp::register_field<smcr_register, 8, 4>{6};

// 
constexpr auto etf_fdts_div4_n8 = stmcpp::register_field<smcr_register, 8, 4>{7};

// 
constexpr auto etf_fdts_div8_n6 = stmcpp::register_field<smcr_register, 8, 4>{8};

// 
constexpr auto etf_fdts_div8_n8 = stmcpp::register_field<smcr_register, 8, 4>{9};

// 
constexpr auto etf_fdts_div16_n5 = stmcpp::register_field<smcr_register, 8, 4>{10};

// 
constexpr auto etf_fdts_div16_n6 = stmcpp::register_field<smcr_register, 8, 4>{11};

// 
constexpr auto etf_fdts_div16_n8 = stmcpp::register_field<smcr_register, 8, 4>{12};

// 
constexpr auto etf_fdts_div32_n5 = stmcpp::register_field<smcr_register, 8, 4>{13};

// 
constexpr auto etf_fdts_div32_n6 = stmcpp::register_field<smcr_register, 8, 4>{14};

// 
constexpr auto etf_fdts_div32_n8 = stmcpp::register_field<smcr_register, 8, 4>{15};

using etf = stmcpp::register_field<smcr_register, 8, 4>;


// 
constexpr auto msm_nosync = stmcpp::register_field<smcr_register, 7, 1>{0};

// 
constexpr auto msm_sync = stmcpp::register_field<smcr_register, 7, 1>{1};

using msm = stmcpp::register_field<smcr_register, 7, 1>;


// 
constexpr auto ts_itr0 = stmcpp::register_field<smcr_register, 4, 3>{0};

// 
constexpr auto ts_itr1 = stmcpp::register_field<smcr_register, 4, 3>{1};

// 
constexpr auto ts_itr2 = stmcpp::register_field<smcr_register, 4, 3>{2};

// 
constexpr auto ts_ti1f_ed = stmcpp::register_field<smcr_register, 4, 3>{4};

// 
constexpr auto ts_ti1fp1 = stmcpp::register_field<smcr_register, 4, 3>{5};

// 
constexpr auto ts_ti2fp2 = stmcpp::register_field<smcr_register, 4, 3>{6};

// 
constexpr auto ts_etrf = stmcpp::register_field<smcr_register, 4, 3>{7};

using ts = stmcpp::register_field<smcr_register, 4, 3>;


// 
constexpr auto sms_disabled = stmcpp::register_field<smcr_register, 0, 3>{0};

// 
constexpr auto sms_encoder_mode_1 = stmcpp::register_field<smcr_register, 0, 3>{1};

// 
constexpr auto sms_encoder_mode_2 = stmcpp::register_field<smcr_register, 0, 3>{2};

// 
constexpr auto sms_encoder_mode_3 = stmcpp::register_field<smcr_register, 0, 3>{3};

// 
constexpr auto sms_reset_mode = stmcpp::register_field<smcr_register, 0, 3>{4};

// 
constexpr auto sms_gated_mode = stmcpp::register_field<smcr_register, 0, 3>{5};

// 
constexpr auto sms_trigger_mode = stmcpp::register_field<smcr_register, 0, 3>{6};

// 
constexpr auto sms_ext_clock_mode = stmcpp::register_field<smcr_register, 0, 3>{7};

using sms = stmcpp::register_field<smcr_register, 0, 3>;




} // namespace smcr_fields

constexpr auto smcr = smcr_register{};


// 
using dier_register = stmcpp::register_wrapper<0x4000040c, 4, stmcpp::read_write_flag>;

namespace dier_fields
{

// 
constexpr auto tde_disabled = stmcpp::register_field<dier_register, 14, 1>{0};

// 
constexpr auto tde_enabled = stmcpp::register_field<dier_register, 14, 1>{1};

using tde = stmcpp::register_field<dier_register, 14, 1>;


// 
constexpr auto comde = stmcpp::register_field<dier_register, 13, 1>{1};

// 
constexpr auto cc4de = stmcpp::register_field<dier_register, 12, 1>{1};

// 
constexpr auto cc3de = stmcpp::register_field<dier_register, 11, 1>{1};

// 
constexpr auto cc2de = stmcpp::register_field<dier_register, 10, 1>{1};

// 
constexpr auto cc1de_disabled = stmcpp::register_field<dier_register, 9, 1>{0};

// 
constexpr auto cc1de_enabled = stmcpp::register_field<dier_register, 9, 1>{1};

using cc1de = stmcpp::register_field<dier_register, 9, 1>;


// 
constexpr auto ude_disabled = stmcpp::register_field<dier_register, 8, 1>{0};

// 
constexpr auto ude_enabled = stmcpp::register_field<dier_register, 8, 1>{1};

using ude = stmcpp::register_field<dier_register, 8, 1>;


// 
constexpr auto tie_disabled = stmcpp::register_field<dier_register, 6, 1>{0};

// 
constexpr auto tie_enabled = stmcpp::register_field<dier_register, 6, 1>{1};

using tie = stmcpp::register_field<dier_register, 6, 1>;


// 
constexpr auto cc4ie = stmcpp::register_field<dier_register, 4, 1>{1};

// 
constexpr auto cc3ie = stmcpp::register_field<dier_register, 3, 1>{1};

// 
constexpr auto cc2ie = stmcpp::register_field<dier_register, 2, 1>{1};

// 
constexpr auto cc1ie_disabled = stmcpp::register_field<dier_register, 1, 1>{0};

// 
constexpr auto cc1ie_enabled = stmcpp::register_field<dier_register, 1, 1>{1};

using cc1ie = stmcpp::register_field<dier_register, 1, 1>;


// 
constexpr auto uie_disabled = stmcpp::register_field<dier_register, 0, 1>{0};

// 
constexpr auto uie_enabled = stmcpp::register_field<dier_register, 0, 1>{1};

using uie = stmcpp::register_field<dier_register, 0, 1>;




} // namespace dier_fields

constexpr auto dier = dier_register{};


// 
using sr_register = stmcpp::register_wrapper<0x40000410, 4, stmcpp::read_write_flag>;

namespace sr_fields
{

// 
constexpr auto cc4of = stmcpp::register_field<sr_register, 12, 1>{1};

// 
constexpr auto cc3of = stmcpp::register_field<sr_register, 11, 1>{1};

// 
constexpr auto cc2of = stmcpp::register_field<sr_register, 10, 1>{1};

// 
constexpr auto cc1of_overcapture = stmcpp::register_field<sr_register, 9, 1>{1};

// 
constexpr auto cc1of_clear = stmcpp::register_field<sr_register, 9, 1>{0};

using cc1of = stmcpp::register_field<sr_register, 9, 1>;


// 
constexpr auto tif_notrigger = stmcpp::register_field<sr_register, 6, 1>{0};

// 
constexpr auto tif_trigger = stmcpp::register_field<sr_register, 6, 1>{1};

// 
constexpr auto tif_clear = stmcpp::register_field<sr_register, 6, 1>{0};

using tif = stmcpp::register_field<sr_register, 6, 1>;


// 
constexpr auto cc4if = stmcpp::register_field<sr_register, 4, 1>{1};

// 
constexpr auto cc3if = stmcpp::register_field<sr_register, 3, 1>{1};

// 
constexpr auto cc2if = stmcpp::register_field<sr_register, 2, 1>{1};

// 
constexpr auto cc1if_match = stmcpp::register_field<sr_register, 1, 1>{1};

// 
constexpr auto cc1if_clear = stmcpp::register_field<sr_register, 1, 1>{0};

using cc1if = stmcpp::register_field<sr_register, 1, 1>;


// 
constexpr auto uif_clear = stmcpp::register_field<sr_register, 0, 1>{0};

// 
constexpr auto uif_updatepending = stmcpp::register_field<sr_register, 0, 1>{1};

using uif = stmcpp::register_field<sr_register, 0, 1>;




} // namespace sr_fields

constexpr auto sr = sr_register{};


// 
using egr_register = stmcpp::register_wrapper<0x40000414, 4, stmcpp::write_only_flag>;

namespace egr_fields
{

// 
constexpr auto tg_trigger = stmcpp::register_field<egr_register, 6, 1>{1};

using tg = stmcpp::register_field<egr_register, 6, 1>;


// 
constexpr auto cc4g = stmcpp::register_field<egr_register, 4, 1>{1};

// 
constexpr auto cc3g = stmcpp::register_field<egr_register, 3, 1>{1};

// 
constexpr auto cc2g = stmcpp::register_field<egr_register, 2, 1>{1};

// 
constexpr auto cc1g_trigger = stmcpp::register_field<egr_register, 1, 1>{1};

using cc1g = stmcpp::register_field<egr_register, 1, 1>;


// 
constexpr auto ug_update = stmcpp::register_field<egr_register, 0, 1>{1};

using ug = stmcpp::register_field<egr_register, 0, 1>;




} // namespace egr_fields

constexpr auto egr = egr_register{};


// 
using ccmr1_output_register = stmcpp::register_wrapper<0x40000418, 4, stmcpp::read_write_flag>;

namespace ccmr1_output_fields
{

// 
constexpr auto oc2ce = stmcpp::register_field<ccmr1_output_register, 15, 1>{1};


// 
constexpr auto oc2pe_disabled = stmcpp::register_field<ccmr1_output_register, 11, 1>{0};

// 
constexpr auto oc2pe_enabled = stmcpp::register_field<ccmr1_output_register, 11, 1>{1};

using oc2pe = stmcpp::register_field<ccmr1_output_register, 11, 1>;


// 
constexpr auto oc2fe = stmcpp::register_field<ccmr1_output_register, 10, 1>{1};

// 
constexpr auto cc2s_output = stmcpp::register_field<ccmr1_output_register, 8, 2>{0};

using cc2s = stmcpp::register_field<ccmr1_output_register, 8, 2>;


// 
constexpr auto oc1ce = stmcpp::register_field<ccmr1_output_register, 7, 1>{1};

// 
constexpr auto oc1m_frozen = stmcpp::register_field<ccmr1_output_register, 4, 3>{0};

// 
constexpr auto oc1m_activeonmatch = stmcpp::register_field<ccmr1_output_register, 4, 3>{1};

// 
constexpr auto oc1m_inactiveonmatch = stmcpp::register_field<ccmr1_output_register, 4, 3>{2};

// 
constexpr auto oc1m_toggle = stmcpp::register_field<ccmr1_output_register, 4, 3>{3};

// 
constexpr auto oc1m_forceinactive = stmcpp::register_field<ccmr1_output_register, 4, 3>{4};

// 
constexpr auto oc1m_forceactive = stmcpp::register_field<ccmr1_output_register, 4, 3>{5};

// 
constexpr auto oc1m_pwmmode1 = stmcpp::register_field<ccmr1_output_register, 4, 3>{6};

// 
constexpr auto oc1m_pwmmode2 = stmcpp::register_field<ccmr1_output_register, 4, 3>{7};

using oc1m = stmcpp::register_field<ccmr1_output_register, 4, 3>;


// 
constexpr auto oc1pe_disabled = stmcpp::register_field<ccmr1_output_register, 3, 1>{0};

// 
constexpr auto oc1pe_enabled = stmcpp::register_field<ccmr1_output_register, 3, 1>{1};

using oc1pe = stmcpp::register_field<ccmr1_output_register, 3, 1>;


// 
constexpr auto oc1fe = stmcpp::register_field<ccmr1_output_register, 2, 1>{1};

// 
constexpr auto cc1s_output = stmcpp::register_field<ccmr1_output_register, 0, 2>{0};

using cc1s = stmcpp::register_field<ccmr1_output_register, 0, 2>;




} // namespace ccmr1_output_fields

constexpr auto ccmr1_output = ccmr1_output_register{};


// 
using ccmr1_input_register = stmcpp::register_wrapper<0x40000418, 4, stmcpp::read_write_flag>;

namespace ccmr1_input_fields
{



// 
constexpr auto cc2s_ti2 = stmcpp::register_field<ccmr1_input_register, 8, 2>{1};

// 
constexpr auto cc2s_ti1 = stmcpp::register_field<ccmr1_input_register, 8, 2>{2};

// 
constexpr auto cc2s_trc = stmcpp::register_field<ccmr1_input_register, 8, 2>{3};

using cc2s = stmcpp::register_field<ccmr1_input_register, 8, 2>;


// 
constexpr auto ic1f_nofilter = stmcpp::register_field<ccmr1_input_register, 4, 4>{0};

// 
constexpr auto ic1f_fck_int_n2 = stmcpp::register_field<ccmr1_input_register, 4, 4>{1};

// 
constexpr auto ic1f_fck_int_n4 = stmcpp::register_field<ccmr1_input_register, 4, 4>{2};

// 
constexpr auto ic1f_fck_int_n8 = stmcpp::register_field<ccmr1_input_register, 4, 4>{3};

// 
constexpr auto ic1f_fdts_div2_n6 = stmcpp::register_field<ccmr1_input_register, 4, 4>{4};

// 
constexpr auto ic1f_fdts_div2_n8 = stmcpp::register_field<ccmr1_input_register, 4, 4>{5};

// 
constexpr auto ic1f_fdts_div4_n6 = stmcpp::register_field<ccmr1_input_register, 4, 4>{6};

// 
constexpr auto ic1f_fdts_div4_n8 = stmcpp::register_field<ccmr1_input_register, 4, 4>{7};

// 
constexpr auto ic1f_fdts_div8_n6 = stmcpp::register_field<ccmr1_input_register, 4, 4>{8};

// 
constexpr auto ic1f_fdts_div8_n8 = stmcpp::register_field<ccmr1_input_register, 4, 4>{9};

// 
constexpr auto ic1f_fdts_div16_n5 = stmcpp::register_field<ccmr1_input_register, 4, 4>{10};

// 
constexpr auto ic1f_fdts_div16_n6 = stmcpp::register_field<ccmr1_input_register, 4, 4>{11};

// 
constexpr auto ic1f_fdts_div16_n8 = stmcpp::register_field<ccmr1_input_register, 4, 4>{12};

// 
constexpr auto ic1f_fdts_div32_n5 = stmcpp::register_field<ccmr1_input_register, 4, 4>{13};

// 
constexpr auto ic1f_fdts_div32_n6 = stmcpp::register_field<ccmr1_input_register, 4, 4>{14};

// 
constexpr auto ic1f_fdts_div32_n8 = stmcpp::register_field<ccmr1_input_register, 4, 4>{15};

using ic1f = stmcpp::register_field<ccmr1_input_register, 4, 4>;



// 
constexpr auto cc1s_ti1 = stmcpp::register_field<ccmr1_input_register, 0, 2>{1};

// 
constexpr auto cc1s_ti2 = stmcpp::register_field<ccmr1_input_register, 0, 2>{2};

// 
constexpr auto cc1s_trc = stmcpp::register_field<ccmr1_input_register, 0, 2>{3};

using cc1s = stmcpp::register_field<ccmr1_input_register, 0, 2>;




} // namespace ccmr1_input_fields

constexpr auto ccmr1_input = ccmr1_input_register{};


// 
using ccmr2_output_register = stmcpp::register_wrapper<0x4000041c, 4, stmcpp::read_write_flag>;

namespace ccmr2_output_fields
{

// 
constexpr auto oc4ce = stmcpp::register_field<ccmr2_output_register, 15, 1>{1};


// 
constexpr auto oc4pe_disabled = stmcpp::register_field<ccmr2_output_register, 11, 1>{0};

// 
constexpr auto oc4pe_enabled = stmcpp::register_field<ccmr2_output_register, 11, 1>{1};

using oc4pe = stmcpp::register_field<ccmr2_output_register, 11, 1>;


// 
constexpr auto oc4fe = stmcpp::register_field<ccmr2_output_register, 10, 1>{1};

// 
constexpr auto cc4s_output = stmcpp::register_field<ccmr2_output_register, 8, 2>{0};

using cc4s = stmcpp::register_field<ccmr2_output_register, 8, 2>;


// 
constexpr auto oc3ce = stmcpp::register_field<ccmr2_output_register, 7, 1>{1};

// 
constexpr auto oc3m_frozen = stmcpp::register_field<ccmr2_output_register, 4, 3>{0};

// 
constexpr auto oc3m_activeonmatch = stmcpp::register_field<ccmr2_output_register, 4, 3>{1};

// 
constexpr auto oc3m_inactiveonmatch = stmcpp::register_field<ccmr2_output_register, 4, 3>{2};

// 
constexpr auto oc3m_toggle = stmcpp::register_field<ccmr2_output_register, 4, 3>{3};

// 
constexpr auto oc3m_forceinactive = stmcpp::register_field<ccmr2_output_register, 4, 3>{4};

// 
constexpr auto oc3m_forceactive = stmcpp::register_field<ccmr2_output_register, 4, 3>{5};

// 
constexpr auto oc3m_pwmmode1 = stmcpp::register_field<ccmr2_output_register, 4, 3>{6};

// 
constexpr auto oc3m_pwmmode2 = stmcpp::register_field<ccmr2_output_register, 4, 3>{7};

using oc3m = stmcpp::register_field<ccmr2_output_register, 4, 3>;


// 
constexpr auto oc3pe_disabled = stmcpp::register_field<ccmr2_output_register, 3, 1>{0};

// 
constexpr auto oc3pe_enabled = stmcpp::register_field<ccmr2_output_register, 3, 1>{1};

using oc3pe = stmcpp::register_field<ccmr2_output_register, 3, 1>;


// 
constexpr auto oc3fe = stmcpp::register_field<ccmr2_output_register, 2, 1>{1};

// 
constexpr auto cc3s_output = stmcpp::register_field<ccmr2_output_register, 0, 2>{0};

using cc3s = stmcpp::register_field<ccmr2_output_register, 0, 2>;




} // namespace ccmr2_output_fields

constexpr auto ccmr2_output = ccmr2_output_register{};


// 
using ccmr2_input_register = stmcpp::register_wrapper<0x4000041c, 4, stmcpp::read_write_flag>;

namespace ccmr2_input_fields
{



// 
constexpr auto cc4s_ti4 = stmcpp::register_field<ccmr2_input_register, 8, 2>{1};

// 
constexpr auto cc4s_ti3 = stmcpp::register_field<ccmr2_input_register, 8, 2>{2};

// 
constexpr auto cc4s_trc = stmcpp::register_field<ccmr2_input_register, 8, 2>{3};

using cc4s = stmcpp::register_field<ccmr2_input_register, 8, 2>;




// 
constexpr auto cc3s_ti3 = stmcpp::register_field<ccmr2_input_register, 0, 2>{1};

// 
constexpr auto cc3s_ti4 = stmcpp::register_field<ccmr2_input_register, 0, 2>{2};

// 
constexpr auto cc3s_trc = stmcpp::register_field<ccmr2_input_register, 0, 2>{3};

using cc3s = stmcpp::register_field<ccmr2_input_register, 0, 2>;




} // namespace ccmr2_input_fields

constexpr auto ccmr2_input = ccmr2_input_register{};


// 
using ccer_register = stmcpp::register_wrapper<0x40000420, 4, stmcpp::read_write_flag>;

namespace ccer_fields
{

// 
constexpr auto cc4np = stmcpp::register_field<ccer_register, 15, 1>{1};

// 
constexpr auto cc4p = stmcpp::register_field<ccer_register, 13, 1>{1};

// 
constexpr auto cc4e = stmcpp::register_field<ccer_register, 12, 1>{1};

// 
constexpr auto cc3np = stmcpp::register_field<ccer_register, 11, 1>{1};

// 
constexpr auto cc3p = stmcpp::register_field<ccer_register, 9, 1>{1};

// 
constexpr auto cc3e = stmcpp::register_field<ccer_register, 8, 1>{1};

// 
constexpr auto cc2np = stmcpp::register_field<ccer_register, 7, 1>{1};

// 
constexpr auto cc2p = stmcpp::register_field<ccer_register, 5, 1>{1};

// 
constexpr auto cc2e = stmcpp::register_field<ccer_register, 4, 1>{1};

// 
constexpr auto cc1np = stmcpp::register_field<ccer_register, 3, 1>{1};

// 
constexpr auto cc1p = stmcpp::register_field<ccer_register, 1, 1>{1};

// 
constexpr auto cc1e = stmcpp::register_field<ccer_register, 0, 1>{1};



} // namespace ccer_fields

constexpr auto ccer = ccer_register{};


// 
using cnt_register = stmcpp::register_wrapper<0x40000424, 4, stmcpp::read_write_flag>;

namespace cnt_fields
{





} // namespace cnt_fields

constexpr auto cnt = cnt_register{};


// 
using psc_register = stmcpp::register_wrapper<0x40000428, 4, stmcpp::read_write_flag>;

namespace psc_fields
{




} // namespace psc_fields

constexpr auto psc = psc_register{};


// 
using arr_register = stmcpp::register_wrapper<0x4000042c, 4, stmcpp::read_write_flag>;

namespace arr_fields
{





} // namespace arr_fields

constexpr auto arr = arr_register{};


// 
using dcr_register = stmcpp::register_wrapper<0x40000448, 4, stmcpp::read_write_flag>;

namespace dcr_fields
{





} // namespace dcr_fields

constexpr auto dcr = dcr_register{};


// 
using dmar_register = stmcpp::register_wrapper<0x4000044c, 4, stmcpp::read_write_flag>;

namespace dmar_fields
{




} // namespace dmar_fields

constexpr auto dmar = dmar_register{};


// 
using ccr1_register = stmcpp::register_wrapper<0x40000434, 4, stmcpp::read_write_flag>;

namespace ccr1_fields
{





} // namespace ccr1_fields

constexpr auto ccr1 = ccr1_register{};


// 
using ccr2_register = stmcpp::register_wrapper<0x40000438, 4, stmcpp::read_write_flag>;

namespace ccr2_fields
{





} // namespace ccr2_fields

constexpr auto ccr2 = ccr2_register{};


// 
using ccr3_register = stmcpp::register_wrapper<0x4000043c, 4, stmcpp::read_write_flag>;

namespace ccr3_fields
{





} // namespace ccr3_fields

constexpr auto ccr3 = ccr3_register{};


// 
using ccr4_register = stmcpp::register_wrapper<0x40000440, 4, stmcpp::read_write_flag>;

namespace ccr4_fields
{





} // namespace ccr4_fields

constexpr auto ccr4 = ccr4_register{};




} // namespace stmcpp::stm32f051::mtim3