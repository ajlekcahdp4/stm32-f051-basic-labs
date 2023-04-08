
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

namespace stmcpp::stm32f051::musb
{

// 
using ep0r_register = stmcpp::register_wrapper<0x40005c00, 4, stmcpp::read_write_flag>;

namespace ep0r_fields
{


// 
constexpr auto stat_tx_disabled = stmcpp::register_field<ep0r_register, 4, 2>{0};

// 
constexpr auto stat_tx_stall = stmcpp::register_field<ep0r_register, 4, 2>{1};

// 
constexpr auto stat_tx_nak = stmcpp::register_field<ep0r_register, 4, 2>{2};

// 
constexpr auto stat_tx_valid = stmcpp::register_field<ep0r_register, 4, 2>{3};

using stat_tx = stmcpp::register_field<ep0r_register, 4, 2>;


// 
constexpr auto dtog_tx = stmcpp::register_field<ep0r_register, 6, 1>{1};

// 
constexpr auto ctr_tx = stmcpp::register_field<ep0r_register, 7, 1>{1};

// 
constexpr auto ep_kind = stmcpp::register_field<ep0r_register, 8, 1>{1};

// 
constexpr auto ep_type_bulk = stmcpp::register_field<ep0r_register, 9, 2>{0};

// 
constexpr auto ep_type_control = stmcpp::register_field<ep0r_register, 9, 2>{1};

// 
constexpr auto ep_type_iso = stmcpp::register_field<ep0r_register, 9, 2>{2};

// 
constexpr auto ep_type_interrupt = stmcpp::register_field<ep0r_register, 9, 2>{3};

using ep_type = stmcpp::register_field<ep0r_register, 9, 2>;


// 
constexpr auto setup = stmcpp::register_field<ep0r_register, 11, 1>{1};

// 
constexpr auto stat_rx_disabled = stmcpp::register_field<ep0r_register, 12, 2>{0};

// 
constexpr auto stat_rx_stall = stmcpp::register_field<ep0r_register, 12, 2>{1};

// 
constexpr auto stat_rx_nak = stmcpp::register_field<ep0r_register, 12, 2>{2};

// 
constexpr auto stat_rx_valid = stmcpp::register_field<ep0r_register, 12, 2>{3};

using stat_rx = stmcpp::register_field<ep0r_register, 12, 2>;


// 
constexpr auto dtog_rx = stmcpp::register_field<ep0r_register, 14, 1>{1};

// 
constexpr auto ctr_rx = stmcpp::register_field<ep0r_register, 15, 1>{1};



} // namespace ep0r_fields

constexpr auto ep0r = ep0r_register{};


// 
using ep1r_register = stmcpp::register_wrapper<0x40005c04, 4, stmcpp::read_write_flag>;

namespace ep1r_fields
{


// 
constexpr auto stat_tx_disabled = stmcpp::register_field<ep1r_register, 4, 2>{0};

// 
constexpr auto stat_tx_stall = stmcpp::register_field<ep1r_register, 4, 2>{1};

// 
constexpr auto stat_tx_nak = stmcpp::register_field<ep1r_register, 4, 2>{2};

// 
constexpr auto stat_tx_valid = stmcpp::register_field<ep1r_register, 4, 2>{3};

using stat_tx = stmcpp::register_field<ep1r_register, 4, 2>;


// 
constexpr auto dtog_tx = stmcpp::register_field<ep1r_register, 6, 1>{1};

// 
constexpr auto ctr_tx = stmcpp::register_field<ep1r_register, 7, 1>{1};

// 
constexpr auto ep_kind = stmcpp::register_field<ep1r_register, 8, 1>{1};

// 
constexpr auto ep_type_bulk = stmcpp::register_field<ep1r_register, 9, 2>{0};

// 
constexpr auto ep_type_control = stmcpp::register_field<ep1r_register, 9, 2>{1};

// 
constexpr auto ep_type_iso = stmcpp::register_field<ep1r_register, 9, 2>{2};

// 
constexpr auto ep_type_interrupt = stmcpp::register_field<ep1r_register, 9, 2>{3};

using ep_type = stmcpp::register_field<ep1r_register, 9, 2>;


// 
constexpr auto setup = stmcpp::register_field<ep1r_register, 11, 1>{1};

// 
constexpr auto stat_rx_disabled = stmcpp::register_field<ep1r_register, 12, 2>{0};

// 
constexpr auto stat_rx_stall = stmcpp::register_field<ep1r_register, 12, 2>{1};

// 
constexpr auto stat_rx_nak = stmcpp::register_field<ep1r_register, 12, 2>{2};

// 
constexpr auto stat_rx_valid = stmcpp::register_field<ep1r_register, 12, 2>{3};

using stat_rx = stmcpp::register_field<ep1r_register, 12, 2>;


// 
constexpr auto dtog_rx = stmcpp::register_field<ep1r_register, 14, 1>{1};

// 
constexpr auto ctr_rx = stmcpp::register_field<ep1r_register, 15, 1>{1};



} // namespace ep1r_fields

constexpr auto ep1r = ep1r_register{};


// 
using ep2r_register = stmcpp::register_wrapper<0x40005c08, 4, stmcpp::read_write_flag>;

namespace ep2r_fields
{


// 
constexpr auto stat_tx_disabled = stmcpp::register_field<ep2r_register, 4, 2>{0};

// 
constexpr auto stat_tx_stall = stmcpp::register_field<ep2r_register, 4, 2>{1};

// 
constexpr auto stat_tx_nak = stmcpp::register_field<ep2r_register, 4, 2>{2};

// 
constexpr auto stat_tx_valid = stmcpp::register_field<ep2r_register, 4, 2>{3};

using stat_tx = stmcpp::register_field<ep2r_register, 4, 2>;


// 
constexpr auto dtog_tx = stmcpp::register_field<ep2r_register, 6, 1>{1};

// 
constexpr auto ctr_tx = stmcpp::register_field<ep2r_register, 7, 1>{1};

// 
constexpr auto ep_kind = stmcpp::register_field<ep2r_register, 8, 1>{1};

// 
constexpr auto ep_type_bulk = stmcpp::register_field<ep2r_register, 9, 2>{0};

// 
constexpr auto ep_type_control = stmcpp::register_field<ep2r_register, 9, 2>{1};

// 
constexpr auto ep_type_iso = stmcpp::register_field<ep2r_register, 9, 2>{2};

// 
constexpr auto ep_type_interrupt = stmcpp::register_field<ep2r_register, 9, 2>{3};

using ep_type = stmcpp::register_field<ep2r_register, 9, 2>;


// 
constexpr auto setup = stmcpp::register_field<ep2r_register, 11, 1>{1};

// 
constexpr auto stat_rx_disabled = stmcpp::register_field<ep2r_register, 12, 2>{0};

// 
constexpr auto stat_rx_stall = stmcpp::register_field<ep2r_register, 12, 2>{1};

// 
constexpr auto stat_rx_nak = stmcpp::register_field<ep2r_register, 12, 2>{2};

// 
constexpr auto stat_rx_valid = stmcpp::register_field<ep2r_register, 12, 2>{3};

using stat_rx = stmcpp::register_field<ep2r_register, 12, 2>;


// 
constexpr auto dtog_rx = stmcpp::register_field<ep2r_register, 14, 1>{1};

// 
constexpr auto ctr_rx = stmcpp::register_field<ep2r_register, 15, 1>{1};



} // namespace ep2r_fields

constexpr auto ep2r = ep2r_register{};


// 
using ep3r_register = stmcpp::register_wrapper<0x40005c0c, 4, stmcpp::read_write_flag>;

namespace ep3r_fields
{


// 
constexpr auto stat_tx_disabled = stmcpp::register_field<ep3r_register, 4, 2>{0};

// 
constexpr auto stat_tx_stall = stmcpp::register_field<ep3r_register, 4, 2>{1};

// 
constexpr auto stat_tx_nak = stmcpp::register_field<ep3r_register, 4, 2>{2};

// 
constexpr auto stat_tx_valid = stmcpp::register_field<ep3r_register, 4, 2>{3};

using stat_tx = stmcpp::register_field<ep3r_register, 4, 2>;


// 
constexpr auto dtog_tx = stmcpp::register_field<ep3r_register, 6, 1>{1};

// 
constexpr auto ctr_tx = stmcpp::register_field<ep3r_register, 7, 1>{1};

// 
constexpr auto ep_kind = stmcpp::register_field<ep3r_register, 8, 1>{1};

// 
constexpr auto ep_type_bulk = stmcpp::register_field<ep3r_register, 9, 2>{0};

// 
constexpr auto ep_type_control = stmcpp::register_field<ep3r_register, 9, 2>{1};

// 
constexpr auto ep_type_iso = stmcpp::register_field<ep3r_register, 9, 2>{2};

// 
constexpr auto ep_type_interrupt = stmcpp::register_field<ep3r_register, 9, 2>{3};

using ep_type = stmcpp::register_field<ep3r_register, 9, 2>;


// 
constexpr auto setup = stmcpp::register_field<ep3r_register, 11, 1>{1};

// 
constexpr auto stat_rx_disabled = stmcpp::register_field<ep3r_register, 12, 2>{0};

// 
constexpr auto stat_rx_stall = stmcpp::register_field<ep3r_register, 12, 2>{1};

// 
constexpr auto stat_rx_nak = stmcpp::register_field<ep3r_register, 12, 2>{2};

// 
constexpr auto stat_rx_valid = stmcpp::register_field<ep3r_register, 12, 2>{3};

using stat_rx = stmcpp::register_field<ep3r_register, 12, 2>;


// 
constexpr auto dtog_rx = stmcpp::register_field<ep3r_register, 14, 1>{1};

// 
constexpr auto ctr_rx = stmcpp::register_field<ep3r_register, 15, 1>{1};



} // namespace ep3r_fields

constexpr auto ep3r = ep3r_register{};


// 
using ep4r_register = stmcpp::register_wrapper<0x40005c10, 4, stmcpp::read_write_flag>;

namespace ep4r_fields
{


// 
constexpr auto stat_tx_disabled = stmcpp::register_field<ep4r_register, 4, 2>{0};

// 
constexpr auto stat_tx_stall = stmcpp::register_field<ep4r_register, 4, 2>{1};

// 
constexpr auto stat_tx_nak = stmcpp::register_field<ep4r_register, 4, 2>{2};

// 
constexpr auto stat_tx_valid = stmcpp::register_field<ep4r_register, 4, 2>{3};

using stat_tx = stmcpp::register_field<ep4r_register, 4, 2>;


// 
constexpr auto dtog_tx = stmcpp::register_field<ep4r_register, 6, 1>{1};

// 
constexpr auto ctr_tx = stmcpp::register_field<ep4r_register, 7, 1>{1};

// 
constexpr auto ep_kind = stmcpp::register_field<ep4r_register, 8, 1>{1};

// 
constexpr auto ep_type_bulk = stmcpp::register_field<ep4r_register, 9, 2>{0};

// 
constexpr auto ep_type_control = stmcpp::register_field<ep4r_register, 9, 2>{1};

// 
constexpr auto ep_type_iso = stmcpp::register_field<ep4r_register, 9, 2>{2};

// 
constexpr auto ep_type_interrupt = stmcpp::register_field<ep4r_register, 9, 2>{3};

using ep_type = stmcpp::register_field<ep4r_register, 9, 2>;


// 
constexpr auto setup = stmcpp::register_field<ep4r_register, 11, 1>{1};

// 
constexpr auto stat_rx_disabled = stmcpp::register_field<ep4r_register, 12, 2>{0};

// 
constexpr auto stat_rx_stall = stmcpp::register_field<ep4r_register, 12, 2>{1};

// 
constexpr auto stat_rx_nak = stmcpp::register_field<ep4r_register, 12, 2>{2};

// 
constexpr auto stat_rx_valid = stmcpp::register_field<ep4r_register, 12, 2>{3};

using stat_rx = stmcpp::register_field<ep4r_register, 12, 2>;


// 
constexpr auto dtog_rx = stmcpp::register_field<ep4r_register, 14, 1>{1};

// 
constexpr auto ctr_rx = stmcpp::register_field<ep4r_register, 15, 1>{1};



} // namespace ep4r_fields

constexpr auto ep4r = ep4r_register{};


// 
using ep5r_register = stmcpp::register_wrapper<0x40005c14, 4, stmcpp::read_write_flag>;

namespace ep5r_fields
{


// 
constexpr auto stat_tx_disabled = stmcpp::register_field<ep5r_register, 4, 2>{0};

// 
constexpr auto stat_tx_stall = stmcpp::register_field<ep5r_register, 4, 2>{1};

// 
constexpr auto stat_tx_nak = stmcpp::register_field<ep5r_register, 4, 2>{2};

// 
constexpr auto stat_tx_valid = stmcpp::register_field<ep5r_register, 4, 2>{3};

using stat_tx = stmcpp::register_field<ep5r_register, 4, 2>;


// 
constexpr auto dtog_tx = stmcpp::register_field<ep5r_register, 6, 1>{1};

// 
constexpr auto ctr_tx = stmcpp::register_field<ep5r_register, 7, 1>{1};

// 
constexpr auto ep_kind = stmcpp::register_field<ep5r_register, 8, 1>{1};

// 
constexpr auto ep_type_bulk = stmcpp::register_field<ep5r_register, 9, 2>{0};

// 
constexpr auto ep_type_control = stmcpp::register_field<ep5r_register, 9, 2>{1};

// 
constexpr auto ep_type_iso = stmcpp::register_field<ep5r_register, 9, 2>{2};

// 
constexpr auto ep_type_interrupt = stmcpp::register_field<ep5r_register, 9, 2>{3};

using ep_type = stmcpp::register_field<ep5r_register, 9, 2>;


// 
constexpr auto setup = stmcpp::register_field<ep5r_register, 11, 1>{1};

// 
constexpr auto stat_rx_disabled = stmcpp::register_field<ep5r_register, 12, 2>{0};

// 
constexpr auto stat_rx_stall = stmcpp::register_field<ep5r_register, 12, 2>{1};

// 
constexpr auto stat_rx_nak = stmcpp::register_field<ep5r_register, 12, 2>{2};

// 
constexpr auto stat_rx_valid = stmcpp::register_field<ep5r_register, 12, 2>{3};

using stat_rx = stmcpp::register_field<ep5r_register, 12, 2>;


// 
constexpr auto dtog_rx = stmcpp::register_field<ep5r_register, 14, 1>{1};

// 
constexpr auto ctr_rx = stmcpp::register_field<ep5r_register, 15, 1>{1};



} // namespace ep5r_fields

constexpr auto ep5r = ep5r_register{};


// 
using ep6r_register = stmcpp::register_wrapper<0x40005c18, 4, stmcpp::read_write_flag>;

namespace ep6r_fields
{


// 
constexpr auto stat_tx_disabled = stmcpp::register_field<ep6r_register, 4, 2>{0};

// 
constexpr auto stat_tx_stall = stmcpp::register_field<ep6r_register, 4, 2>{1};

// 
constexpr auto stat_tx_nak = stmcpp::register_field<ep6r_register, 4, 2>{2};

// 
constexpr auto stat_tx_valid = stmcpp::register_field<ep6r_register, 4, 2>{3};

using stat_tx = stmcpp::register_field<ep6r_register, 4, 2>;


// 
constexpr auto dtog_tx = stmcpp::register_field<ep6r_register, 6, 1>{1};

// 
constexpr auto ctr_tx = stmcpp::register_field<ep6r_register, 7, 1>{1};

// 
constexpr auto ep_kind = stmcpp::register_field<ep6r_register, 8, 1>{1};

// 
constexpr auto ep_type_bulk = stmcpp::register_field<ep6r_register, 9, 2>{0};

// 
constexpr auto ep_type_control = stmcpp::register_field<ep6r_register, 9, 2>{1};

// 
constexpr auto ep_type_iso = stmcpp::register_field<ep6r_register, 9, 2>{2};

// 
constexpr auto ep_type_interrupt = stmcpp::register_field<ep6r_register, 9, 2>{3};

using ep_type = stmcpp::register_field<ep6r_register, 9, 2>;


// 
constexpr auto setup = stmcpp::register_field<ep6r_register, 11, 1>{1};

// 
constexpr auto stat_rx_disabled = stmcpp::register_field<ep6r_register, 12, 2>{0};

// 
constexpr auto stat_rx_stall = stmcpp::register_field<ep6r_register, 12, 2>{1};

// 
constexpr auto stat_rx_nak = stmcpp::register_field<ep6r_register, 12, 2>{2};

// 
constexpr auto stat_rx_valid = stmcpp::register_field<ep6r_register, 12, 2>{3};

using stat_rx = stmcpp::register_field<ep6r_register, 12, 2>;


// 
constexpr auto dtog_rx = stmcpp::register_field<ep6r_register, 14, 1>{1};

// 
constexpr auto ctr_rx = stmcpp::register_field<ep6r_register, 15, 1>{1};



} // namespace ep6r_fields

constexpr auto ep6r = ep6r_register{};


// 
using ep7r_register = stmcpp::register_wrapper<0x40005c1c, 4, stmcpp::read_write_flag>;

namespace ep7r_fields
{


// 
constexpr auto stat_tx_disabled = stmcpp::register_field<ep7r_register, 4, 2>{0};

// 
constexpr auto stat_tx_stall = stmcpp::register_field<ep7r_register, 4, 2>{1};

// 
constexpr auto stat_tx_nak = stmcpp::register_field<ep7r_register, 4, 2>{2};

// 
constexpr auto stat_tx_valid = stmcpp::register_field<ep7r_register, 4, 2>{3};

using stat_tx = stmcpp::register_field<ep7r_register, 4, 2>;


// 
constexpr auto dtog_tx = stmcpp::register_field<ep7r_register, 6, 1>{1};

// 
constexpr auto ctr_tx = stmcpp::register_field<ep7r_register, 7, 1>{1};

// 
constexpr auto ep_kind = stmcpp::register_field<ep7r_register, 8, 1>{1};

// 
constexpr auto ep_type_bulk = stmcpp::register_field<ep7r_register, 9, 2>{0};

// 
constexpr auto ep_type_control = stmcpp::register_field<ep7r_register, 9, 2>{1};

// 
constexpr auto ep_type_iso = stmcpp::register_field<ep7r_register, 9, 2>{2};

// 
constexpr auto ep_type_interrupt = stmcpp::register_field<ep7r_register, 9, 2>{3};

using ep_type = stmcpp::register_field<ep7r_register, 9, 2>;


// 
constexpr auto setup = stmcpp::register_field<ep7r_register, 11, 1>{1};

// 
constexpr auto stat_rx_disabled = stmcpp::register_field<ep7r_register, 12, 2>{0};

// 
constexpr auto stat_rx_stall = stmcpp::register_field<ep7r_register, 12, 2>{1};

// 
constexpr auto stat_rx_nak = stmcpp::register_field<ep7r_register, 12, 2>{2};

// 
constexpr auto stat_rx_valid = stmcpp::register_field<ep7r_register, 12, 2>{3};

using stat_rx = stmcpp::register_field<ep7r_register, 12, 2>;


// 
constexpr auto dtog_rx = stmcpp::register_field<ep7r_register, 14, 1>{1};

// 
constexpr auto ctr_rx = stmcpp::register_field<ep7r_register, 15, 1>{1};



} // namespace ep7r_fields

constexpr auto ep7r = ep7r_register{};


// 
using cntr_register = stmcpp::register_wrapper<0x40005c40, 4, stmcpp::read_write_flag>;

namespace cntr_fields
{

// 
constexpr auto fres_noreset = stmcpp::register_field<cntr_register, 0, 1>{0};

// 
constexpr auto fres_reset = stmcpp::register_field<cntr_register, 0, 1>{1};

using fres = stmcpp::register_field<cntr_register, 0, 1>;


// 
constexpr auto pdwn_disabled = stmcpp::register_field<cntr_register, 1, 1>{0};

// 
constexpr auto pdwn_enabled = stmcpp::register_field<cntr_register, 1, 1>{1};

using pdwn = stmcpp::register_field<cntr_register, 1, 1>;


// 
constexpr auto lpmode_disabled = stmcpp::register_field<cntr_register, 2, 1>{0};

// 
constexpr auto lpmode_enabled = stmcpp::register_field<cntr_register, 2, 1>{1};

using lpmode = stmcpp::register_field<cntr_register, 2, 1>;


// 
constexpr auto fsusp_noeffect = stmcpp::register_field<cntr_register, 3, 1>{0};

// 
constexpr auto fsusp_suspend = stmcpp::register_field<cntr_register, 3, 1>{1};

using fsusp = stmcpp::register_field<cntr_register, 3, 1>;


// 
constexpr auto resume_requested = stmcpp::register_field<cntr_register, 4, 1>{1};

using resume = stmcpp::register_field<cntr_register, 4, 1>;


// 
constexpr auto l1resume_requested = stmcpp::register_field<cntr_register, 5, 1>{1};

using l1resume = stmcpp::register_field<cntr_register, 5, 1>;


// 
constexpr auto l1reqm_disabled = stmcpp::register_field<cntr_register, 7, 1>{0};

// 
constexpr auto l1reqm_enabled = stmcpp::register_field<cntr_register, 7, 1>{1};

using l1reqm = stmcpp::register_field<cntr_register, 7, 1>;


// 
constexpr auto esofm_disabled = stmcpp::register_field<cntr_register, 8, 1>{0};

// 
constexpr auto esofm_enabled = stmcpp::register_field<cntr_register, 8, 1>{1};

using esofm = stmcpp::register_field<cntr_register, 8, 1>;


// 
constexpr auto sofm_disabled = stmcpp::register_field<cntr_register, 9, 1>{0};

// 
constexpr auto sofm_enabled = stmcpp::register_field<cntr_register, 9, 1>{1};

using sofm = stmcpp::register_field<cntr_register, 9, 1>;


// 
constexpr auto resetm_disabled = stmcpp::register_field<cntr_register, 10, 1>{0};

// 
constexpr auto resetm_enabled = stmcpp::register_field<cntr_register, 10, 1>{1};

using resetm = stmcpp::register_field<cntr_register, 10, 1>;


// 
constexpr auto suspm_disabled = stmcpp::register_field<cntr_register, 11, 1>{0};

// 
constexpr auto suspm_enabled = stmcpp::register_field<cntr_register, 11, 1>{1};

using suspm = stmcpp::register_field<cntr_register, 11, 1>;


// 
constexpr auto wkupm_disabled = stmcpp::register_field<cntr_register, 12, 1>{0};

// 
constexpr auto wkupm_enabled = stmcpp::register_field<cntr_register, 12, 1>{1};

using wkupm = stmcpp::register_field<cntr_register, 12, 1>;


// 
constexpr auto errm_disabled = stmcpp::register_field<cntr_register, 13, 1>{0};

// 
constexpr auto errm_enabled = stmcpp::register_field<cntr_register, 13, 1>{1};

using errm = stmcpp::register_field<cntr_register, 13, 1>;


// 
constexpr auto pmaovrm_disabled = stmcpp::register_field<cntr_register, 14, 1>{0};

// 
constexpr auto pmaovrm_enabled = stmcpp::register_field<cntr_register, 14, 1>{1};

using pmaovrm = stmcpp::register_field<cntr_register, 14, 1>;


// 
constexpr auto ctrm_disabled = stmcpp::register_field<cntr_register, 15, 1>{0};

// 
constexpr auto ctrm_enabled = stmcpp::register_field<cntr_register, 15, 1>{1};

using ctrm = stmcpp::register_field<cntr_register, 15, 1>;




} // namespace cntr_fields

constexpr auto cntr = cntr_register{};


// 
using istr_register = stmcpp::register_wrapper<0x40005c44, 4, readj-write>;

namespace istr_fields
{


// 
constexpr auto dir_to = stmcpp::register_field<istr_register, 4, 1>{0};

// 
constexpr auto dir_from = stmcpp::register_field<istr_register, 4, 1>{1};

using dir = stmcpp::register_field<istr_register, 4, 1>;


// 
constexpr auto l1req_received = stmcpp::register_field<istr_register, 7, 1>{1};

using l1req = stmcpp::register_field<istr_register, 7, 1>;


// 
constexpr auto esof_expectedstartofframe = stmcpp::register_field<istr_register, 8, 1>{1};

using esof = stmcpp::register_field<istr_register, 8, 1>;


// 
constexpr auto sof_startofframe = stmcpp::register_field<istr_register, 9, 1>{1};

using sof = stmcpp::register_field<istr_register, 9, 1>;


// 
constexpr auto reset_reset = stmcpp::register_field<istr_register, 10, 1>{1};

using reset = stmcpp::register_field<istr_register, 10, 1>;


// 
constexpr auto susp_suspend = stmcpp::register_field<istr_register, 11, 1>{1};

using susp = stmcpp::register_field<istr_register, 11, 1>;


// 
constexpr auto wkup_wakeup = stmcpp::register_field<istr_register, 12, 1>{1};

using wkup = stmcpp::register_field<istr_register, 12, 1>;


// 
constexpr auto err_error = stmcpp::register_field<istr_register, 13, 1>{1};

using err = stmcpp::register_field<istr_register, 13, 1>;


// 
constexpr auto pmaovr_overrun = stmcpp::register_field<istr_register, 14, 1>{1};

using pmaovr = stmcpp::register_field<istr_register, 14, 1>;


// 
constexpr auto ctr_completed = stmcpp::register_field<istr_register, 15, 1>{1};

using ctr = stmcpp::register_field<istr_register, 15, 1>;




} // namespace istr_fields

constexpr auto istr = istr_register{};


// 
using fnr_register = stmcpp::register_wrapper<0x40005c48, 4, stmcpp::read_only_flag>;

namespace fnr_fields
{



// 
constexpr auto lck_locked = stmcpp::register_field<fnr_register, 13, 1>{1};

using lck = stmcpp::register_field<fnr_register, 13, 1>;


// 
constexpr auto rxdm_received = stmcpp::register_field<fnr_register, 14, 1>{1};

using rxdm = stmcpp::register_field<fnr_register, 14, 1>;


// 
constexpr auto rxdp_received = stmcpp::register_field<fnr_register, 15, 1>{1};

using rxdp = stmcpp::register_field<fnr_register, 15, 1>;




} // namespace fnr_fields

constexpr auto fnr = fnr_register{};


// 
using daddr_register = stmcpp::register_wrapper<0x40005c4c, 4, stmcpp::read_write_flag>;

namespace daddr_fields
{


// 
constexpr auto ef_disabled = stmcpp::register_field<daddr_register, 7, 1>{0};

// 
constexpr auto ef_enabled = stmcpp::register_field<daddr_register, 7, 1>{1};

using ef = stmcpp::register_field<daddr_register, 7, 1>;




} // namespace daddr_fields

constexpr auto daddr = daddr_register{};


// 
using btable_register = stmcpp::register_wrapper<0x40005c50, 4, stmcpp::read_write_flag>;

namespace btable_fields
{




} // namespace btable_fields

constexpr auto btable = btable_register{};


// 
using lpmcsr_register = stmcpp::register_wrapper<0x40005c54, 4, readj-write>;

namespace lpmcsr_fields
{

// 
constexpr auto lpmen_disabled = stmcpp::register_field<lpmcsr_register, 0, 1>{0};

// 
constexpr auto lpmen_enabled = stmcpp::register_field<lpmcsr_register, 0, 1>{1};

using lpmen = stmcpp::register_field<lpmcsr_register, 0, 1>;


// 
constexpr auto lpmack_nyet = stmcpp::register_field<lpmcsr_register, 1, 1>{0};

// 
constexpr auto lpmack_ack = stmcpp::register_field<lpmcsr_register, 1, 1>{1};

using lpmack = stmcpp::register_field<lpmcsr_register, 1, 1>;


// 
constexpr auto remwake = stmcpp::register_field<lpmcsr_register, 3, 1>{1};




} // namespace lpmcsr_fields

constexpr auto lpmcsr = lpmcsr_register{};


// 
using bcdr_register = stmcpp::register_wrapper<0x40005c58, 4, readj-write>;

namespace bcdr_fields
{

// 
constexpr auto bcden_disabled = stmcpp::register_field<bcdr_register, 0, 1>{0};

// 
constexpr auto bcden_enabled = stmcpp::register_field<bcdr_register, 0, 1>{1};

using bcden = stmcpp::register_field<bcdr_register, 0, 1>;


// 
constexpr auto dcden_disabled = stmcpp::register_field<bcdr_register, 1, 1>{0};

// 
constexpr auto dcden_enabled = stmcpp::register_field<bcdr_register, 1, 1>{1};

using dcden = stmcpp::register_field<bcdr_register, 1, 1>;


// 
constexpr auto pden_disabled = stmcpp::register_field<bcdr_register, 2, 1>{0};

// 
constexpr auto pden_enabled = stmcpp::register_field<bcdr_register, 2, 1>{1};

using pden = stmcpp::register_field<bcdr_register, 2, 1>;


// 
constexpr auto sden_disabled = stmcpp::register_field<bcdr_register, 3, 1>{0};

// 
constexpr auto sden_enabled = stmcpp::register_field<bcdr_register, 3, 1>{1};

using sden = stmcpp::register_field<bcdr_register, 3, 1>;


// 
constexpr auto dcdet_notdetected = stmcpp::register_field<bcdr_register, 4, 1>{0};

// 
constexpr auto dcdet_detected = stmcpp::register_field<bcdr_register, 4, 1>{1};

using dcdet = stmcpp::register_field<bcdr_register, 4, 1>;


// 
constexpr auto pdet_nobcd = stmcpp::register_field<bcdr_register, 5, 1>{0};

// 
constexpr auto pdet_bcd = stmcpp::register_field<bcdr_register, 5, 1>{1};

using pdet = stmcpp::register_field<bcdr_register, 5, 1>;


// 
constexpr auto sdet_cdp = stmcpp::register_field<bcdr_register, 6, 1>{0};

// 
constexpr auto sdet_dcp = stmcpp::register_field<bcdr_register, 6, 1>{1};

using sdet = stmcpp::register_field<bcdr_register, 6, 1>;


// 
constexpr auto ps2det_normal = stmcpp::register_field<bcdr_register, 7, 1>{0};

// 
constexpr auto ps2det_ps2 = stmcpp::register_field<bcdr_register, 7, 1>{1};

using ps2det = stmcpp::register_field<bcdr_register, 7, 1>;


// 
constexpr auto dppu_disabled = stmcpp::register_field<bcdr_register, 15, 1>{0};

// 
constexpr auto dppu_enabled = stmcpp::register_field<bcdr_register, 15, 1>{1};

using dppu = stmcpp::register_field<bcdr_register, 15, 1>;




} // namespace bcdr_fields

constexpr auto bcdr = bcdr_register{};




} // namespace stmcpp::stm32f051::musb