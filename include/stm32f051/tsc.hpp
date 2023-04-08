
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

namespace stmcpp::stm32f051::mtsc
{

// 
using cr_register = stmcpp::register_wrapper<0x40024000, 4, stmcpp::read_write_flag>;

namespace cr_fields
{




// 
constexpr auto sse = stmcpp::register_field<cr_register, 16, 1>{1};

// 
constexpr auto sspsc = stmcpp::register_field<cr_register, 15, 1>{1};



// 
constexpr auto iodef = stmcpp::register_field<cr_register, 4, 1>{1};

// 
constexpr auto syncpol = stmcpp::register_field<cr_register, 3, 1>{1};

// 
constexpr auto am = stmcpp::register_field<cr_register, 2, 1>{1};

// 
constexpr auto start = stmcpp::register_field<cr_register, 1, 1>{1};

// 
constexpr auto tsce = stmcpp::register_field<cr_register, 0, 1>{1};



} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using ier_register = stmcpp::register_wrapper<0x40024004, 4, stmcpp::read_write_flag>;

namespace ier_fields
{

// 
constexpr auto mceie = stmcpp::register_field<ier_register, 1, 1>{1};

// 
constexpr auto eoaie = stmcpp::register_field<ier_register, 0, 1>{1};



} // namespace ier_fields

constexpr auto ier = ier_register{};


// 
using icr_register = stmcpp::register_wrapper<0x40024008, 4, stmcpp::read_write_flag>;

namespace icr_fields
{

// 
constexpr auto mceic = stmcpp::register_field<icr_register, 1, 1>{1};

// 
constexpr auto eoaic = stmcpp::register_field<icr_register, 0, 1>{1};



} // namespace icr_fields

constexpr auto icr = icr_register{};


// 
using isr_register = stmcpp::register_wrapper<0x4002400c, 4, stmcpp::read_write_flag>;

namespace isr_fields
{

// 
constexpr auto mcef = stmcpp::register_field<isr_register, 1, 1>{1};

// 
constexpr auto eoaf = stmcpp::register_field<isr_register, 0, 1>{1};



} // namespace isr_fields

constexpr auto isr = isr_register{};


// 
using iohcr_register = stmcpp::register_wrapper<0x40024010, 4, stmcpp::read_write_flag>;

namespace iohcr_fields
{

// 
constexpr auto g6_io4 = stmcpp::register_field<iohcr_register, 23, 1>{1};

// 
constexpr auto g6_io3 = stmcpp::register_field<iohcr_register, 22, 1>{1};

// 
constexpr auto g6_io2 = stmcpp::register_field<iohcr_register, 21, 1>{1};

// 
constexpr auto g6_io1 = stmcpp::register_field<iohcr_register, 20, 1>{1};

// 
constexpr auto g5_io4 = stmcpp::register_field<iohcr_register, 19, 1>{1};

// 
constexpr auto g5_io3 = stmcpp::register_field<iohcr_register, 18, 1>{1};

// 
constexpr auto g5_io2 = stmcpp::register_field<iohcr_register, 17, 1>{1};

// 
constexpr auto g5_io1 = stmcpp::register_field<iohcr_register, 16, 1>{1};

// 
constexpr auto g4_io4 = stmcpp::register_field<iohcr_register, 15, 1>{1};

// 
constexpr auto g4_io3 = stmcpp::register_field<iohcr_register, 14, 1>{1};

// 
constexpr auto g4_io2 = stmcpp::register_field<iohcr_register, 13, 1>{1};

// 
constexpr auto g4_io1 = stmcpp::register_field<iohcr_register, 12, 1>{1};

// 
constexpr auto g3_io4 = stmcpp::register_field<iohcr_register, 11, 1>{1};

// 
constexpr auto g3_io3 = stmcpp::register_field<iohcr_register, 10, 1>{1};

// 
constexpr auto g3_io2 = stmcpp::register_field<iohcr_register, 9, 1>{1};

// 
constexpr auto g3_io1 = stmcpp::register_field<iohcr_register, 8, 1>{1};

// 
constexpr auto g2_io4 = stmcpp::register_field<iohcr_register, 7, 1>{1};

// 
constexpr auto g2_io3 = stmcpp::register_field<iohcr_register, 6, 1>{1};

// 
constexpr auto g2_io2 = stmcpp::register_field<iohcr_register, 5, 1>{1};

// 
constexpr auto g2_io1 = stmcpp::register_field<iohcr_register, 4, 1>{1};

// 
constexpr auto g1_io4 = stmcpp::register_field<iohcr_register, 3, 1>{1};

// 
constexpr auto g1_io3 = stmcpp::register_field<iohcr_register, 2, 1>{1};

// 
constexpr auto g1_io2 = stmcpp::register_field<iohcr_register, 1, 1>{1};

// 
constexpr auto g1_io1 = stmcpp::register_field<iohcr_register, 0, 1>{1};



} // namespace iohcr_fields

constexpr auto iohcr = iohcr_register{};


// 
using ioascr_register = stmcpp::register_wrapper<0x40024018, 4, stmcpp::read_write_flag>;

namespace ioascr_fields
{

// 
constexpr auto g6_io4 = stmcpp::register_field<ioascr_register, 23, 1>{1};

// 
constexpr auto g6_io3 = stmcpp::register_field<ioascr_register, 22, 1>{1};

// 
constexpr auto g6_io2 = stmcpp::register_field<ioascr_register, 21, 1>{1};

// 
constexpr auto g6_io1 = stmcpp::register_field<ioascr_register, 20, 1>{1};

// 
constexpr auto g5_io4 = stmcpp::register_field<ioascr_register, 19, 1>{1};

// 
constexpr auto g5_io3 = stmcpp::register_field<ioascr_register, 18, 1>{1};

// 
constexpr auto g5_io2 = stmcpp::register_field<ioascr_register, 17, 1>{1};

// 
constexpr auto g5_io1 = stmcpp::register_field<ioascr_register, 16, 1>{1};

// 
constexpr auto g4_io4 = stmcpp::register_field<ioascr_register, 15, 1>{1};

// 
constexpr auto g4_io3 = stmcpp::register_field<ioascr_register, 14, 1>{1};

// 
constexpr auto g4_io2 = stmcpp::register_field<ioascr_register, 13, 1>{1};

// 
constexpr auto g4_io1 = stmcpp::register_field<ioascr_register, 12, 1>{1};

// 
constexpr auto g3_io4 = stmcpp::register_field<ioascr_register, 11, 1>{1};

// 
constexpr auto g3_io3 = stmcpp::register_field<ioascr_register, 10, 1>{1};

// 
constexpr auto g3_io2 = stmcpp::register_field<ioascr_register, 9, 1>{1};

// 
constexpr auto g3_io1 = stmcpp::register_field<ioascr_register, 8, 1>{1};

// 
constexpr auto g2_io4 = stmcpp::register_field<ioascr_register, 7, 1>{1};

// 
constexpr auto g2_io3 = stmcpp::register_field<ioascr_register, 6, 1>{1};

// 
constexpr auto g2_io2 = stmcpp::register_field<ioascr_register, 5, 1>{1};

// 
constexpr auto g2_io1 = stmcpp::register_field<ioascr_register, 4, 1>{1};

// 
constexpr auto g1_io4 = stmcpp::register_field<ioascr_register, 3, 1>{1};

// 
constexpr auto g1_io3 = stmcpp::register_field<ioascr_register, 2, 1>{1};

// 
constexpr auto g1_io2 = stmcpp::register_field<ioascr_register, 1, 1>{1};

// 
constexpr auto g1_io1 = stmcpp::register_field<ioascr_register, 0, 1>{1};



} // namespace ioascr_fields

constexpr auto ioascr = ioascr_register{};


// 
using ioscr_register = stmcpp::register_wrapper<0x40024020, 4, stmcpp::read_write_flag>;

namespace ioscr_fields
{

// 
constexpr auto g6_io4 = stmcpp::register_field<ioscr_register, 23, 1>{1};

// 
constexpr auto g6_io3 = stmcpp::register_field<ioscr_register, 22, 1>{1};

// 
constexpr auto g6_io2 = stmcpp::register_field<ioscr_register, 21, 1>{1};

// 
constexpr auto g6_io1 = stmcpp::register_field<ioscr_register, 20, 1>{1};

// 
constexpr auto g5_io4 = stmcpp::register_field<ioscr_register, 19, 1>{1};

// 
constexpr auto g5_io3 = stmcpp::register_field<ioscr_register, 18, 1>{1};

// 
constexpr auto g5_io2 = stmcpp::register_field<ioscr_register, 17, 1>{1};

// 
constexpr auto g5_io1 = stmcpp::register_field<ioscr_register, 16, 1>{1};

// 
constexpr auto g4_io4 = stmcpp::register_field<ioscr_register, 15, 1>{1};

// 
constexpr auto g4_io3 = stmcpp::register_field<ioscr_register, 14, 1>{1};

// 
constexpr auto g4_io2 = stmcpp::register_field<ioscr_register, 13, 1>{1};

// 
constexpr auto g4_io1 = stmcpp::register_field<ioscr_register, 12, 1>{1};

// 
constexpr auto g3_io4 = stmcpp::register_field<ioscr_register, 11, 1>{1};

// 
constexpr auto g3_io3 = stmcpp::register_field<ioscr_register, 10, 1>{1};

// 
constexpr auto g3_io2 = stmcpp::register_field<ioscr_register, 9, 1>{1};

// 
constexpr auto g3_io1 = stmcpp::register_field<ioscr_register, 8, 1>{1};

// 
constexpr auto g2_io4 = stmcpp::register_field<ioscr_register, 7, 1>{1};

// 
constexpr auto g2_io3 = stmcpp::register_field<ioscr_register, 6, 1>{1};

// 
constexpr auto g2_io2 = stmcpp::register_field<ioscr_register, 5, 1>{1};

// 
constexpr auto g2_io1 = stmcpp::register_field<ioscr_register, 4, 1>{1};

// 
constexpr auto g1_io4 = stmcpp::register_field<ioscr_register, 3, 1>{1};

// 
constexpr auto g1_io3 = stmcpp::register_field<ioscr_register, 2, 1>{1};

// 
constexpr auto g1_io2 = stmcpp::register_field<ioscr_register, 1, 1>{1};

// 
constexpr auto g1_io1 = stmcpp::register_field<ioscr_register, 0, 1>{1};



} // namespace ioscr_fields

constexpr auto ioscr = ioscr_register{};


// 
using ioccr_register = stmcpp::register_wrapper<0x40024028, 4, stmcpp::read_write_flag>;

namespace ioccr_fields
{

// 
constexpr auto g6_io4 = stmcpp::register_field<ioccr_register, 23, 1>{1};

// 
constexpr auto g6_io3 = stmcpp::register_field<ioccr_register, 22, 1>{1};

// 
constexpr auto g6_io2 = stmcpp::register_field<ioccr_register, 21, 1>{1};

// 
constexpr auto g6_io1 = stmcpp::register_field<ioccr_register, 20, 1>{1};

// 
constexpr auto g5_io4 = stmcpp::register_field<ioccr_register, 19, 1>{1};

// 
constexpr auto g5_io3 = stmcpp::register_field<ioccr_register, 18, 1>{1};

// 
constexpr auto g5_io2 = stmcpp::register_field<ioccr_register, 17, 1>{1};

// 
constexpr auto g5_io1 = stmcpp::register_field<ioccr_register, 16, 1>{1};

// 
constexpr auto g4_io4 = stmcpp::register_field<ioccr_register, 15, 1>{1};

// 
constexpr auto g4_io3 = stmcpp::register_field<ioccr_register, 14, 1>{1};

// 
constexpr auto g4_io2 = stmcpp::register_field<ioccr_register, 13, 1>{1};

// 
constexpr auto g4_io1 = stmcpp::register_field<ioccr_register, 12, 1>{1};

// 
constexpr auto g3_io4 = stmcpp::register_field<ioccr_register, 11, 1>{1};

// 
constexpr auto g3_io3 = stmcpp::register_field<ioccr_register, 10, 1>{1};

// 
constexpr auto g3_io2 = stmcpp::register_field<ioccr_register, 9, 1>{1};

// 
constexpr auto g3_io1 = stmcpp::register_field<ioccr_register, 8, 1>{1};

// 
constexpr auto g2_io4 = stmcpp::register_field<ioccr_register, 7, 1>{1};

// 
constexpr auto g2_io3 = stmcpp::register_field<ioccr_register, 6, 1>{1};

// 
constexpr auto g2_io2 = stmcpp::register_field<ioccr_register, 5, 1>{1};

// 
constexpr auto g2_io1 = stmcpp::register_field<ioccr_register, 4, 1>{1};

// 
constexpr auto g1_io4 = stmcpp::register_field<ioccr_register, 3, 1>{1};

// 
constexpr auto g1_io3 = stmcpp::register_field<ioccr_register, 2, 1>{1};

// 
constexpr auto g1_io2 = stmcpp::register_field<ioccr_register, 1, 1>{1};

// 
constexpr auto g1_io1 = stmcpp::register_field<ioccr_register, 0, 1>{1};



} // namespace ioccr_fields

constexpr auto ioccr = ioccr_register{};


// 
using iogcsr_register = stmcpp::register_wrapper<0x40024030, 4, readj-write>;

namespace iogcsr_fields
{

// 
constexpr auto g8s = stmcpp::register_field<iogcsr_register, 23, 1>{1};

// 
constexpr auto g7s = stmcpp::register_field<iogcsr_register, 22, 1>{1};

// 
constexpr auto g6s = stmcpp::register_field<iogcsr_register, 21, 1>{1};

// 
constexpr auto g5s = stmcpp::register_field<iogcsr_register, 20, 1>{1};

// 
constexpr auto g4s = stmcpp::register_field<iogcsr_register, 19, 1>{1};

// 
constexpr auto g3s = stmcpp::register_field<iogcsr_register, 18, 1>{1};

// 
constexpr auto g2s = stmcpp::register_field<iogcsr_register, 17, 1>{1};

// 
constexpr auto g1s = stmcpp::register_field<iogcsr_register, 16, 1>{1};

// 
constexpr auto g8e = stmcpp::register_field<iogcsr_register, 7, 1>{1};

// 
constexpr auto g7e = stmcpp::register_field<iogcsr_register, 6, 1>{1};

// 
constexpr auto g6e = stmcpp::register_field<iogcsr_register, 5, 1>{1};

// 
constexpr auto g5e = stmcpp::register_field<iogcsr_register, 4, 1>{1};

// 
constexpr auto g4e = stmcpp::register_field<iogcsr_register, 3, 1>{1};

// 
constexpr auto g3e = stmcpp::register_field<iogcsr_register, 2, 1>{1};

// 
constexpr auto g2e = stmcpp::register_field<iogcsr_register, 1, 1>{1};

// 
constexpr auto g1e = stmcpp::register_field<iogcsr_register, 0, 1>{1};



} // namespace iogcsr_fields

constexpr auto iogcsr = iogcsr_register{};


// 
using iog1cr_register = stmcpp::register_wrapper<0x40024034, 4, stmcpp::read_only_flag>;

namespace iog1cr_fields
{




} // namespace iog1cr_fields

constexpr auto iog1cr = iog1cr_register{};


// 
using iog2cr_register = stmcpp::register_wrapper<0x40024038, 4, stmcpp::read_only_flag>;

namespace iog2cr_fields
{




} // namespace iog2cr_fields

constexpr auto iog2cr = iog2cr_register{};


// 
using iog3cr_register = stmcpp::register_wrapper<0x4002403c, 4, stmcpp::read_only_flag>;

namespace iog3cr_fields
{




} // namespace iog3cr_fields

constexpr auto iog3cr = iog3cr_register{};


// 
using iog4cr_register = stmcpp::register_wrapper<0x40024040, 4, stmcpp::read_only_flag>;

namespace iog4cr_fields
{




} // namespace iog4cr_fields

constexpr auto iog4cr = iog4cr_register{};


// 
using iog5cr_register = stmcpp::register_wrapper<0x40024044, 4, stmcpp::read_only_flag>;

namespace iog5cr_fields
{




} // namespace iog5cr_fields

constexpr auto iog5cr = iog5cr_register{};


// 
using iog6cr_register = stmcpp::register_wrapper<0x40024048, 4, stmcpp::read_only_flag>;

namespace iog6cr_fields
{




} // namespace iog6cr_fields

constexpr auto iog6cr = iog6cr_register{};




} // namespace stmcpp::stm32f051::mtsc