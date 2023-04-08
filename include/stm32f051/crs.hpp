
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

namespace stmcpp::stm32f051::mcrs
{

// 
using cr_register = stmcpp::register_wrapper<0x40006c00, 4, stmcpp::read_write_flag>;

namespace cr_fields
{


// 
constexpr auto swsync = stmcpp::register_field<cr_register, 7, 1>{1};

// 
constexpr auto autotrimen = stmcpp::register_field<cr_register, 6, 1>{1};

// 
constexpr auto cen = stmcpp::register_field<cr_register, 5, 1>{1};

// 
constexpr auto esyncie = stmcpp::register_field<cr_register, 3, 1>{1};

// 
constexpr auto errie = stmcpp::register_field<cr_register, 2, 1>{1};

// 
constexpr auto syncwarnie = stmcpp::register_field<cr_register, 1, 1>{1};

// 
constexpr auto syncokie = stmcpp::register_field<cr_register, 0, 1>{1};



} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using cfgr_register = stmcpp::register_wrapper<0x40006c04, 4, stmcpp::read_write_flag>;

namespace cfgr_fields
{

// 
constexpr auto syncpol = stmcpp::register_field<cfgr_register, 31, 1>{1};







} // namespace cfgr_fields

constexpr auto cfgr = cfgr_register{};


// 
using isr_register = stmcpp::register_wrapper<0x40006c08, 4, stmcpp::read_only_flag>;

namespace isr_fields
{


// 
constexpr auto fedir = stmcpp::register_field<isr_register, 15, 1>{1};

// 
constexpr auto trimovf = stmcpp::register_field<isr_register, 10, 1>{1};

// 
constexpr auto syncmiss = stmcpp::register_field<isr_register, 9, 1>{1};

// 
constexpr auto syncerr = stmcpp::register_field<isr_register, 8, 1>{1};

// 
constexpr auto esyncf = stmcpp::register_field<isr_register, 3, 1>{1};

// 
constexpr auto errf = stmcpp::register_field<isr_register, 2, 1>{1};

// 
constexpr auto syncwarnf = stmcpp::register_field<isr_register, 1, 1>{1};

// 
constexpr auto syncokf = stmcpp::register_field<isr_register, 0, 1>{1};



} // namespace isr_fields

constexpr auto isr = isr_register{};


// 
using icr_register = stmcpp::register_wrapper<0x40006c0c, 4, stmcpp::read_write_flag>;

namespace icr_fields
{

// 
constexpr auto esyncc = stmcpp::register_field<icr_register, 3, 1>{1};

// 
constexpr auto errc = stmcpp::register_field<icr_register, 2, 1>{1};

// 
constexpr auto syncwarnc = stmcpp::register_field<icr_register, 1, 1>{1};

// 
constexpr auto syncokc = stmcpp::register_field<icr_register, 0, 1>{1};



} // namespace icr_fields

constexpr auto icr = icr_register{};




} // namespace stmcpp::stm32f051::mcrs