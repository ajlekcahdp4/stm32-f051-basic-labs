
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

namespace stmcpp::stm32f051::mpwr
{

// 
using cr_register = stmcpp::register_wrapper<0x40007000, 4, stmcpp::read_write_flag>;

namespace cr_fields
{

// 
constexpr auto dbp = stmcpp::register_field<cr_register, 8, 1>{1};


// 
constexpr auto pvde = stmcpp::register_field<cr_register, 4, 1>{1};

// 
constexpr auto csbf = stmcpp::register_field<cr_register, 3, 1>{1};

// 
constexpr auto cwuf = stmcpp::register_field<cr_register, 2, 1>{1};

// 
constexpr auto pdds_stop_mode = stmcpp::register_field<cr_register, 1, 1>{0};

// 
constexpr auto pdds_standby_mode = stmcpp::register_field<cr_register, 1, 1>{1};

using pdds = stmcpp::register_field<cr_register, 1, 1>;


// 
constexpr auto lpds = stmcpp::register_field<cr_register, 0, 1>{1};



} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using csr_register = stmcpp::register_wrapper<0x40007004, 4, readj-write>;

namespace csr_fields
{

// 
constexpr auto wuf = stmcpp::register_field<csr_register, 0, 1>{1};

// 
constexpr auto sbf = stmcpp::register_field<csr_register, 1, 1>{1};

// 
constexpr auto pvdo = stmcpp::register_field<csr_register, 2, 1>{1};

// 
constexpr auto vrefintrdy = stmcpp::register_field<csr_register, 3, 1>{1};

// 
constexpr auto ewup1 = stmcpp::register_field<csr_register, 8, 1>{1};

// 
constexpr auto ewup2 = stmcpp::register_field<csr_register, 9, 1>{1};

// 
constexpr auto ewup3 = stmcpp::register_field<csr_register, 10, 1>{1};

// 
constexpr auto ewup4 = stmcpp::register_field<csr_register, 11, 1>{1};

// 
constexpr auto ewup5 = stmcpp::register_field<csr_register, 12, 1>{1};

// 
constexpr auto ewup6 = stmcpp::register_field<csr_register, 13, 1>{1};

// 
constexpr auto ewup7 = stmcpp::register_field<csr_register, 14, 1>{1};

// 
constexpr auto ewup8 = stmcpp::register_field<csr_register, 15, 1>{1};



} // namespace csr_fields

constexpr auto csr = csr_register{};




} // namespace stmcpp::stm32f051::mpwr