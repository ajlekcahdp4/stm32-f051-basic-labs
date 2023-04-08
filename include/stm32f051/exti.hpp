
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

namespace stmcpp::stm32f051::mexti
{

// 
using imr_register = stmcpp::register_wrapper<0x40010400, 4, stmcpp::read_write_flag>;

namespace imr_fields
{

// 
constexpr auto mr0_masked = stmcpp::register_field<imr_register, 0, 1>{0};

// 
constexpr auto mr0_unmasked = stmcpp::register_field<imr_register, 0, 1>{1};

using mr0 = stmcpp::register_field<imr_register, 0, 1>;


// 
constexpr auto mr1 = stmcpp::register_field<imr_register, 1, 1>{1};

// 
constexpr auto mr2 = stmcpp::register_field<imr_register, 2, 1>{1};

// 
constexpr auto mr3 = stmcpp::register_field<imr_register, 3, 1>{1};

// 
constexpr auto mr4 = stmcpp::register_field<imr_register, 4, 1>{1};

// 
constexpr auto mr5 = stmcpp::register_field<imr_register, 5, 1>{1};

// 
constexpr auto mr6 = stmcpp::register_field<imr_register, 6, 1>{1};

// 
constexpr auto mr7 = stmcpp::register_field<imr_register, 7, 1>{1};

// 
constexpr auto mr8 = stmcpp::register_field<imr_register, 8, 1>{1};

// 
constexpr auto mr9 = stmcpp::register_field<imr_register, 9, 1>{1};

// 
constexpr auto mr10 = stmcpp::register_field<imr_register, 10, 1>{1};

// 
constexpr auto mr11 = stmcpp::register_field<imr_register, 11, 1>{1};

// 
constexpr auto mr12 = stmcpp::register_field<imr_register, 12, 1>{1};

// 
constexpr auto mr13 = stmcpp::register_field<imr_register, 13, 1>{1};

// 
constexpr auto mr14 = stmcpp::register_field<imr_register, 14, 1>{1};

// 
constexpr auto mr15 = stmcpp::register_field<imr_register, 15, 1>{1};

// 
constexpr auto mr16 = stmcpp::register_field<imr_register, 16, 1>{1};

// 
constexpr auto mr17 = stmcpp::register_field<imr_register, 17, 1>{1};

// 
constexpr auto mr18 = stmcpp::register_field<imr_register, 18, 1>{1};

// 
constexpr auto mr19 = stmcpp::register_field<imr_register, 19, 1>{1};

// 
constexpr auto mr20 = stmcpp::register_field<imr_register, 20, 1>{1};

// 
constexpr auto mr21 = stmcpp::register_field<imr_register, 21, 1>{1};

// 
constexpr auto mr22 = stmcpp::register_field<imr_register, 22, 1>{1};

// 
constexpr auto mr23 = stmcpp::register_field<imr_register, 23, 1>{1};

// 
constexpr auto mr24 = stmcpp::register_field<imr_register, 24, 1>{1};

// 
constexpr auto mr25 = stmcpp::register_field<imr_register, 25, 1>{1};

// 
constexpr auto mr26 = stmcpp::register_field<imr_register, 26, 1>{1};

// 
constexpr auto mr27 = stmcpp::register_field<imr_register, 27, 1>{1};



} // namespace imr_fields

constexpr auto imr = imr_register{};


// 
using emr_register = stmcpp::register_wrapper<0x40010404, 4, stmcpp::read_write_flag>;

namespace emr_fields
{

// 
constexpr auto mr0_masked = stmcpp::register_field<emr_register, 0, 1>{0};

// 
constexpr auto mr0_unmasked = stmcpp::register_field<emr_register, 0, 1>{1};

using mr0 = stmcpp::register_field<emr_register, 0, 1>;


// 
constexpr auto mr1 = stmcpp::register_field<emr_register, 1, 1>{1};

// 
constexpr auto mr2 = stmcpp::register_field<emr_register, 2, 1>{1};

// 
constexpr auto mr3 = stmcpp::register_field<emr_register, 3, 1>{1};

// 
constexpr auto mr4 = stmcpp::register_field<emr_register, 4, 1>{1};

// 
constexpr auto mr5 = stmcpp::register_field<emr_register, 5, 1>{1};

// 
constexpr auto mr6 = stmcpp::register_field<emr_register, 6, 1>{1};

// 
constexpr auto mr7 = stmcpp::register_field<emr_register, 7, 1>{1};

// 
constexpr auto mr8 = stmcpp::register_field<emr_register, 8, 1>{1};

// 
constexpr auto mr9 = stmcpp::register_field<emr_register, 9, 1>{1};

// 
constexpr auto mr10 = stmcpp::register_field<emr_register, 10, 1>{1};

// 
constexpr auto mr11 = stmcpp::register_field<emr_register, 11, 1>{1};

// 
constexpr auto mr12 = stmcpp::register_field<emr_register, 12, 1>{1};

// 
constexpr auto mr13 = stmcpp::register_field<emr_register, 13, 1>{1};

// 
constexpr auto mr14 = stmcpp::register_field<emr_register, 14, 1>{1};

// 
constexpr auto mr15 = stmcpp::register_field<emr_register, 15, 1>{1};

// 
constexpr auto mr16 = stmcpp::register_field<emr_register, 16, 1>{1};

// 
constexpr auto mr17 = stmcpp::register_field<emr_register, 17, 1>{1};

// 
constexpr auto mr18 = stmcpp::register_field<emr_register, 18, 1>{1};

// 
constexpr auto mr19 = stmcpp::register_field<emr_register, 19, 1>{1};

// 
constexpr auto mr20 = stmcpp::register_field<emr_register, 20, 1>{1};

// 
constexpr auto mr21 = stmcpp::register_field<emr_register, 21, 1>{1};

// 
constexpr auto mr22 = stmcpp::register_field<emr_register, 22, 1>{1};

// 
constexpr auto mr23 = stmcpp::register_field<emr_register, 23, 1>{1};

// 
constexpr auto mr24 = stmcpp::register_field<emr_register, 24, 1>{1};

// 
constexpr auto mr25 = stmcpp::register_field<emr_register, 25, 1>{1};

// 
constexpr auto mr26 = stmcpp::register_field<emr_register, 26, 1>{1};

// 
constexpr auto mr27 = stmcpp::register_field<emr_register, 27, 1>{1};



} // namespace emr_fields

constexpr auto emr = emr_register{};


// 
using rtsr_register = stmcpp::register_wrapper<0x40010408, 4, stmcpp::read_write_flag>;

namespace rtsr_fields
{

// 
constexpr auto tr0_disabled = stmcpp::register_field<rtsr_register, 0, 1>{0};

// 
constexpr auto tr0_enabled = stmcpp::register_field<rtsr_register, 0, 1>{1};

using tr0 = stmcpp::register_field<rtsr_register, 0, 1>;


// 
constexpr auto tr1 = stmcpp::register_field<rtsr_register, 1, 1>{1};

// 
constexpr auto tr2 = stmcpp::register_field<rtsr_register, 2, 1>{1};

// 
constexpr auto tr3 = stmcpp::register_field<rtsr_register, 3, 1>{1};

// 
constexpr auto tr4 = stmcpp::register_field<rtsr_register, 4, 1>{1};

// 
constexpr auto tr5 = stmcpp::register_field<rtsr_register, 5, 1>{1};

// 
constexpr auto tr6 = stmcpp::register_field<rtsr_register, 6, 1>{1};

// 
constexpr auto tr7 = stmcpp::register_field<rtsr_register, 7, 1>{1};

// 
constexpr auto tr8 = stmcpp::register_field<rtsr_register, 8, 1>{1};

// 
constexpr auto tr9 = stmcpp::register_field<rtsr_register, 9, 1>{1};

// 
constexpr auto tr10 = stmcpp::register_field<rtsr_register, 10, 1>{1};

// 
constexpr auto tr11 = stmcpp::register_field<rtsr_register, 11, 1>{1};

// 
constexpr auto tr12 = stmcpp::register_field<rtsr_register, 12, 1>{1};

// 
constexpr auto tr13 = stmcpp::register_field<rtsr_register, 13, 1>{1};

// 
constexpr auto tr14 = stmcpp::register_field<rtsr_register, 14, 1>{1};

// 
constexpr auto tr15 = stmcpp::register_field<rtsr_register, 15, 1>{1};

// 
constexpr auto tr16 = stmcpp::register_field<rtsr_register, 16, 1>{1};

// 
constexpr auto tr17 = stmcpp::register_field<rtsr_register, 17, 1>{1};

// 
constexpr auto tr19 = stmcpp::register_field<rtsr_register, 19, 1>{1};



} // namespace rtsr_fields

constexpr auto rtsr = rtsr_register{};


// 
using ftsr_register = stmcpp::register_wrapper<0x4001040c, 4, stmcpp::read_write_flag>;

namespace ftsr_fields
{

// 
constexpr auto tr0_disabled = stmcpp::register_field<ftsr_register, 0, 1>{0};

// 
constexpr auto tr0_enabled = stmcpp::register_field<ftsr_register, 0, 1>{1};

using tr0 = stmcpp::register_field<ftsr_register, 0, 1>;


// 
constexpr auto tr1 = stmcpp::register_field<ftsr_register, 1, 1>{1};

// 
constexpr auto tr2 = stmcpp::register_field<ftsr_register, 2, 1>{1};

// 
constexpr auto tr3 = stmcpp::register_field<ftsr_register, 3, 1>{1};

// 
constexpr auto tr4 = stmcpp::register_field<ftsr_register, 4, 1>{1};

// 
constexpr auto tr5 = stmcpp::register_field<ftsr_register, 5, 1>{1};

// 
constexpr auto tr6 = stmcpp::register_field<ftsr_register, 6, 1>{1};

// 
constexpr auto tr7 = stmcpp::register_field<ftsr_register, 7, 1>{1};

// 
constexpr auto tr8 = stmcpp::register_field<ftsr_register, 8, 1>{1};

// 
constexpr auto tr9 = stmcpp::register_field<ftsr_register, 9, 1>{1};

// 
constexpr auto tr10 = stmcpp::register_field<ftsr_register, 10, 1>{1};

// 
constexpr auto tr11 = stmcpp::register_field<ftsr_register, 11, 1>{1};

// 
constexpr auto tr12 = stmcpp::register_field<ftsr_register, 12, 1>{1};

// 
constexpr auto tr13 = stmcpp::register_field<ftsr_register, 13, 1>{1};

// 
constexpr auto tr14 = stmcpp::register_field<ftsr_register, 14, 1>{1};

// 
constexpr auto tr15 = stmcpp::register_field<ftsr_register, 15, 1>{1};

// 
constexpr auto tr16 = stmcpp::register_field<ftsr_register, 16, 1>{1};

// 
constexpr auto tr17 = stmcpp::register_field<ftsr_register, 17, 1>{1};

// 
constexpr auto tr19 = stmcpp::register_field<ftsr_register, 19, 1>{1};



} // namespace ftsr_fields

constexpr auto ftsr = ftsr_register{};


// 
using swier_register = stmcpp::register_wrapper<0x40010410, 4, stmcpp::read_write_flag>;

namespace swier_fields
{

// 
constexpr auto swier0_pend = stmcpp::register_field<swier_register, 0, 1>{1};

using swier0 = stmcpp::register_field<swier_register, 0, 1>;


// 
constexpr auto swier1 = stmcpp::register_field<swier_register, 1, 1>{1};

// 
constexpr auto swier2 = stmcpp::register_field<swier_register, 2, 1>{1};

// 
constexpr auto swier3 = stmcpp::register_field<swier_register, 3, 1>{1};

// 
constexpr auto swier4 = stmcpp::register_field<swier_register, 4, 1>{1};

// 
constexpr auto swier5 = stmcpp::register_field<swier_register, 5, 1>{1};

// 
constexpr auto swier6 = stmcpp::register_field<swier_register, 6, 1>{1};

// 
constexpr auto swier7 = stmcpp::register_field<swier_register, 7, 1>{1};

// 
constexpr auto swier8 = stmcpp::register_field<swier_register, 8, 1>{1};

// 
constexpr auto swier9 = stmcpp::register_field<swier_register, 9, 1>{1};

// 
constexpr auto swier10 = stmcpp::register_field<swier_register, 10, 1>{1};

// 
constexpr auto swier11 = stmcpp::register_field<swier_register, 11, 1>{1};

// 
constexpr auto swier12 = stmcpp::register_field<swier_register, 12, 1>{1};

// 
constexpr auto swier13 = stmcpp::register_field<swier_register, 13, 1>{1};

// 
constexpr auto swier14 = stmcpp::register_field<swier_register, 14, 1>{1};

// 
constexpr auto swier15 = stmcpp::register_field<swier_register, 15, 1>{1};

// 
constexpr auto swier16 = stmcpp::register_field<swier_register, 16, 1>{1};

// 
constexpr auto swier17 = stmcpp::register_field<swier_register, 17, 1>{1};

// 
constexpr auto swier19 = stmcpp::register_field<swier_register, 19, 1>{1};



} // namespace swier_fields

constexpr auto swier = swier_register{};


// 
using pr_register = stmcpp::register_wrapper<0x40010414, 4, stmcpp::read_write_flag>;

namespace pr_fields
{

// 
constexpr auto pr0_notpending = stmcpp::register_field<pr_register, 0, 1>{0};

// 
constexpr auto pr0_pending = stmcpp::register_field<pr_register, 0, 1>{1};

// 
constexpr auto pr0_clear = stmcpp::register_field<pr_register, 0, 1>{1};

using pr0 = stmcpp::register_field<pr_register, 0, 1>;


// 
constexpr auto pr1 = stmcpp::register_field<pr_register, 1, 1>{1};

// 
constexpr auto pr2 = stmcpp::register_field<pr_register, 2, 1>{1};

// 
constexpr auto pr3 = stmcpp::register_field<pr_register, 3, 1>{1};

// 
constexpr auto pr4 = stmcpp::register_field<pr_register, 4, 1>{1};

// 
constexpr auto pr5 = stmcpp::register_field<pr_register, 5, 1>{1};

// 
constexpr auto pr6 = stmcpp::register_field<pr_register, 6, 1>{1};

// 
constexpr auto pr7 = stmcpp::register_field<pr_register, 7, 1>{1};

// 
constexpr auto pr8 = stmcpp::register_field<pr_register, 8, 1>{1};

// 
constexpr auto pr9 = stmcpp::register_field<pr_register, 9, 1>{1};

// 
constexpr auto pr10 = stmcpp::register_field<pr_register, 10, 1>{1};

// 
constexpr auto pr11 = stmcpp::register_field<pr_register, 11, 1>{1};

// 
constexpr auto pr12 = stmcpp::register_field<pr_register, 12, 1>{1};

// 
constexpr auto pr13 = stmcpp::register_field<pr_register, 13, 1>{1};

// 
constexpr auto pr14 = stmcpp::register_field<pr_register, 14, 1>{1};

// 
constexpr auto pr15 = stmcpp::register_field<pr_register, 15, 1>{1};

// 
constexpr auto pr16 = stmcpp::register_field<pr_register, 16, 1>{1};

// 
constexpr auto pr17 = stmcpp::register_field<pr_register, 17, 1>{1};

// 
constexpr auto pr19 = stmcpp::register_field<pr_register, 19, 1>{1};



} // namespace pr_fields

constexpr auto pr = pr_register{};




} // namespace stmcpp::stm32f051::mexti