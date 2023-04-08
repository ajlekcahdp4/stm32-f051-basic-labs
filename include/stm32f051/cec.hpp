
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

namespace stmcpp::stm32f051::mcec
{

// 
using cr_register = stmcpp::register_wrapper<0x40007800, 4, stmcpp::read_write_flag>;

namespace cr_fields
{

// 
constexpr auto txeom = stmcpp::register_field<cr_register, 2, 1>{1};

// 
constexpr auto txsom = stmcpp::register_field<cr_register, 1, 1>{1};

// 
constexpr auto cecen = stmcpp::register_field<cr_register, 0, 1>{1};



} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using cfgr_register = stmcpp::register_wrapper<0x40007804, 4, stmcpp::read_write_flag>;

namespace cfgr_fields
{

// 
constexpr auto lbpegen = stmcpp::register_field<cfgr_register, 11, 1>{1};

// 
constexpr auto bregen = stmcpp::register_field<cfgr_register, 10, 1>{1};

// 
constexpr auto brestp = stmcpp::register_field<cfgr_register, 9, 1>{1};

// 
constexpr auto rxtol = stmcpp::register_field<cfgr_register, 8, 1>{1};


// 
constexpr auto lstn = stmcpp::register_field<cfgr_register, 4, 1>{1};




} // namespace cfgr_fields

constexpr auto cfgr = cfgr_register{};


// 
using txdr_register = stmcpp::register_wrapper<0x40007808, 4, stmcpp::write_only_flag>;

namespace txdr_fields
{




} // namespace txdr_fields

constexpr auto txdr = txdr_register{};


// 
using rxdr_register = stmcpp::register_wrapper<0x4000780c, 4, stmcpp::read_only_flag>;

namespace rxdr_fields
{




} // namespace rxdr_fields

constexpr auto rxdr = rxdr_register{};


// 
using isr_register = stmcpp::register_wrapper<0x40007810, 4, stmcpp::read_write_flag>;

namespace isr_fields
{

// 
constexpr auto txacke = stmcpp::register_field<isr_register, 12, 1>{1};

// 
constexpr auto txerr = stmcpp::register_field<isr_register, 11, 1>{1};

// 
constexpr auto txudr = stmcpp::register_field<isr_register, 10, 1>{1};

// 
constexpr auto txend = stmcpp::register_field<isr_register, 9, 1>{1};

// 
constexpr auto txbr = stmcpp::register_field<isr_register, 8, 1>{1};

// 
constexpr auto arblst = stmcpp::register_field<isr_register, 7, 1>{1};

// 
constexpr auto rxacke = stmcpp::register_field<isr_register, 6, 1>{1};

// 
constexpr auto lbpe = stmcpp::register_field<isr_register, 5, 1>{1};

// 
constexpr auto sbpe = stmcpp::register_field<isr_register, 4, 1>{1};

// 
constexpr auto bre = stmcpp::register_field<isr_register, 3, 1>{1};

// 
constexpr auto rxovr = stmcpp::register_field<isr_register, 2, 1>{1};

// 
constexpr auto rxend = stmcpp::register_field<isr_register, 1, 1>{1};

// 
constexpr auto rxbr = stmcpp::register_field<isr_register, 0, 1>{1};



} // namespace isr_fields

constexpr auto isr = isr_register{};


// 
using ier_register = stmcpp::register_wrapper<0x40007814, 4, stmcpp::read_write_flag>;

namespace ier_fields
{

// 
constexpr auto txackie = stmcpp::register_field<ier_register, 12, 1>{1};

// 
constexpr auto txerrie = stmcpp::register_field<ier_register, 11, 1>{1};

// 
constexpr auto txudrie = stmcpp::register_field<ier_register, 10, 1>{1};

// 
constexpr auto txendie = stmcpp::register_field<ier_register, 9, 1>{1};

// 
constexpr auto txbrie = stmcpp::register_field<ier_register, 8, 1>{1};

// 
constexpr auto arblstie = stmcpp::register_field<ier_register, 7, 1>{1};

// 
constexpr auto rxackie = stmcpp::register_field<ier_register, 6, 1>{1};

// 
constexpr auto lbpeie = stmcpp::register_field<ier_register, 5, 1>{1};

// 
constexpr auto sbpeie = stmcpp::register_field<ier_register, 4, 1>{1};

// 
constexpr auto breie = stmcpp::register_field<ier_register, 3, 1>{1};

// 
constexpr auto rxovrie = stmcpp::register_field<ier_register, 2, 1>{1};

// 
constexpr auto rxendie = stmcpp::register_field<ier_register, 1, 1>{1};

// 
constexpr auto rxbrie = stmcpp::register_field<ier_register, 0, 1>{1};



} // namespace ier_fields

constexpr auto ier = ier_register{};




} // namespace stmcpp::stm32f051::mcec