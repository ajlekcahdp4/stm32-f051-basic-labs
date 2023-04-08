
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

namespace stmcpp::stm32f051::mflash
{

// 
using acr_register = stmcpp::register_wrapper<0x40022000, 4, readj-write>;

namespace acr_fields
{

// 
constexpr auto latency_ws0 = stmcpp::register_field<acr_register, 0, 3>{0};

// 
constexpr auto latency_ws1 = stmcpp::register_field<acr_register, 0, 3>{1};

using latency = stmcpp::register_field<acr_register, 0, 3>;


// 
constexpr auto prftbe_disabled = stmcpp::register_field<acr_register, 4, 1>{0};

// 
constexpr auto prftbe_enabled = stmcpp::register_field<acr_register, 4, 1>{1};

using prftbe = stmcpp::register_field<acr_register, 4, 1>;


// 
constexpr auto prftbs_disabled = stmcpp::register_field<acr_register, 5, 1>{0};

// 
constexpr auto prftbs_enabled = stmcpp::register_field<acr_register, 5, 1>{1};

using prftbs = stmcpp::register_field<acr_register, 5, 1>;




} // namespace acr_fields

constexpr auto acr = acr_register{};


// 
using keyr_register = stmcpp::register_wrapper<0x40022004, 4, stmcpp::write_only_flag>;

namespace keyr_fields
{




} // namespace keyr_fields

constexpr auto keyr = keyr_register{};


// 
using optkeyr_register = stmcpp::register_wrapper<0x40022008, 4, stmcpp::write_only_flag>;

namespace optkeyr_fields
{




} // namespace optkeyr_fields

constexpr auto optkeyr = optkeyr_register{};


// 
using sr_register = stmcpp::register_wrapper<0x4002200c, 4, readj-write>;

namespace sr_fields
{

// 
constexpr auto eop_noevent = stmcpp::register_field<sr_register, 5, 1>{0};

// 
constexpr auto eop_event = stmcpp::register_field<sr_register, 5, 1>{1};

using eop = stmcpp::register_field<sr_register, 5, 1>;


// 
constexpr auto wrprt_noerror = stmcpp::register_field<sr_register, 4, 1>{0};

// 
constexpr auto wrprt_error = stmcpp::register_field<sr_register, 4, 1>{1};

using wrprt = stmcpp::register_field<sr_register, 4, 1>;


// 
constexpr auto pgerr_noerror = stmcpp::register_field<sr_register, 2, 1>{0};

// 
constexpr auto pgerr_error = stmcpp::register_field<sr_register, 2, 1>{1};

using pgerr = stmcpp::register_field<sr_register, 2, 1>;


// 
constexpr auto bsy_inactive = stmcpp::register_field<sr_register, 0, 1>{0};

// 
constexpr auto bsy_active = stmcpp::register_field<sr_register, 0, 1>{1};

using bsy = stmcpp::register_field<sr_register, 0, 1>;




} // namespace sr_fields

constexpr auto sr = sr_register{};


// 
using cr_register = stmcpp::register_wrapper<0x40022010, 4, stmcpp::read_write_flag>;

namespace cr_fields
{

// 
constexpr auto force_optload_inactive = stmcpp::register_field<cr_register, 13, 1>{0};

// 
constexpr auto force_optload_active = stmcpp::register_field<cr_register, 13, 1>{1};

using force_optload = stmcpp::register_field<cr_register, 13, 1>;


// 
constexpr auto eopie_disabled = stmcpp::register_field<cr_register, 12, 1>{0};

// 
constexpr auto eopie_enabled = stmcpp::register_field<cr_register, 12, 1>{1};

using eopie = stmcpp::register_field<cr_register, 12, 1>;


// 
constexpr auto errie_disabled = stmcpp::register_field<cr_register, 10, 1>{0};

// 
constexpr auto errie_enabled = stmcpp::register_field<cr_register, 10, 1>{1};

using errie = stmcpp::register_field<cr_register, 10, 1>;


// 
constexpr auto optwre_disabled = stmcpp::register_field<cr_register, 9, 1>{0};

// 
constexpr auto optwre_enabled = stmcpp::register_field<cr_register, 9, 1>{1};

using optwre = stmcpp::register_field<cr_register, 9, 1>;


// 
constexpr auto lock_unlocked = stmcpp::register_field<cr_register, 7, 1>{0};

// 
constexpr auto lock_locked = stmcpp::register_field<cr_register, 7, 1>{1};

using lock = stmcpp::register_field<cr_register, 7, 1>;


// 
constexpr auto strt_start = stmcpp::register_field<cr_register, 6, 1>{1};

using strt = stmcpp::register_field<cr_register, 6, 1>;


// 
constexpr auto opter_optionbyteerase = stmcpp::register_field<cr_register, 5, 1>{1};

using opter = stmcpp::register_field<cr_register, 5, 1>;


// 
constexpr auto optpg_optionbyteprogramming = stmcpp::register_field<cr_register, 4, 1>{1};

using optpg = stmcpp::register_field<cr_register, 4, 1>;


// 
constexpr auto mer_masserase = stmcpp::register_field<cr_register, 2, 1>{1};

using mer = stmcpp::register_field<cr_register, 2, 1>;


// 
constexpr auto per_pageerase = stmcpp::register_field<cr_register, 1, 1>{1};

using per = stmcpp::register_field<cr_register, 1, 1>;


// 
constexpr auto pg_program = stmcpp::register_field<cr_register, 0, 1>{1};

using pg = stmcpp::register_field<cr_register, 0, 1>;




} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using ar_register = stmcpp::register_wrapper<0x40022014, 4, stmcpp::write_only_flag>;

namespace ar_fields
{




} // namespace ar_fields

constexpr auto ar = ar_register{};


// 
using obr_register = stmcpp::register_wrapper<0x4002201c, 4, stmcpp::read_only_flag>;

namespace obr_fields
{

// 
constexpr auto opterr_optionbyteerror = stmcpp::register_field<obr_register, 0, 1>{1};

using opterr = stmcpp::register_field<obr_register, 0, 1>;


// 
constexpr auto rdprt_level0 = stmcpp::register_field<obr_register, 1, 2>{0};

// 
constexpr auto rdprt_level1 = stmcpp::register_field<obr_register, 1, 2>{1};

// 
constexpr auto rdprt_level2 = stmcpp::register_field<obr_register, 1, 2>{3};

using rdprt = stmcpp::register_field<obr_register, 1, 2>;


// 
constexpr auto wdg_sw_hardware = stmcpp::register_field<obr_register, 8, 1>{0};

// 
constexpr auto wdg_sw_software = stmcpp::register_field<obr_register, 8, 1>{1};

using wdg_sw = stmcpp::register_field<obr_register, 8, 1>;


// 
constexpr auto nrst_stop_reset = stmcpp::register_field<obr_register, 9, 1>{0};

// 
constexpr auto nrst_stop_noreset = stmcpp::register_field<obr_register, 9, 1>{1};

using nrst_stop = stmcpp::register_field<obr_register, 9, 1>;


// 
constexpr auto nrst_stdby_reset = stmcpp::register_field<obr_register, 10, 1>{0};

// 
constexpr auto nrst_stdby_noreset = stmcpp::register_field<obr_register, 10, 1>{1};

using nrst_stdby = stmcpp::register_field<obr_register, 10, 1>;


// 
constexpr auto nboot0_disabled = stmcpp::register_field<obr_register, 11, 1>{0};

// 
constexpr auto nboot0_enabled = stmcpp::register_field<obr_register, 11, 1>{1};

using nboot0 = stmcpp::register_field<obr_register, 11, 1>;


// 
constexpr auto nboot1_disabled = stmcpp::register_field<obr_register, 12, 1>{0};

// 
constexpr auto nboot1_enabled = stmcpp::register_field<obr_register, 12, 1>{1};

using nboot1 = stmcpp::register_field<obr_register, 12, 1>;


// 
constexpr auto vdda_monitor_disabled = stmcpp::register_field<obr_register, 13, 1>{0};

// 
constexpr auto vdda_monitor_enabled = stmcpp::register_field<obr_register, 13, 1>{1};

using vdda_monitor = stmcpp::register_field<obr_register, 13, 1>;


// 
constexpr auto ram_parity_check_disabled = stmcpp::register_field<obr_register, 14, 1>{1};

// 
constexpr auto ram_parity_check_enabled = stmcpp::register_field<obr_register, 14, 1>{0};

using ram_parity_check = stmcpp::register_field<obr_register, 14, 1>;


// 
constexpr auto boot_sel_nboot0 = stmcpp::register_field<obr_register, 15, 1>{0};

// 
constexpr auto boot_sel_boot0 = stmcpp::register_field<obr_register, 15, 1>{1};

using boot_sel = stmcpp::register_field<obr_register, 15, 1>;






} // namespace obr_fields

constexpr auto obr = obr_register{};


// 
using wrpr_register = stmcpp::register_wrapper<0x40022020, 4, stmcpp::read_only_flag>;

namespace wrpr_fields
{




} // namespace wrpr_fields

constexpr auto wrpr = wrpr_register{};




} // namespace stmcpp::stm32f051::mflash