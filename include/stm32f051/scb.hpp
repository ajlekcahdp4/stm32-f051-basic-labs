
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

namespace stmcpp::stm32f051::mscb
{

// 
using cpuid_register = stmcpp::register_wrapper<0xe000ed00, 4, stmcpp::read_only_flag>;

namespace cpuid_fields
{








} // namespace cpuid_fields

constexpr auto cpuid = cpuid_register{};


// 
using icsr_register = stmcpp::register_wrapper<0xe000ed04, 4, stmcpp::read_write_flag>;

namespace icsr_fields
{



// 
constexpr auto isrpending = stmcpp::register_field<icsr_register, 22, 1>{1};

// 
constexpr auto pendstclr = stmcpp::register_field<icsr_register, 25, 1>{1};

// 
constexpr auto pendstset = stmcpp::register_field<icsr_register, 26, 1>{1};

// 
constexpr auto pendsvclr = stmcpp::register_field<icsr_register, 27, 1>{1};

// 
constexpr auto pendsvset = stmcpp::register_field<icsr_register, 28, 1>{1};

// 
constexpr auto nmipendset = stmcpp::register_field<icsr_register, 31, 1>{1};



} // namespace icsr_fields

constexpr auto icsr = icsr_register{};


// 
using aircr_register = stmcpp::register_wrapper<0xe000ed0c, 4, stmcpp::read_write_flag>;

namespace aircr_fields
{

// 
constexpr auto vectclractive = stmcpp::register_field<aircr_register, 1, 1>{1};

// 
constexpr auto sysresetreq = stmcpp::register_field<aircr_register, 2, 1>{1};

// 
constexpr auto endianess = stmcpp::register_field<aircr_register, 15, 1>{1};




} // namespace aircr_fields

constexpr auto aircr = aircr_register{};


// 
using scr_register = stmcpp::register_wrapper<0xe000ed10, 4, stmcpp::read_write_flag>;

namespace scr_fields
{

// 
constexpr auto sleeponexit = stmcpp::register_field<scr_register, 1, 1>{1};

// 
constexpr auto sleepdeep = stmcpp::register_field<scr_register, 2, 1>{1};

// 
constexpr auto seveonpend = stmcpp::register_field<scr_register, 4, 1>{1};



} // namespace scr_fields

constexpr auto scr = scr_register{};


// 
using ccr_register = stmcpp::register_wrapper<0xe000ed14, 4, stmcpp::read_write_flag>;

namespace ccr_fields
{

// 
constexpr auto unalign__trp = stmcpp::register_field<ccr_register, 3, 1>{1};

// 
constexpr auto stkalign = stmcpp::register_field<ccr_register, 9, 1>{1};



} // namespace ccr_fields

constexpr auto ccr = ccr_register{};


// 
using shpr2_register = stmcpp::register_wrapper<0xe000ed1c, 4, stmcpp::read_write_flag>;

namespace shpr2_fields
{




} // namespace shpr2_fields

constexpr auto shpr2 = shpr2_register{};


// 
using shpr3_register = stmcpp::register_wrapper<0xe000ed20, 4, stmcpp::read_write_flag>;

namespace shpr3_fields
{





} // namespace shpr3_fields

constexpr auto shpr3 = shpr3_register{};




} // namespace stmcpp::stm32f051::mscb