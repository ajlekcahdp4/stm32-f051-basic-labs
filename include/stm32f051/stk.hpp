
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

namespace stmcpp::stm32f051::mstk
{

// 
using csr_register = stmcpp::register_wrapper<0xe000e010, 4, stmcpp::read_write_flag>;

namespace csr_fields
{

// 
constexpr auto enable = stmcpp::register_field<csr_register, 0, 1>{1};

// 
constexpr auto tickint = stmcpp::register_field<csr_register, 1, 1>{1};

// 
constexpr auto clksource = stmcpp::register_field<csr_register, 2, 1>{1};

// 
constexpr auto countflag = stmcpp::register_field<csr_register, 16, 1>{1};



} // namespace csr_fields

constexpr auto csr = csr_register{};


// 
using rvr_register = stmcpp::register_wrapper<0xe000e014, 4, stmcpp::read_write_flag>;

namespace rvr_fields
{




} // namespace rvr_fields

constexpr auto rvr = rvr_register{};


// 
using cvr_register = stmcpp::register_wrapper<0xe000e018, 4, stmcpp::read_write_flag>;

namespace cvr_fields
{




} // namespace cvr_fields

constexpr auto cvr = cvr_register{};


// 
using calib_register = stmcpp::register_wrapper<0xe000e01c, 4, stmcpp::read_write_flag>;

namespace calib_fields
{


// 
constexpr auto skew = stmcpp::register_field<calib_register, 30, 1>{1};

// 
constexpr auto noref = stmcpp::register_field<calib_register, 31, 1>{1};



} // namespace calib_fields

constexpr auto calib = calib_register{};




} // namespace stmcpp::stm32f051::mstk