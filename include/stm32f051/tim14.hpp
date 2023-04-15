
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

namespace stmcpp::stm32f051::mtim14
{
constexpr auto nvic_bit = 1 << 19;

// 
using cr1_register = stmcpp::register_wrapper<0x40002000, 4, stmcpp::read_write_flag>;

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
using dier_register = stmcpp::register_wrapper<0x4000200c, 4, stmcpp::read_write_flag>;

namespace dier_fields
{

// 
constexpr auto cc1ie = stmcpp::register_field<dier_register, 1, 1>{1};

// 
constexpr auto uie_disabled = stmcpp::register_field<dier_register, 0, 1>{0};

// 
constexpr auto uie_enabled = stmcpp::register_field<dier_register, 0, 1>{1};

using uie = stmcpp::register_field<dier_register, 0, 1>;




} // namespace dier_fields

constexpr auto dier = dier_register{};


// 
using sr_register = stmcpp::register_wrapper<0x40002010, 4, stmcpp::read_write_flag>;

namespace sr_fields
{

// 
constexpr auto cc1of = stmcpp::register_field<sr_register, 9, 1>{1};

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
using egr_register = stmcpp::register_wrapper<0x40002014, 4, stmcpp::write_only_flag>;

namespace egr_fields
{

// 
constexpr auto cc1g = stmcpp::register_field<egr_register, 1, 1>{1};

// 
constexpr auto ug_update = stmcpp::register_field<egr_register, 0, 1>{1};

using ug = stmcpp::register_field<egr_register, 0, 1>;




} // namespace egr_fields

constexpr auto egr = egr_register{};


// 
using ccmr1_output_register = stmcpp::register_wrapper<0x40002018, 4, stmcpp::read_write_flag>;

namespace ccmr1_output_fields
{


// 
constexpr auto oc1fe = stmcpp::register_field<ccmr1_output_register, 2, 1>{1};

// 
constexpr auto oc1pe = stmcpp::register_field<ccmr1_output_register, 3, 1>{1};

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




} // namespace ccmr1_output_fields

constexpr auto ccmr1_output = ccmr1_output_register{};


// 
using ccmr1_input_register = stmcpp::register_wrapper<0x40002018, 4, stmcpp::read_write_flag>;

namespace ccmr1_input_fields
{






} // namespace ccmr1_input_fields

constexpr auto ccmr1_input = ccmr1_input_register{};


// 
using ccer_register = stmcpp::register_wrapper<0x40002020, 4, stmcpp::read_write_flag>;

namespace ccer_fields
{

// 
constexpr auto cc1np = stmcpp::register_field<ccer_register, 3, 1>{1};

// 
constexpr auto cc1p = stmcpp::register_field<ccer_register, 1, 1>{1};

// 
constexpr auto cc1e = stmcpp::register_field<ccer_register, 0, 1>{1};



} // namespace ccer_fields

constexpr auto ccer = ccer_register{};


// 
using cnt_register = stmcpp::register_wrapper<0x40002024, 4, stmcpp::read_write_flag>;

namespace cnt_fields
{




} // namespace cnt_fields

constexpr auto cnt = cnt_register{};


// 
using psc_register = stmcpp::register_wrapper<0x40002028, 4, stmcpp::read_write_flag>;

namespace psc_fields
{




} // namespace psc_fields

constexpr auto psc = psc_register{};


// 
using arr_register = stmcpp::register_wrapper<0x4000202c, 4, stmcpp::read_write_flag>;

namespace arr_fields
{




} // namespace arr_fields

constexpr auto arr = arr_register{};


// 
using or_register = stmcpp::register_wrapper<0x40002050, 4, stmcpp::read_write_flag>;

namespace or_fields
{




} // namespace or_fields

constexpr auto or_reg = or_register{};

// 
using ccr1_register = stmcpp::register_wrapper<0x40002034, 4, stmcpp::read_write_flag>;

namespace ccr1_fields
{




} // namespace ccr1_fields

constexpr auto ccr1 = ccr1_register{};




} // namespace stmcpp::stm32f051::mtim14