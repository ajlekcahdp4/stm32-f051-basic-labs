
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

namespace stmcpp::stm32f051::mcomp
{

// 
using csr_register = stmcpp::register_wrapper<0x4001001c, 4, readj-write>;

namespace csr_fields
{

// 
constexpr auto comp1en_disabled = stmcpp::register_field<csr_register, 0, 1>{0};

// 
constexpr auto comp1en_enabled = stmcpp::register_field<csr_register, 0, 1>{1};

using comp1en = stmcpp::register_field<csr_register, 0, 1>;


// 
constexpr auto comp1mode_highspeed = stmcpp::register_field<csr_register, 2, 2>{0};

// 
constexpr auto comp1mode_mediumspeed = stmcpp::register_field<csr_register, 2, 2>{1};

// 
constexpr auto comp1mode_lowspeed = stmcpp::register_field<csr_register, 2, 2>{2};

// 
constexpr auto comp1mode_verylowspeed = stmcpp::register_field<csr_register, 2, 2>{3};

using comp1mode = stmcpp::register_field<csr_register, 2, 2>;


// 
constexpr auto comp1insel_onequartervref = stmcpp::register_field<csr_register, 4, 3>{0};

// 
constexpr auto comp1insel_onehalfvref = stmcpp::register_field<csr_register, 4, 3>{1};

// 
constexpr auto comp1insel_threequartervref = stmcpp::register_field<csr_register, 4, 3>{2};

// 
constexpr auto comp1insel_vref = stmcpp::register_field<csr_register, 4, 3>{3};

// 
constexpr auto comp1insel_comp1_inm4 = stmcpp::register_field<csr_register, 4, 3>{4};

// 
constexpr auto comp1insel_comp1_inm5 = stmcpp::register_field<csr_register, 4, 3>{5};

// 
constexpr auto comp1insel_comp1_inm6 = stmcpp::register_field<csr_register, 4, 3>{6};

using comp1insel = stmcpp::register_field<csr_register, 4, 3>;


// 
constexpr auto comp1outsel_noselection = stmcpp::register_field<csr_register, 8, 3>{0};

// 
constexpr auto comp1outsel_timer1breakinput = stmcpp::register_field<csr_register, 8, 3>{1};

// 
constexpr auto comp1outsel_timer1inputcapture1 = stmcpp::register_field<csr_register, 8, 3>{2};

// 
constexpr auto comp1outsel_timer1ocrefclearinput = stmcpp::register_field<csr_register, 8, 3>{3};

// 
constexpr auto comp1outsel_timer2inputcapture4 = stmcpp::register_field<csr_register, 8, 3>{4};

// 
constexpr auto comp1outsel_timer2ocrefclearinput = stmcpp::register_field<csr_register, 8, 3>{5};

// 
constexpr auto comp1outsel_timer3inputcapture1 = stmcpp::register_field<csr_register, 8, 3>{6};

// 
constexpr auto comp1outsel_timer3ocrefclearinput = stmcpp::register_field<csr_register, 8, 3>{7};

using comp1outsel = stmcpp::register_field<csr_register, 8, 3>;


// 
constexpr auto comp1pol_notinverted = stmcpp::register_field<csr_register, 11, 1>{0};

// 
constexpr auto comp1pol_inverted = stmcpp::register_field<csr_register, 11, 1>{1};

using comp1pol = stmcpp::register_field<csr_register, 11, 1>;


// 
constexpr auto comp1hyst_nohysteresis = stmcpp::register_field<csr_register, 12, 2>{0};

// 
constexpr auto comp1hyst_lowhysteresis = stmcpp::register_field<csr_register, 12, 2>{1};

// 
constexpr auto comp1hyst_mediumhysteresis = stmcpp::register_field<csr_register, 12, 2>{2};

// 
constexpr auto comp1hyst_highhysteresis = stmcpp::register_field<csr_register, 12, 2>{3};

using comp1hyst = stmcpp::register_field<csr_register, 12, 2>;


// 
constexpr auto comp1out_low = stmcpp::register_field<csr_register, 14, 1>{0};

// 
constexpr auto comp1out_high = stmcpp::register_field<csr_register, 14, 1>{1};

using comp1out = stmcpp::register_field<csr_register, 14, 1>;


// 
constexpr auto comp1lock_unlocked = stmcpp::register_field<csr_register, 15, 1>{0};

// 
constexpr auto comp1lock_locked = stmcpp::register_field<csr_register, 15, 1>{1};

using comp1lock = stmcpp::register_field<csr_register, 15, 1>;


// 
constexpr auto comp2en_disabled = stmcpp::register_field<csr_register, 16, 1>{0};

// 
constexpr auto comp2en_enabled = stmcpp::register_field<csr_register, 16, 1>{1};

using comp2en = stmcpp::register_field<csr_register, 16, 1>;


// 
constexpr auto comp2mode_highspeed = stmcpp::register_field<csr_register, 18, 2>{0};

// 
constexpr auto comp2mode_mediumspeed = stmcpp::register_field<csr_register, 18, 2>{1};

// 
constexpr auto comp2mode_lowspeed = stmcpp::register_field<csr_register, 18, 2>{2};

// 
constexpr auto comp2mode_verylowspeed = stmcpp::register_field<csr_register, 18, 2>{3};

using comp2mode = stmcpp::register_field<csr_register, 18, 2>;


// 
constexpr auto comp2insel_onequartervref = stmcpp::register_field<csr_register, 20, 3>{0};

// 
constexpr auto comp2insel_onehalfvref = stmcpp::register_field<csr_register, 20, 3>{1};

// 
constexpr auto comp2insel_threequartervref = stmcpp::register_field<csr_register, 20, 3>{2};

// 
constexpr auto comp2insel_vref = stmcpp::register_field<csr_register, 20, 3>{3};

// 
constexpr auto comp2insel_comp2_inm4 = stmcpp::register_field<csr_register, 20, 3>{4};

// 
constexpr auto comp2insel_comp2_inm5 = stmcpp::register_field<csr_register, 20, 3>{5};

// 
constexpr auto comp2insel_comp2_inm6 = stmcpp::register_field<csr_register, 20, 3>{6};

using comp2insel = stmcpp::register_field<csr_register, 20, 3>;


// 
constexpr auto wndwen_disabled = stmcpp::register_field<csr_register, 23, 1>{0};

// 
constexpr auto wndwen_enabled = stmcpp::register_field<csr_register, 23, 1>{1};

using wndwen = stmcpp::register_field<csr_register, 23, 1>;


// 
constexpr auto comp2outsel_noselection = stmcpp::register_field<csr_register, 24, 3>{0};

// 
constexpr auto comp2outsel_timer1breakinput = stmcpp::register_field<csr_register, 24, 3>{1};

// 
constexpr auto comp2outsel_timer1inputcapture1 = stmcpp::register_field<csr_register, 24, 3>{2};

// 
constexpr auto comp2outsel_timer1ocrefclearinput = stmcpp::register_field<csr_register, 24, 3>{3};

// 
constexpr auto comp2outsel_timer2inputcapture4 = stmcpp::register_field<csr_register, 24, 3>{4};

// 
constexpr auto comp2outsel_timer2ocrefclearinput = stmcpp::register_field<csr_register, 24, 3>{5};

// 
constexpr auto comp2outsel_timer3inputcapture1 = stmcpp::register_field<csr_register, 24, 3>{6};

// 
constexpr auto comp2outsel_timer3ocrefclearinput = stmcpp::register_field<csr_register, 24, 3>{7};

using comp2outsel = stmcpp::register_field<csr_register, 24, 3>;


// 
constexpr auto comp2pol_notinverted = stmcpp::register_field<csr_register, 27, 1>{0};

// 
constexpr auto comp2pol_inverted = stmcpp::register_field<csr_register, 27, 1>{1};

using comp2pol = stmcpp::register_field<csr_register, 27, 1>;


// 
constexpr auto comp2hyst_nohysteresis = stmcpp::register_field<csr_register, 28, 2>{0};

// 
constexpr auto comp2hyst_lowhysteresis = stmcpp::register_field<csr_register, 28, 2>{1};

// 
constexpr auto comp2hyst_mediumhysteresis = stmcpp::register_field<csr_register, 28, 2>{2};

// 
constexpr auto comp2hyst_highhysteresis = stmcpp::register_field<csr_register, 28, 2>{3};

using comp2hyst = stmcpp::register_field<csr_register, 28, 2>;


// 
constexpr auto comp2out_low = stmcpp::register_field<csr_register, 30, 1>{0};

// 
constexpr auto comp2out_high = stmcpp::register_field<csr_register, 30, 1>{1};

using comp2out = stmcpp::register_field<csr_register, 30, 1>;


// 
constexpr auto comp2lock_unlocked = stmcpp::register_field<csr_register, 31, 1>{0};

// 
constexpr auto comp2lock_locked = stmcpp::register_field<csr_register, 31, 1>{1};

using comp2lock = stmcpp::register_field<csr_register, 31, 1>;


// 
constexpr auto comp1sw1_open = stmcpp::register_field<csr_register, 1, 1>{0};

// 
constexpr auto comp1sw1_closed = stmcpp::register_field<csr_register, 1, 1>{1};

using comp1sw1 = stmcpp::register_field<csr_register, 1, 1>;




} // namespace csr_fields

constexpr auto csr = csr_register{};




} // namespace stmcpp::stm32f051::mcomp