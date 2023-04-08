
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

namespace stmcpp::stm32f051::mdma1
{

// 
using isr_register = stmcpp::register_wrapper<0x40020000, 4, stmcpp::read_only_flag>;

namespace isr_fields
{

// 
constexpr auto gif1_noevent = stmcpp::register_field<isr_register, 0, 1>{0};

// 
constexpr auto gif1_event = stmcpp::register_field<isr_register, 0, 1>{1};

using gif1 = stmcpp::register_field<isr_register, 0, 1>;


// 
constexpr auto tcif1_notcomplete = stmcpp::register_field<isr_register, 1, 1>{0};

// 
constexpr auto tcif1_complete = stmcpp::register_field<isr_register, 1, 1>{1};

using tcif1 = stmcpp::register_field<isr_register, 1, 1>;


// 
constexpr auto htif1_nothalf = stmcpp::register_field<isr_register, 2, 1>{0};

// 
constexpr auto htif1_half = stmcpp::register_field<isr_register, 2, 1>{1};

using htif1 = stmcpp::register_field<isr_register, 2, 1>;


// 
constexpr auto teif1_noerror = stmcpp::register_field<isr_register, 3, 1>{0};

// 
constexpr auto teif1_error = stmcpp::register_field<isr_register, 3, 1>{1};

using teif1 = stmcpp::register_field<isr_register, 3, 1>;


// 
constexpr auto gif2 = stmcpp::register_field<isr_register, 4, 1>{1};

// 
constexpr auto tcif2 = stmcpp::register_field<isr_register, 5, 1>{1};

// 
constexpr auto htif2 = stmcpp::register_field<isr_register, 6, 1>{1};

// 
constexpr auto teif2 = stmcpp::register_field<isr_register, 7, 1>{1};

// 
constexpr auto gif3 = stmcpp::register_field<isr_register, 8, 1>{1};

// 
constexpr auto tcif3 = stmcpp::register_field<isr_register, 9, 1>{1};

// 
constexpr auto htif3 = stmcpp::register_field<isr_register, 10, 1>{1};

// 
constexpr auto teif3 = stmcpp::register_field<isr_register, 11, 1>{1};

// 
constexpr auto gif4 = stmcpp::register_field<isr_register, 12, 1>{1};

// 
constexpr auto tcif4 = stmcpp::register_field<isr_register, 13, 1>{1};

// 
constexpr auto htif4 = stmcpp::register_field<isr_register, 14, 1>{1};

// 
constexpr auto teif4 = stmcpp::register_field<isr_register, 15, 1>{1};

// 
constexpr auto gif5 = stmcpp::register_field<isr_register, 16, 1>{1};

// 
constexpr auto tcif5 = stmcpp::register_field<isr_register, 17, 1>{1};

// 
constexpr auto htif5 = stmcpp::register_field<isr_register, 18, 1>{1};

// 
constexpr auto teif5 = stmcpp::register_field<isr_register, 19, 1>{1};

// 
constexpr auto gif6 = stmcpp::register_field<isr_register, 20, 1>{1};

// 
constexpr auto tcif6 = stmcpp::register_field<isr_register, 21, 1>{1};

// 
constexpr auto htif6 = stmcpp::register_field<isr_register, 22, 1>{1};

// 
constexpr auto teif6 = stmcpp::register_field<isr_register, 23, 1>{1};

// 
constexpr auto gif7 = stmcpp::register_field<isr_register, 24, 1>{1};

// 
constexpr auto tcif7 = stmcpp::register_field<isr_register, 25, 1>{1};

// 
constexpr auto htif7 = stmcpp::register_field<isr_register, 26, 1>{1};

// 
constexpr auto teif7 = stmcpp::register_field<isr_register, 27, 1>{1};



} // namespace isr_fields

constexpr auto isr = isr_register{};


// 
using ifcr_register = stmcpp::register_wrapper<0x40020004, 4, stmcpp::write_only_flag>;

namespace ifcr_fields
{

// 
constexpr auto cgif1_clear = stmcpp::register_field<ifcr_register, 0, 1>{1};

using cgif1 = stmcpp::register_field<ifcr_register, 0, 1>;


// 
constexpr auto ctcif1_clear = stmcpp::register_field<ifcr_register, 1, 1>{1};

using ctcif1 = stmcpp::register_field<ifcr_register, 1, 1>;


// 
constexpr auto chtif1_clear = stmcpp::register_field<ifcr_register, 2, 1>{1};

using chtif1 = stmcpp::register_field<ifcr_register, 2, 1>;


// 
constexpr auto cteif1_clear = stmcpp::register_field<ifcr_register, 3, 1>{1};

using cteif1 = stmcpp::register_field<ifcr_register, 3, 1>;


// 
constexpr auto cgif2 = stmcpp::register_field<ifcr_register, 4, 1>{1};

// 
constexpr auto ctcif2 = stmcpp::register_field<ifcr_register, 5, 1>{1};

// 
constexpr auto chtif2 = stmcpp::register_field<ifcr_register, 6, 1>{1};

// 
constexpr auto cteif2 = stmcpp::register_field<ifcr_register, 7, 1>{1};

// 
constexpr auto cgif3 = stmcpp::register_field<ifcr_register, 8, 1>{1};

// 
constexpr auto ctcif3 = stmcpp::register_field<ifcr_register, 9, 1>{1};

// 
constexpr auto chtif3 = stmcpp::register_field<ifcr_register, 10, 1>{1};

// 
constexpr auto cteif3 = stmcpp::register_field<ifcr_register, 11, 1>{1};

// 
constexpr auto cgif4 = stmcpp::register_field<ifcr_register, 12, 1>{1};

// 
constexpr auto ctcif4 = stmcpp::register_field<ifcr_register, 13, 1>{1};

// 
constexpr auto chtif4 = stmcpp::register_field<ifcr_register, 14, 1>{1};

// 
constexpr auto cteif4 = stmcpp::register_field<ifcr_register, 15, 1>{1};

// 
constexpr auto cgif5 = stmcpp::register_field<ifcr_register, 16, 1>{1};

// 
constexpr auto ctcif5 = stmcpp::register_field<ifcr_register, 17, 1>{1};

// 
constexpr auto chtif5 = stmcpp::register_field<ifcr_register, 18, 1>{1};

// 
constexpr auto cteif5 = stmcpp::register_field<ifcr_register, 19, 1>{1};

// 
constexpr auto cgif6 = stmcpp::register_field<ifcr_register, 20, 1>{1};

// 
constexpr auto ctcif6 = stmcpp::register_field<ifcr_register, 21, 1>{1};

// 
constexpr auto chtif6 = stmcpp::register_field<ifcr_register, 22, 1>{1};

// 
constexpr auto cteif6 = stmcpp::register_field<ifcr_register, 23, 1>{1};

// 
constexpr auto cgif7 = stmcpp::register_field<ifcr_register, 24, 1>{1};

// 
constexpr auto ctcif7 = stmcpp::register_field<ifcr_register, 25, 1>{1};

// 
constexpr auto chtif7 = stmcpp::register_field<ifcr_register, 26, 1>{1};

// 
constexpr auto cteif7 = stmcpp::register_field<ifcr_register, 27, 1>{1};



} // namespace ifcr_fields

constexpr auto ifcr = ifcr_register{};




} // namespace stmcpp::stm32f051::mdma1