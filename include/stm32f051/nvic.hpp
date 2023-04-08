
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

namespace stmcpp::stm32f051::mnvic
{

// 
using iser_register = stmcpp::register_wrapper<0xe000e100, 4, stmcpp::read_write_flag>;

namespace iser_fields
{




} // namespace iser_fields

constexpr auto iser = iser_register{};


// 
using icer_register = stmcpp::register_wrapper<0xe000e180, 4, stmcpp::read_write_flag>;

namespace icer_fields
{




} // namespace icer_fields

constexpr auto icer = icer_register{};


// 
using ispr_register = stmcpp::register_wrapper<0xe000e200, 4, stmcpp::read_write_flag>;

namespace ispr_fields
{




} // namespace ispr_fields

constexpr auto ispr = ispr_register{};


// 
using icpr_register = stmcpp::register_wrapper<0xe000e280, 4, stmcpp::read_write_flag>;

namespace icpr_fields
{




} // namespace icpr_fields

constexpr auto icpr = icpr_register{};


// 
using ipr0_register = stmcpp::register_wrapper<0xe000e400, 4, stmcpp::read_write_flag>;

namespace ipr0_fields
{







} // namespace ipr0_fields

constexpr auto ipr0 = ipr0_register{};


// 
using ipr1_register = stmcpp::register_wrapper<0xe000e404, 4, stmcpp::read_write_flag>;

namespace ipr1_fields
{







} // namespace ipr1_fields

constexpr auto ipr1 = ipr1_register{};


// 
using ipr2_register = stmcpp::register_wrapper<0xe000e408, 4, stmcpp::read_write_flag>;

namespace ipr2_fields
{







} // namespace ipr2_fields

constexpr auto ipr2 = ipr2_register{};


// 
using ipr3_register = stmcpp::register_wrapper<0xe000e40c, 4, stmcpp::read_write_flag>;

namespace ipr3_fields
{







} // namespace ipr3_fields

constexpr auto ipr3 = ipr3_register{};


// 
using ipr4_register = stmcpp::register_wrapper<0xe000e410, 4, stmcpp::read_write_flag>;

namespace ipr4_fields
{







} // namespace ipr4_fields

constexpr auto ipr4 = ipr4_register{};


// 
using ipr5_register = stmcpp::register_wrapper<0xe000e414, 4, stmcpp::read_write_flag>;

namespace ipr5_fields
{







} // namespace ipr5_fields

constexpr auto ipr5 = ipr5_register{};


// 
using ipr6_register = stmcpp::register_wrapper<0xe000e418, 4, stmcpp::read_write_flag>;

namespace ipr6_fields
{







} // namespace ipr6_fields

constexpr auto ipr6 = ipr6_register{};


// 
using ipr7_register = stmcpp::register_wrapper<0xe000e41c, 4, stmcpp::read_write_flag>;

namespace ipr7_fields
{







} // namespace ipr7_fields

constexpr auto ipr7 = ipr7_register{};




} // namespace stmcpp::stm32f051::mnvic