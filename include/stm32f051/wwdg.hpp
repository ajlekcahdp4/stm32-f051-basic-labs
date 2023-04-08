
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

namespace stmcpp::stm32f051::mwwdg
{

// 
using cr_register = stmcpp::register_wrapper<0x40002c00, 4, stmcpp::read_write_flag>;

namespace cr_fields
{

// 
constexpr auto wdga_disabled = stmcpp::register_field<cr_register, 7, 1>{0};

// 
constexpr auto wdga_enabled = stmcpp::register_field<cr_register, 7, 1>{1};

using wdga = stmcpp::register_field<cr_register, 7, 1>;





} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using cfr_register = stmcpp::register_wrapper<0x40002c04, 4, stmcpp::read_write_flag>;

namespace cfr_fields
{

// 
constexpr auto ewi_enable = stmcpp::register_field<cfr_register, 9, 1>{1};

using ewi = stmcpp::register_field<cfr_register, 9, 1>;



// 
constexpr auto wdgtb_div1 = stmcpp::register_field<cfr_register, 7, 2>{0};

// 
constexpr auto wdgtb_div2 = stmcpp::register_field<cfr_register, 7, 2>{1};

// 
constexpr auto wdgtb_div4 = stmcpp::register_field<cfr_register, 7, 2>{2};

// 
constexpr auto wdgtb_div8 = stmcpp::register_field<cfr_register, 7, 2>{3};

using wdgtb = stmcpp::register_field<cfr_register, 7, 2>;




} // namespace cfr_fields

constexpr auto cfr = cfr_register{};


// 
using sr_register = stmcpp::register_wrapper<0x40002c08, 4, stmcpp::read_write_flag>;

namespace sr_fields
{

// 
constexpr auto ewif_pending = stmcpp::register_field<sr_register, 0, 1>{1};

// 
constexpr auto ewif_finished = stmcpp::register_field<sr_register, 0, 1>{0};

// 
constexpr auto ewif_finished = stmcpp::register_field<sr_register, 0, 1>{0};

using ewif = stmcpp::register_field<sr_register, 0, 1>;




} // namespace sr_fields

constexpr auto sr = sr_register{};




} // namespace stmcpp::stm32f051::mwwdg