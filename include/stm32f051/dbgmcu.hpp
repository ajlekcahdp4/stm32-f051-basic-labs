
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

namespace stmcpp::stm32f051::mdbgmcu
{

// 
using idcode_register = stmcpp::register_wrapper<0x40015800, 4, stmcpp::read_only_flag>;

namespace idcode_fields
{






} // namespace idcode_fields

constexpr auto idcode = idcode_register{};


// 
using cr_register = stmcpp::register_wrapper<0x40015804, 4, stmcpp::read_write_flag>;

namespace cr_fields
{

// 
constexpr auto dbg_stop = stmcpp::register_field<cr_register, 1, 1>{1};

// 
constexpr auto dbg_standby = stmcpp::register_field<cr_register, 2, 1>{1};



} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using apb1_fz_register = stmcpp::register_wrapper<0x40015808, 4, stmcpp::read_write_flag>;

namespace apb1_fz_fields
{

// 
constexpr auto dbg_tim2_stop = stmcpp::register_field<apb1_fz_register, 0, 1>{1};

// 
constexpr auto dbg_tim3_stop = stmcpp::register_field<apb1_fz_register, 1, 1>{1};

// 
constexpr auto dbg_tim6_stop = stmcpp::register_field<apb1_fz_register, 4, 1>{1};

// 
constexpr auto dbg_tim7_stop = stmcpp::register_field<apb1_fz_register, 5, 1>{1};

// 
constexpr auto dbg_tim14_stop = stmcpp::register_field<apb1_fz_register, 8, 1>{1};

// 
constexpr auto dbg_rtc_stop = stmcpp::register_field<apb1_fz_register, 10, 1>{1};

// 
constexpr auto dbg_wwdg_stop = stmcpp::register_field<apb1_fz_register, 11, 1>{1};

// 
constexpr auto dbg_iwdg_stop = stmcpp::register_field<apb1_fz_register, 12, 1>{1};

// 
constexpr auto dbg_i2c1_smbus_timeout = stmcpp::register_field<apb1_fz_register, 21, 1>{1};

// 
constexpr auto dbg_can_stop = stmcpp::register_field<apb1_fz_register, 25, 1>{1};



} // namespace apb1_fz_fields

constexpr auto apb1_fz = apb1_fz_register{};


// 
using apb2_fz_register = stmcpp::register_wrapper<0x4001580c, 4, stmcpp::read_write_flag>;

namespace apb2_fz_fields
{

// 
constexpr auto dbg_tim1_stop = stmcpp::register_field<apb2_fz_register, 11, 1>{1};

// 
constexpr auto dbg_tim15_stop = stmcpp::register_field<apb2_fz_register, 16, 1>{1};

// 
constexpr auto dbg_tim16_stop = stmcpp::register_field<apb2_fz_register, 17, 1>{1};

// 
constexpr auto dbg_tim17_stop = stmcpp::register_field<apb2_fz_register, 18, 1>{1};



} // namespace apb2_fz_fields

constexpr auto apb2_fz = apb2_fz_register{};




} // namespace stmcpp::stm32f051::mdbgmcu