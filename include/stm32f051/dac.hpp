
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

namespace stmcpp::stm32f051::mdac
{

// 
using cr_register = stmcpp::register_wrapper<0x40007400, 4, stmcpp::read_write_flag>;

namespace cr_fields
{

// 
constexpr auto en1_disabled = stmcpp::register_field<cr_register, 0, 1>{0};

// 
constexpr auto en1_enabled = stmcpp::register_field<cr_register, 0, 1>{1};

using en1 = stmcpp::register_field<cr_register, 0, 1>;


// 
constexpr auto boff1_enabled = stmcpp::register_field<cr_register, 1, 1>{0};

// 
constexpr auto boff1_disabled = stmcpp::register_field<cr_register, 1, 1>{1};

using boff1 = stmcpp::register_field<cr_register, 1, 1>;


// 
constexpr auto ten1_disabled = stmcpp::register_field<cr_register, 2, 1>{0};

// 
constexpr auto ten1_enabled = stmcpp::register_field<cr_register, 2, 1>{1};

using ten1 = stmcpp::register_field<cr_register, 2, 1>;


// 
constexpr auto tsel1_tim6_trgo = stmcpp::register_field<cr_register, 3, 3>{0};

// 
constexpr auto tsel1_tim3_trgo = stmcpp::register_field<cr_register, 3, 3>{1};

// 
constexpr auto tsel1_tim7_trgo = stmcpp::register_field<cr_register, 3, 3>{2};

// 
constexpr auto tsel1_tim15_trgo = stmcpp::register_field<cr_register, 3, 3>{3};

// 
constexpr auto tsel1_tim2_trgo = stmcpp::register_field<cr_register, 3, 3>{4};

// 
constexpr auto tsel1_exti9 = stmcpp::register_field<cr_register, 3, 3>{6};

// 
constexpr auto tsel1_software = stmcpp::register_field<cr_register, 3, 3>{7};

using tsel1 = stmcpp::register_field<cr_register, 3, 3>;


// 
constexpr auto wave1_disabled = stmcpp::register_field<cr_register, 6, 2>{0};

// 
constexpr auto wave1_noise = stmcpp::register_field<cr_register, 6, 2>{1};

// 
constexpr auto wave1_triangle = stmcpp::register_field<cr_register, 6, 2>{2};

using wave1 = stmcpp::register_field<cr_register, 6, 2>;



// 
constexpr auto dmaen1_disabled = stmcpp::register_field<cr_register, 12, 1>{0};

// 
constexpr auto dmaen1_enabled = stmcpp::register_field<cr_register, 12, 1>{1};

using dmaen1 = stmcpp::register_field<cr_register, 12, 1>;


// 
constexpr auto dmaudrie1_disabled = stmcpp::register_field<cr_register, 13, 1>{0};

// 
constexpr auto dmaudrie1_enabled = stmcpp::register_field<cr_register, 13, 1>{1};

using dmaudrie1 = stmcpp::register_field<cr_register, 13, 1>;


// 
constexpr auto en2 = stmcpp::register_field<cr_register, 16, 1>{1};

// 
constexpr auto boff2 = stmcpp::register_field<cr_register, 17, 1>{1};

// 
constexpr auto ten2 = stmcpp::register_field<cr_register, 18, 1>{1};

// 
constexpr auto tsel2_tim6_trgo = stmcpp::register_field<cr_register, 19, 3>{0};

// 
constexpr auto tsel2_tim8_trgo = stmcpp::register_field<cr_register, 19, 3>{1};

// 
constexpr auto tsel2_tim7_trgo = stmcpp::register_field<cr_register, 19, 3>{2};

// 
constexpr auto tsel2_tim5_trgo = stmcpp::register_field<cr_register, 19, 3>{3};

// 
constexpr auto tsel2_tim2_trgo = stmcpp::register_field<cr_register, 19, 3>{4};

// 
constexpr auto tsel2_tim4_trgo = stmcpp::register_field<cr_register, 19, 3>{5};

// 
constexpr auto tsel2_exti9 = stmcpp::register_field<cr_register, 19, 3>{6};

// 
constexpr auto tsel2_software = stmcpp::register_field<cr_register, 19, 3>{7};

using tsel2 = stmcpp::register_field<cr_register, 19, 3>;


// 
constexpr auto wave2_disabled = stmcpp::register_field<cr_register, 22, 2>{0};

// 
constexpr auto wave2_noise = stmcpp::register_field<cr_register, 22, 2>{1};

// 
constexpr auto wave2_triangle = stmcpp::register_field<cr_register, 22, 2>{2};

using wave2 = stmcpp::register_field<cr_register, 22, 2>;



// 
constexpr auto dmaen2 = stmcpp::register_field<cr_register, 28, 1>{1};

// 
constexpr auto dmaudrie2 = stmcpp::register_field<cr_register, 29, 1>{1};



} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using swtrigr_register = stmcpp::register_wrapper<0x40007404, 4, stmcpp::write_only_flag>;

namespace swtrigr_fields
{

// 
constexpr auto swtrig1_disabled = stmcpp::register_field<swtrigr_register, 0, 1>{0};

// 
constexpr auto swtrig1_enabled = stmcpp::register_field<swtrigr_register, 0, 1>{1};

using swtrig1 = stmcpp::register_field<swtrigr_register, 0, 1>;


// 
constexpr auto swtrig2 = stmcpp::register_field<swtrigr_register, 1, 1>{1};



} // namespace swtrigr_fields

constexpr auto swtrigr = swtrigr_register{};


// 
using dhr12r1_register = stmcpp::register_wrapper<0x40007408, 4, stmcpp::read_write_flag>;

namespace dhr12r1_fields
{




} // namespace dhr12r1_fields

constexpr auto dhr12r1 = dhr12r1_register{};


// 
using dhr12l1_register = stmcpp::register_wrapper<0x4000740c, 4, stmcpp::read_write_flag>;

namespace dhr12l1_fields
{




} // namespace dhr12l1_fields

constexpr auto dhr12l1 = dhr12l1_register{};


// 
using dhr8r1_register = stmcpp::register_wrapper<0x40007410, 4, stmcpp::read_write_flag>;

namespace dhr8r1_fields
{




} // namespace dhr8r1_fields

constexpr auto dhr8r1 = dhr8r1_register{};


// 
using dor1_register = stmcpp::register_wrapper<0x4000742c, 4, stmcpp::read_only_flag>;

namespace dor1_fields
{




} // namespace dor1_fields

constexpr auto dor1 = dor1_register{};


// 
using sr_register = stmcpp::register_wrapper<0x40007434, 4, stmcpp::read_write_flag>;

namespace sr_fields
{

// 
constexpr auto dmaudr2 = stmcpp::register_field<sr_register, 29, 1>{1};

// 
constexpr auto dmaudr1_nounderrun = stmcpp::register_field<sr_register, 13, 1>{0};

// 
constexpr auto dmaudr1_underrun = stmcpp::register_field<sr_register, 13, 1>{1};

using dmaudr1 = stmcpp::register_field<sr_register, 13, 1>;




} // namespace sr_fields

constexpr auto sr = sr_register{};


// 
using dhr12r2_register = stmcpp::register_wrapper<0x40007414, 4, stmcpp::read_write_flag>;

namespace dhr12r2_fields
{




} // namespace dhr12r2_fields

constexpr auto dhr12r2 = dhr12r2_register{};


// 
using dhr12l2_register = stmcpp::register_wrapper<0x40007418, 4, stmcpp::read_write_flag>;

namespace dhr12l2_fields
{




} // namespace dhr12l2_fields

constexpr auto dhr12l2 = dhr12l2_register{};


// 
using dhr8r2_register = stmcpp::register_wrapper<0x4000741c, 4, stmcpp::read_write_flag>;

namespace dhr8r2_fields
{




} // namespace dhr8r2_fields

constexpr auto dhr8r2 = dhr8r2_register{};


// 
using dhr12rd_register = stmcpp::register_wrapper<0x40007420, 4, stmcpp::read_write_flag>;

namespace dhr12rd_fields
{





} // namespace dhr12rd_fields

constexpr auto dhr12rd = dhr12rd_register{};


// 
using dhr12ld_register = stmcpp::register_wrapper<0x40007424, 4, stmcpp::read_write_flag>;

namespace dhr12ld_fields
{





} // namespace dhr12ld_fields

constexpr auto dhr12ld = dhr12ld_register{};


// 
using dhr8rd_register = stmcpp::register_wrapper<0x40007428, 4, stmcpp::read_write_flag>;

namespace dhr8rd_fields
{





} // namespace dhr8rd_fields

constexpr auto dhr8rd = dhr8rd_register{};


// 
using dor2_register = stmcpp::register_wrapper<0x40007430, 4, stmcpp::read_only_flag>;

namespace dor2_fields
{




} // namespace dor2_fields

constexpr auto dor2 = dor2_register{};




} // namespace stmcpp::stm32f051::mdac