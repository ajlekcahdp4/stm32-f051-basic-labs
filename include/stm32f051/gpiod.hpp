
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

namespace stmcpp::stm32f051::mgpiod
{

// 
using moder_register = stmcpp::register_wrapper<0x48000c00, 4, stmcpp::read_write_flag>;

namespace moder_fields
{
















// 
constexpr auto moder0_input = stmcpp::register_field<moder_register, 0, 2>{0};

// 
constexpr auto moder0_output = stmcpp::register_field<moder_register, 0, 2>{1};

// 
constexpr auto moder0_alternate = stmcpp::register_field<moder_register, 0, 2>{2};

// 
constexpr auto moder0_analog = stmcpp::register_field<moder_register, 0, 2>{3};

using moder0 = stmcpp::register_field<moder_register, 0, 2>;




} // namespace moder_fields

constexpr auto moder = moder_register{};


// 
using otyper_register = stmcpp::register_wrapper<0x48000c04, 4, stmcpp::read_write_flag>;

namespace otyper_fields
{

// 
constexpr auto ot15 = stmcpp::register_field<otyper_register, 15, 1>{1};

// 
constexpr auto ot14 = stmcpp::register_field<otyper_register, 14, 1>{1};

// 
constexpr auto ot13 = stmcpp::register_field<otyper_register, 13, 1>{1};

// 
constexpr auto ot12 = stmcpp::register_field<otyper_register, 12, 1>{1};

// 
constexpr auto ot11 = stmcpp::register_field<otyper_register, 11, 1>{1};

// 
constexpr auto ot10 = stmcpp::register_field<otyper_register, 10, 1>{1};

// 
constexpr auto ot9 = stmcpp::register_field<otyper_register, 9, 1>{1};

// 
constexpr auto ot8 = stmcpp::register_field<otyper_register, 8, 1>{1};

// 
constexpr auto ot7 = stmcpp::register_field<otyper_register, 7, 1>{1};

// 
constexpr auto ot6 = stmcpp::register_field<otyper_register, 6, 1>{1};

// 
constexpr auto ot5 = stmcpp::register_field<otyper_register, 5, 1>{1};

// 
constexpr auto ot4 = stmcpp::register_field<otyper_register, 4, 1>{1};

// 
constexpr auto ot3 = stmcpp::register_field<otyper_register, 3, 1>{1};

// 
constexpr auto ot2 = stmcpp::register_field<otyper_register, 2, 1>{1};

// 
constexpr auto ot1 = stmcpp::register_field<otyper_register, 1, 1>{1};

// 
constexpr auto ot0_pushpull = stmcpp::register_field<otyper_register, 0, 1>{0};

// 
constexpr auto ot0_opendrain = stmcpp::register_field<otyper_register, 0, 1>{1};

using ot0 = stmcpp::register_field<otyper_register, 0, 1>;




} // namespace otyper_fields

constexpr auto otyper = otyper_register{};


// 
using ospeedr_register = stmcpp::register_wrapper<0x48000c08, 4, stmcpp::read_write_flag>;

namespace ospeedr_fields
{
















// 
constexpr auto ospeedr0_lowspeed = stmcpp::register_field<ospeedr_register, 0, 2>{0};

// 
constexpr auto ospeedr0_mediumspeed = stmcpp::register_field<ospeedr_register, 0, 2>{1};

// 
constexpr auto ospeedr0_highspeed = stmcpp::register_field<ospeedr_register, 0, 2>{2};

// 
constexpr auto ospeedr0_veryhighspeed = stmcpp::register_field<ospeedr_register, 0, 2>{3};

using ospeedr0 = stmcpp::register_field<ospeedr_register, 0, 2>;




} // namespace ospeedr_fields

constexpr auto ospeedr = ospeedr_register{};


// 
using pupdr_register = stmcpp::register_wrapper<0x48000c0c, 4, stmcpp::read_write_flag>;

namespace pupdr_fields
{
















// 
constexpr auto pupdr0_floating = stmcpp::register_field<pupdr_register, 0, 2>{0};

// 
constexpr auto pupdr0_pullup = stmcpp::register_field<pupdr_register, 0, 2>{1};

// 
constexpr auto pupdr0_pulldown = stmcpp::register_field<pupdr_register, 0, 2>{2};

using pupdr0 = stmcpp::register_field<pupdr_register, 0, 2>;




} // namespace pupdr_fields

constexpr auto pupdr = pupdr_register{};


// 
using idr_register = stmcpp::register_wrapper<0x48000c10, 4, stmcpp::read_only_flag>;

namespace idr_fields
{

// 
constexpr auto idr15 = stmcpp::register_field<idr_register, 15, 1>{1};

// 
constexpr auto idr14 = stmcpp::register_field<idr_register, 14, 1>{1};

// 
constexpr auto idr13 = stmcpp::register_field<idr_register, 13, 1>{1};

// 
constexpr auto idr12 = stmcpp::register_field<idr_register, 12, 1>{1};

// 
constexpr auto idr11 = stmcpp::register_field<idr_register, 11, 1>{1};

// 
constexpr auto idr10 = stmcpp::register_field<idr_register, 10, 1>{1};

// 
constexpr auto idr9 = stmcpp::register_field<idr_register, 9, 1>{1};

// 
constexpr auto idr8 = stmcpp::register_field<idr_register, 8, 1>{1};

// 
constexpr auto idr7 = stmcpp::register_field<idr_register, 7, 1>{1};

// 
constexpr auto idr6 = stmcpp::register_field<idr_register, 6, 1>{1};

// 
constexpr auto idr5 = stmcpp::register_field<idr_register, 5, 1>{1};

// 
constexpr auto idr4 = stmcpp::register_field<idr_register, 4, 1>{1};

// 
constexpr auto idr3 = stmcpp::register_field<idr_register, 3, 1>{1};

// 
constexpr auto idr2 = stmcpp::register_field<idr_register, 2, 1>{1};

// 
constexpr auto idr1 = stmcpp::register_field<idr_register, 1, 1>{1};

// 
constexpr auto idr0_high = stmcpp::register_field<idr_register, 0, 1>{1};

// 
constexpr auto idr0_low = stmcpp::register_field<idr_register, 0, 1>{0};

using idr0 = stmcpp::register_field<idr_register, 0, 1>;




} // namespace idr_fields

constexpr auto idr = idr_register{};


// 
using odr_register = stmcpp::register_wrapper<0x48000c14, 4, stmcpp::read_write_flag>;

namespace odr_fields
{

// 
constexpr auto odr15 = stmcpp::register_field<odr_register, 15, 1>{1};

// 
constexpr auto odr14 = stmcpp::register_field<odr_register, 14, 1>{1};

// 
constexpr auto odr13 = stmcpp::register_field<odr_register, 13, 1>{1};

// 
constexpr auto odr12 = stmcpp::register_field<odr_register, 12, 1>{1};

// 
constexpr auto odr11 = stmcpp::register_field<odr_register, 11, 1>{1};

// 
constexpr auto odr10 = stmcpp::register_field<odr_register, 10, 1>{1};

// 
constexpr auto odr9 = stmcpp::register_field<odr_register, 9, 1>{1};

// 
constexpr auto odr8 = stmcpp::register_field<odr_register, 8, 1>{1};

// 
constexpr auto odr7 = stmcpp::register_field<odr_register, 7, 1>{1};

// 
constexpr auto odr6 = stmcpp::register_field<odr_register, 6, 1>{1};

// 
constexpr auto odr5 = stmcpp::register_field<odr_register, 5, 1>{1};

// 
constexpr auto odr4 = stmcpp::register_field<odr_register, 4, 1>{1};

// 
constexpr auto odr3 = stmcpp::register_field<odr_register, 3, 1>{1};

// 
constexpr auto odr2 = stmcpp::register_field<odr_register, 2, 1>{1};

// 
constexpr auto odr1 = stmcpp::register_field<odr_register, 1, 1>{1};

// 
constexpr auto odr0_high = stmcpp::register_field<odr_register, 0, 1>{1};

// 
constexpr auto odr0_low = stmcpp::register_field<odr_register, 0, 1>{0};

using odr0 = stmcpp::register_field<odr_register, 0, 1>;




} // namespace odr_fields

constexpr auto odr = odr_register{};


// 
using bsrr_register = stmcpp::register_wrapper<0x48000c18, 4, stmcpp::write_only_flag>;

namespace bsrr_fields
{

// 
constexpr auto br15 = stmcpp::register_field<bsrr_register, 31, 1>{1};

// 
constexpr auto br14 = stmcpp::register_field<bsrr_register, 30, 1>{1};

// 
constexpr auto br13 = stmcpp::register_field<bsrr_register, 29, 1>{1};

// 
constexpr auto br12 = stmcpp::register_field<bsrr_register, 28, 1>{1};

// 
constexpr auto br11 = stmcpp::register_field<bsrr_register, 27, 1>{1};

// 
constexpr auto br10 = stmcpp::register_field<bsrr_register, 26, 1>{1};

// 
constexpr auto br9 = stmcpp::register_field<bsrr_register, 25, 1>{1};

// 
constexpr auto br8 = stmcpp::register_field<bsrr_register, 24, 1>{1};

// 
constexpr auto br7 = stmcpp::register_field<bsrr_register, 23, 1>{1};

// 
constexpr auto br6 = stmcpp::register_field<bsrr_register, 22, 1>{1};

// 
constexpr auto br5 = stmcpp::register_field<bsrr_register, 21, 1>{1};

// 
constexpr auto br4 = stmcpp::register_field<bsrr_register, 20, 1>{1};

// 
constexpr auto br3 = stmcpp::register_field<bsrr_register, 19, 1>{1};

// 
constexpr auto br2 = stmcpp::register_field<bsrr_register, 18, 1>{1};

// 
constexpr auto br1 = stmcpp::register_field<bsrr_register, 17, 1>{1};

// 
constexpr auto br0_reset = stmcpp::register_field<bsrr_register, 16, 1>{1};

using br0 = stmcpp::register_field<bsrr_register, 16, 1>;


// 
constexpr auto bs15 = stmcpp::register_field<bsrr_register, 15, 1>{1};

// 
constexpr auto bs14 = stmcpp::register_field<bsrr_register, 14, 1>{1};

// 
constexpr auto bs13 = stmcpp::register_field<bsrr_register, 13, 1>{1};

// 
constexpr auto bs12 = stmcpp::register_field<bsrr_register, 12, 1>{1};

// 
constexpr auto bs11 = stmcpp::register_field<bsrr_register, 11, 1>{1};

// 
constexpr auto bs10 = stmcpp::register_field<bsrr_register, 10, 1>{1};

// 
constexpr auto bs9 = stmcpp::register_field<bsrr_register, 9, 1>{1};

// 
constexpr auto bs8 = stmcpp::register_field<bsrr_register, 8, 1>{1};

// 
constexpr auto bs7 = stmcpp::register_field<bsrr_register, 7, 1>{1};

// 
constexpr auto bs6 = stmcpp::register_field<bsrr_register, 6, 1>{1};

// 
constexpr auto bs5 = stmcpp::register_field<bsrr_register, 5, 1>{1};

// 
constexpr auto bs4 = stmcpp::register_field<bsrr_register, 4, 1>{1};

// 
constexpr auto bs3 = stmcpp::register_field<bsrr_register, 3, 1>{1};

// 
constexpr auto bs2 = stmcpp::register_field<bsrr_register, 2, 1>{1};

// 
constexpr auto bs1 = stmcpp::register_field<bsrr_register, 1, 1>{1};

// 
constexpr auto bs0_set = stmcpp::register_field<bsrr_register, 0, 1>{1};

using bs0 = stmcpp::register_field<bsrr_register, 0, 1>;




} // namespace bsrr_fields

constexpr auto bsrr = bsrr_register{};


// 
using lckr_register = stmcpp::register_wrapper<0x48000c1c, 4, stmcpp::read_write_flag>;

namespace lckr_fields
{

// 
constexpr auto lckk_notactive = stmcpp::register_field<lckr_register, 16, 1>{0};

// 
constexpr auto lckk_active = stmcpp::register_field<lckr_register, 16, 1>{1};

using lckk = stmcpp::register_field<lckr_register, 16, 1>;


// 
constexpr auto lck15 = stmcpp::register_field<lckr_register, 15, 1>{1};

// 
constexpr auto lck14 = stmcpp::register_field<lckr_register, 14, 1>{1};

// 
constexpr auto lck13 = stmcpp::register_field<lckr_register, 13, 1>{1};

// 
constexpr auto lck12 = stmcpp::register_field<lckr_register, 12, 1>{1};

// 
constexpr auto lck11 = stmcpp::register_field<lckr_register, 11, 1>{1};

// 
constexpr auto lck10_unlocked = stmcpp::register_field<lckr_register, 10, 1>{0};

// 
constexpr auto lck10_locked = stmcpp::register_field<lckr_register, 10, 1>{1};

using lck10 = stmcpp::register_field<lckr_register, 10, 1>;


// 
constexpr auto lck9 = stmcpp::register_field<lckr_register, 9, 1>{1};

// 
constexpr auto lck8 = stmcpp::register_field<lckr_register, 8, 1>{1};

// 
constexpr auto lck7 = stmcpp::register_field<lckr_register, 7, 1>{1};

// 
constexpr auto lck6 = stmcpp::register_field<lckr_register, 6, 1>{1};

// 
constexpr auto lck5 = stmcpp::register_field<lckr_register, 5, 1>{1};

// 
constexpr auto lck4 = stmcpp::register_field<lckr_register, 4, 1>{1};

// 
constexpr auto lck3 = stmcpp::register_field<lckr_register, 3, 1>{1};

// 
constexpr auto lck2 = stmcpp::register_field<lckr_register, 2, 1>{1};

// 
constexpr auto lck1 = stmcpp::register_field<lckr_register, 1, 1>{1};

// 
constexpr auto lck0_unlocked = stmcpp::register_field<lckr_register, 0, 1>{0};

// 
constexpr auto lck0_locked = stmcpp::register_field<lckr_register, 0, 1>{1};

using lck0 = stmcpp::register_field<lckr_register, 0, 1>;




} // namespace lckr_fields

constexpr auto lckr = lckr_register{};


// 
using afrl_register = stmcpp::register_wrapper<0x48000c20, 4, stmcpp::read_write_flag>;

namespace afrl_fields
{








// 
constexpr auto afrl0_af0 = stmcpp::register_field<afrl_register, 0, 4>{0};

// 
constexpr auto afrl0_af1 = stmcpp::register_field<afrl_register, 0, 4>{1};

// 
constexpr auto afrl0_af2 = stmcpp::register_field<afrl_register, 0, 4>{2};

// 
constexpr auto afrl0_af3 = stmcpp::register_field<afrl_register, 0, 4>{3};

// 
constexpr auto afrl0_af4 = stmcpp::register_field<afrl_register, 0, 4>{4};

// 
constexpr auto afrl0_af5 = stmcpp::register_field<afrl_register, 0, 4>{5};

// 
constexpr auto afrl0_af6 = stmcpp::register_field<afrl_register, 0, 4>{6};

// 
constexpr auto afrl0_af7 = stmcpp::register_field<afrl_register, 0, 4>{7};

// 
constexpr auto afrl0_af8 = stmcpp::register_field<afrl_register, 0, 4>{8};

// 
constexpr auto afrl0_af9 = stmcpp::register_field<afrl_register, 0, 4>{9};

// 
constexpr auto afrl0_af10 = stmcpp::register_field<afrl_register, 0, 4>{10};

// 
constexpr auto afrl0_af11 = stmcpp::register_field<afrl_register, 0, 4>{11};

// 
constexpr auto afrl0_af12 = stmcpp::register_field<afrl_register, 0, 4>{12};

// 
constexpr auto afrl0_af13 = stmcpp::register_field<afrl_register, 0, 4>{13};

// 
constexpr auto afrl0_af14 = stmcpp::register_field<afrl_register, 0, 4>{14};

// 
constexpr auto afrl0_af15 = stmcpp::register_field<afrl_register, 0, 4>{15};

using afrl0 = stmcpp::register_field<afrl_register, 0, 4>;




} // namespace afrl_fields

constexpr auto afrl = afrl_register{};


// 
using afrh_register = stmcpp::register_wrapper<0x48000c24, 4, stmcpp::read_write_flag>;

namespace afrh_fields
{








// 
constexpr auto afrh8_af0 = stmcpp::register_field<afrh_register, 0, 4>{0};

// 
constexpr auto afrh8_af1 = stmcpp::register_field<afrh_register, 0, 4>{1};

// 
constexpr auto afrh8_af2 = stmcpp::register_field<afrh_register, 0, 4>{2};

// 
constexpr auto afrh8_af3 = stmcpp::register_field<afrh_register, 0, 4>{3};

// 
constexpr auto afrh8_af4 = stmcpp::register_field<afrh_register, 0, 4>{4};

// 
constexpr auto afrh8_af5 = stmcpp::register_field<afrh_register, 0, 4>{5};

// 
constexpr auto afrh8_af6 = stmcpp::register_field<afrh_register, 0, 4>{6};

// 
constexpr auto afrh8_af7 = stmcpp::register_field<afrh_register, 0, 4>{7};

// 
constexpr auto afrh8_af8 = stmcpp::register_field<afrh_register, 0, 4>{8};

// 
constexpr auto afrh8_af9 = stmcpp::register_field<afrh_register, 0, 4>{9};

// 
constexpr auto afrh8_af10 = stmcpp::register_field<afrh_register, 0, 4>{10};

// 
constexpr auto afrh8_af11 = stmcpp::register_field<afrh_register, 0, 4>{11};

// 
constexpr auto afrh8_af12 = stmcpp::register_field<afrh_register, 0, 4>{12};

// 
constexpr auto afrh8_af13 = stmcpp::register_field<afrh_register, 0, 4>{13};

// 
constexpr auto afrh8_af14 = stmcpp::register_field<afrh_register, 0, 4>{14};

// 
constexpr auto afrh8_af15 = stmcpp::register_field<afrh_register, 0, 4>{15};

using afrh8 = stmcpp::register_field<afrh_register, 0, 4>;




} // namespace afrh_fields

constexpr auto afrh = afrh_register{};


// 
using brr_register = stmcpp::register_wrapper<0x48000c28, 4, stmcpp::write_only_flag>;

namespace brr_fields
{

// 
constexpr auto br0_noaction = stmcpp::register_field<brr_register, 0, 1>{0};

// 
constexpr auto br0_reset = stmcpp::register_field<brr_register, 0, 1>{1};

using br0 = stmcpp::register_field<brr_register, 0, 1>;


// 
constexpr auto br1 = stmcpp::register_field<brr_register, 1, 1>{1};

// 
constexpr auto br2 = stmcpp::register_field<brr_register, 2, 1>{1};

// 
constexpr auto br3 = stmcpp::register_field<brr_register, 3, 1>{1};

// 
constexpr auto br4 = stmcpp::register_field<brr_register, 4, 1>{1};

// 
constexpr auto br5 = stmcpp::register_field<brr_register, 5, 1>{1};

// 
constexpr auto br6 = stmcpp::register_field<brr_register, 6, 1>{1};

// 
constexpr auto br7 = stmcpp::register_field<brr_register, 7, 1>{1};

// 
constexpr auto br8 = stmcpp::register_field<brr_register, 8, 1>{1};

// 
constexpr auto br9 = stmcpp::register_field<brr_register, 9, 1>{1};

// 
constexpr auto br10_noaction = stmcpp::register_field<brr_register, 10, 1>{0};

// 
constexpr auto br10_reset = stmcpp::register_field<brr_register, 10, 1>{1};

using br10 = stmcpp::register_field<brr_register, 10, 1>;


// 
constexpr auto br11 = stmcpp::register_field<brr_register, 11, 1>{1};

// 
constexpr auto br12 = stmcpp::register_field<brr_register, 12, 1>{1};

// 
constexpr auto br13 = stmcpp::register_field<brr_register, 13, 1>{1};

// 
constexpr auto br14 = stmcpp::register_field<brr_register, 14, 1>{1};

// 
constexpr auto br15 = stmcpp::register_field<brr_register, 15, 1>{1};



} // namespace brr_fields

constexpr auto brr = brr_register{};




} // namespace stmcpp::stm32f051::mgpiod