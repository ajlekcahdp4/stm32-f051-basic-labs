
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

namespace stmcpp::stm32f051::mtim7
{

// 
using cr1_register = stmcpp::register_wrapper<0x40001400, 4, stmcpp::read_write_flag>;

namespace cr1_fields
{

// 
constexpr auto arpe_disabled = stmcpp::register_field<cr1_register, 7, 1>{0};

// 
constexpr auto arpe_enabled = stmcpp::register_field<cr1_register, 7, 1>{1};

using arpe = stmcpp::register_field<cr1_register, 7, 1>;


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
using cr2_register = stmcpp::register_wrapper<0x40001404, 4, stmcpp::read_write_flag>;

namespace cr2_fields
{

// 
constexpr auto mms_reset = stmcpp::register_field<cr2_register, 4, 3>{0};

// 
constexpr auto mms_enable = stmcpp::register_field<cr2_register, 4, 3>{1};

// 
constexpr auto mms_update = stmcpp::register_field<cr2_register, 4, 3>{2};

using mms = stmcpp::register_field<cr2_register, 4, 3>;




} // namespace cr2_fields

constexpr auto cr2 = cr2_register{};


// 
using dier_register = stmcpp::register_wrapper<0x4000140c, 4, stmcpp::read_write_flag>;

namespace dier_fields
{

// 
constexpr auto ude_disabled = stmcpp::register_field<dier_register, 8, 1>{0};

// 
constexpr auto ude_enabled = stmcpp::register_field<dier_register, 8, 1>{1};

using ude = stmcpp::register_field<dier_register, 8, 1>;


// 
constexpr auto uie_disabled = stmcpp::register_field<dier_register, 0, 1>{0};

// 
constexpr auto uie_enabled = stmcpp::register_field<dier_register, 0, 1>{1};

using uie = stmcpp::register_field<dier_register, 0, 1>;




} // namespace dier_fields

constexpr auto dier = dier_register{};


// 
using sr_register = stmcpp::register_wrapper<0x40001410, 4, stmcpp::read_write_flag>;

namespace sr_fields
{

// 
constexpr auto uif_clear = stmcpp::register_field<sr_register, 0, 1>{0};

// 
constexpr auto uif_updatepending = stmcpp::register_field<sr_register, 0, 1>{1};

using uif = stmcpp::register_field<sr_register, 0, 1>;




} // namespace sr_fields

constexpr auto sr = sr_register{};


// 
using egr_register = stmcpp::register_wrapper<0x40001414, 4, stmcpp::write_only_flag>;

namespace egr_fields
{

// 
constexpr auto ug_update = stmcpp::register_field<egr_register, 0, 1>{1};

using ug = stmcpp::register_field<egr_register, 0, 1>;




} // namespace egr_fields

constexpr auto egr = egr_register{};


// 
using cnt_register = stmcpp::register_wrapper<0x40001424, 4, stmcpp::read_write_flag>;

namespace cnt_fields
{




} // namespace cnt_fields

constexpr auto cnt = cnt_register{};


// 
using psc_register = stmcpp::register_wrapper<0x40001428, 4, stmcpp::read_write_flag>;

namespace psc_fields
{




} // namespace psc_fields

constexpr auto psc = psc_register{};


// 
using arr_register = stmcpp::register_wrapper<0x4000142c, 4, stmcpp::read_write_flag>;

namespace arr_fields
{




} // namespace arr_fields

constexpr auto arr = arr_register{};




} // namespace stmcpp::stm32f051::mtim7