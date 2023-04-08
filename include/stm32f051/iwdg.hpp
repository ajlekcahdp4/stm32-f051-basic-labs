
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

namespace stmcpp::stm32f051::miwdg
{

// 
using kr_register = stmcpp::register_wrapper<0x40003000, 4, stmcpp::write_only_flag>;

namespace kr_fields
{

// 
constexpr auto key_enable = stmcpp::register_field<kr_register, 0, 16>{21845};

// 
constexpr auto key_reset = stmcpp::register_field<kr_register, 0, 16>{43690};

// 
constexpr auto key_start = stmcpp::register_field<kr_register, 0, 16>{52428};

using key = stmcpp::register_field<kr_register, 0, 16>;




} // namespace kr_fields

constexpr auto kr = kr_register{};


// 
using pr_register = stmcpp::register_wrapper<0x40003004, 4, stmcpp::read_write_flag>;

namespace pr_fields
{

// 
constexpr auto pr_divideby4 = stmcpp::register_field<pr_register, 0, 3>{0};

// 
constexpr auto pr_divideby8 = stmcpp::register_field<pr_register, 0, 3>{1};

// 
constexpr auto pr_divideby16 = stmcpp::register_field<pr_register, 0, 3>{2};

// 
constexpr auto pr_divideby32 = stmcpp::register_field<pr_register, 0, 3>{3};

// 
constexpr auto pr_divideby64 = stmcpp::register_field<pr_register, 0, 3>{4};

// 
constexpr auto pr_divideby128 = stmcpp::register_field<pr_register, 0, 3>{5};

// 
constexpr auto pr_divideby256 = stmcpp::register_field<pr_register, 0, 3>{6};

// 
constexpr auto pr_divideby256bis = stmcpp::register_field<pr_register, 0, 3>{7};

using pr = stmcpp::register_field<pr_register, 0, 3>;




} // namespace pr_fields

constexpr auto pr = pr_register{};


// 
using rlr_register = stmcpp::register_wrapper<0x40003008, 4, stmcpp::read_write_flag>;

namespace rlr_fields
{




} // namespace rlr_fields

constexpr auto rlr = rlr_register{};


// 
using sr_register = stmcpp::register_wrapper<0x4000300c, 4, stmcpp::read_only_flag>;

namespace sr_fields
{

// 
constexpr auto pvu = stmcpp::register_field<sr_register, 0, 1>{1};

// 
constexpr auto rvu = stmcpp::register_field<sr_register, 1, 1>{1};

// 
constexpr auto wvu = stmcpp::register_field<sr_register, 2, 1>{1};



} // namespace sr_fields

constexpr auto sr = sr_register{};


// 
using winr_register = stmcpp::register_wrapper<0x40003010, 4, stmcpp::read_write_flag>;

namespace winr_fields
{




} // namespace winr_fields

constexpr auto winr = winr_register{};




} // namespace stmcpp::stm32f051::miwdg