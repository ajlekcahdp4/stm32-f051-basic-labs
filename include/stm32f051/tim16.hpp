
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

namespace stmcpp::stm32f051::mtim16
{

// 
using cr1_register = stmcpp::register_wrapper<0x40014400, 4, stmcpp::read_write_flag>;

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
constexpr auto opm_notstopped = stmcpp::register_field<cr1_register, 3, 1>{0};

// 
constexpr auto opm_stopped = stmcpp::register_field<cr1_register, 3, 1>{1};

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
using cr2_register = stmcpp::register_wrapper<0x40014404, 4, stmcpp::read_write_flag>;

namespace cr2_fields
{

// 
constexpr auto ois1n_low = stmcpp::register_field<cr2_register, 9, 1>{0};

// 
constexpr auto ois1n_high = stmcpp::register_field<cr2_register, 9, 1>{1};

using ois1n = stmcpp::register_field<cr2_register, 9, 1>;


// 
constexpr auto ois1_low = stmcpp::register_field<cr2_register, 8, 1>{0};

// 
constexpr auto ois1_high = stmcpp::register_field<cr2_register, 8, 1>{1};

using ois1 = stmcpp::register_field<cr2_register, 8, 1>;


// 
constexpr auto ccds_oncompare = stmcpp::register_field<cr2_register, 3, 1>{0};

// 
constexpr auto ccds_onupdate = stmcpp::register_field<cr2_register, 3, 1>{1};

using ccds = stmcpp::register_field<cr2_register, 3, 1>;


// 
constexpr auto ccus_default = stmcpp::register_field<cr2_register, 2, 1>{0};

// 
constexpr auto ccus_withrisingedge = stmcpp::register_field<cr2_register, 2, 1>{1};

using ccus = stmcpp::register_field<cr2_register, 2, 1>;


// 
constexpr auto ccpc_notpreloaded = stmcpp::register_field<cr2_register, 0, 1>{0};

// 
constexpr auto ccpc_preloaded = stmcpp::register_field<cr2_register, 0, 1>{1};

using ccpc = stmcpp::register_field<cr2_register, 0, 1>;




} // namespace cr2_fields

constexpr auto cr2 = cr2_register{};


// 
using dier_register = stmcpp::register_wrapper<0x4001440c, 4, stmcpp::read_write_flag>;

namespace dier_fields
{

// 
constexpr auto tde = stmcpp::register_field<dier_register, 14, 1>{1};

// 
constexpr auto cc1de_disabled = stmcpp::register_field<dier_register, 9, 1>{0};

// 
constexpr auto cc1de_enabled = stmcpp::register_field<dier_register, 9, 1>{1};

using cc1de = stmcpp::register_field<dier_register, 9, 1>;


// 
constexpr auto ude = stmcpp::register_field<dier_register, 8, 1>{1};

// 
constexpr auto bie_disabled = stmcpp::register_field<dier_register, 7, 1>{0};

// 
constexpr auto bie_enabled = stmcpp::register_field<dier_register, 7, 1>{1};

using bie = stmcpp::register_field<dier_register, 7, 1>;


// 
constexpr auto tie = stmcpp::register_field<dier_register, 6, 1>{1};

// 
constexpr auto comie_disabled = stmcpp::register_field<dier_register, 5, 1>{0};

// 
constexpr auto comie_enabled = stmcpp::register_field<dier_register, 5, 1>{1};

using comie = stmcpp::register_field<dier_register, 5, 1>;


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
using sr_register = stmcpp::register_wrapper<0x40014410, 4, stmcpp::read_write_flag>;

namespace sr_fields
{

// 
constexpr auto cc1of = stmcpp::register_field<sr_register, 9, 1>{1};

// 
constexpr auto bif = stmcpp::register_field<sr_register, 7, 1>{1};

// 
constexpr auto tif = stmcpp::register_field<sr_register, 6, 1>{1};

// 
constexpr auto comif = stmcpp::register_field<sr_register, 5, 1>{1};

// 
constexpr auto cc1if = stmcpp::register_field<sr_register, 1, 1>{1};

// 
constexpr auto uif_clear = stmcpp::register_field<sr_register, 0, 1>{0};

// 
constexpr auto uif_updatepending = stmcpp::register_field<sr_register, 0, 1>{1};

using uif = stmcpp::register_field<sr_register, 0, 1>;




} // namespace sr_fields

constexpr auto sr = sr_register{};


// 
using egr_register = stmcpp::register_wrapper<0x40014414, 4, stmcpp::write_only_flag>;

namespace egr_fields
{

// 
constexpr auto bg = stmcpp::register_field<egr_register, 7, 1>{1};

// 
constexpr auto tg = stmcpp::register_field<egr_register, 6, 1>{1};

// 
constexpr auto comg = stmcpp::register_field<egr_register, 5, 1>{1};

// 
constexpr auto cc1g = stmcpp::register_field<egr_register, 1, 1>{1};

// 
constexpr auto ug_update = stmcpp::register_field<egr_register, 0, 1>{1};

using ug = stmcpp::register_field<egr_register, 0, 1>;




} // namespace egr_fields

constexpr auto egr = egr_register{};


// 
using ccmr1_output_register = stmcpp::register_wrapper<0x40014418, 4, stmcpp::read_write_flag>;

namespace ccmr1_output_fields
{

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
constexpr auto oc1pe = stmcpp::register_field<ccmr1_output_register, 3, 1>{1};

// 
constexpr auto oc1fe = stmcpp::register_field<ccmr1_output_register, 2, 1>{1};




} // namespace ccmr1_output_fields

constexpr auto ccmr1_output = ccmr1_output_register{};


// 
using ccmr1_input_register = stmcpp::register_wrapper<0x40014418, 4, stmcpp::read_write_flag>;

namespace ccmr1_input_fields
{






} // namespace ccmr1_input_fields

constexpr auto ccmr1_input = ccmr1_input_register{};


// 
using ccer_register = stmcpp::register_wrapper<0x40014420, 4, stmcpp::read_write_flag>;

namespace ccer_fields
{

// 
constexpr auto cc1np = stmcpp::register_field<ccer_register, 3, 1>{1};

// 
constexpr auto cc1ne = stmcpp::register_field<ccer_register, 2, 1>{1};

// 
constexpr auto cc1p = stmcpp::register_field<ccer_register, 1, 1>{1};

// 
constexpr auto cc1e = stmcpp::register_field<ccer_register, 0, 1>{1};



} // namespace ccer_fields

constexpr auto ccer = ccer_register{};


// 
using cnt_register = stmcpp::register_wrapper<0x40014424, 4, stmcpp::read_write_flag>;

namespace cnt_fields
{




} // namespace cnt_fields

constexpr auto cnt = cnt_register{};


// 
using psc_register = stmcpp::register_wrapper<0x40014428, 4, stmcpp::read_write_flag>;

namespace psc_fields
{




} // namespace psc_fields

constexpr auto psc = psc_register{};


// 
using arr_register = stmcpp::register_wrapper<0x4001442c, 4, stmcpp::read_write_flag>;

namespace arr_fields
{




} // namespace arr_fields

constexpr auto arr = arr_register{};


// 
using rcr_register = stmcpp::register_wrapper<0x40014430, 4, stmcpp::read_write_flag>;

namespace rcr_fields
{




} // namespace rcr_fields

constexpr auto rcr = rcr_register{};


// 
using bdtr_register = stmcpp::register_wrapper<0x40014444, 4, stmcpp::read_write_flag>;

namespace bdtr_fields
{

// 
constexpr auto moe = stmcpp::register_field<bdtr_register, 15, 1>{1};

// 
constexpr auto aoe = stmcpp::register_field<bdtr_register, 14, 1>{1};

// 
constexpr auto bkp = stmcpp::register_field<bdtr_register, 13, 1>{1};

// 
constexpr auto bke = stmcpp::register_field<bdtr_register, 12, 1>{1};

// 
constexpr auto ossr = stmcpp::register_field<bdtr_register, 11, 1>{1};

// 
constexpr auto ossi = stmcpp::register_field<bdtr_register, 10, 1>{1};





} // namespace bdtr_fields

constexpr auto bdtr = bdtr_register{};


// 
using dcr_register = stmcpp::register_wrapper<0x40014448, 4, stmcpp::read_write_flag>;

namespace dcr_fields
{





} // namespace dcr_fields

constexpr auto dcr = dcr_register{};


// 
using dmar_register = stmcpp::register_wrapper<0x4001444c, 4, stmcpp::read_write_flag>;

namespace dmar_fields
{




} // namespace dmar_fields

constexpr auto dmar = dmar_register{};


// 
using ccr1_register = stmcpp::register_wrapper<0x40014434, 4, stmcpp::read_write_flag>;

namespace ccr1_fields
{




} // namespace ccr1_fields

constexpr auto ccr1 = ccr1_register{};




} // namespace stmcpp::stm32f051::mtim16