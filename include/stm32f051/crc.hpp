
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

namespace stmcpp::stm32f051::mcrc
{

// 
using dr_register = stmcpp::register_wrapper<0x40023000, 4, stmcpp::read_write_flag>;

namespace dr_fields
{




} // namespace dr_fields

constexpr auto dr = dr_register{};


// 
using idr_register = stmcpp::register_wrapper<0x40023004, 4, stmcpp::read_write_flag>;

namespace idr_fields
{




} // namespace idr_fields

constexpr auto idr = idr_register{};


// 
using cr_register = stmcpp::register_wrapper<0x40023008, 4, stmcpp::read_write_flag>;

namespace cr_fields
{

// 
constexpr auto reset_reset = stmcpp::register_field<cr_register, 0, 1>{1};

using reset = stmcpp::register_field<cr_register, 0, 1>;


// 
constexpr auto polysize_polysize32 = stmcpp::register_field<cr_register, 3, 2>{0};

// 
constexpr auto polysize_polysize16 = stmcpp::register_field<cr_register, 3, 2>{1};

// 
constexpr auto polysize_polysize8 = stmcpp::register_field<cr_register, 3, 2>{2};

// 
constexpr auto polysize_polysize7 = stmcpp::register_field<cr_register, 3, 2>{3};

using polysize = stmcpp::register_field<cr_register, 3, 2>;


// 
constexpr auto rev_in_normal = stmcpp::register_field<cr_register, 5, 2>{0};

// 
constexpr auto rev_in_byte = stmcpp::register_field<cr_register, 5, 2>{1};

// 
constexpr auto rev_in_halfword = stmcpp::register_field<cr_register, 5, 2>{2};

// 
constexpr auto rev_in_word = stmcpp::register_field<cr_register, 5, 2>{3};

using rev_in = stmcpp::register_field<cr_register, 5, 2>;


// 
constexpr auto rev_out_normal = stmcpp::register_field<cr_register, 7, 1>{0};

// 
constexpr auto rev_out_reversed = stmcpp::register_field<cr_register, 7, 1>{1};

using rev_out = stmcpp::register_field<cr_register, 7, 1>;




} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using init_register = stmcpp::register_wrapper<0x40023010, 4, stmcpp::read_write_flag>;

namespace init_fields
{




} // namespace init_fields

constexpr auto init = init_register{};


// 
using dr8_register = stmcpp::register_wrapper<0x40023000, 1, stmcpp::read_write_flag>;

namespace dr8_fields
{




} // namespace dr8_fields

constexpr auto dr8 = dr8_register{};


// 
using dr16_register = stmcpp::register_wrapper<0x40023000, 2, stmcpp::read_write_flag>;

namespace dr16_fields
{




} // namespace dr16_fields

constexpr auto dr16 = dr16_register{};




} // namespace stmcpp::stm32f051::mcrc