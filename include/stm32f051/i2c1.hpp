
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

namespace stmcpp::stm32f051::mi2c1
{

// 
using cr1_register = stmcpp::register_wrapper<0x40005400, 4, readj-write>;

namespace cr1_fields
{

// 
constexpr auto pe_disabled = stmcpp::register_field<cr1_register, 0, 1>{0};

// 
constexpr auto pe_enabled = stmcpp::register_field<cr1_register, 0, 1>{1};

using pe = stmcpp::register_field<cr1_register, 0, 1>;


// 
constexpr auto txie_disabled = stmcpp::register_field<cr1_register, 1, 1>{0};

// 
constexpr auto txie_enabled = stmcpp::register_field<cr1_register, 1, 1>{1};

using txie = stmcpp::register_field<cr1_register, 1, 1>;


// 
constexpr auto rxie_disabled = stmcpp::register_field<cr1_register, 2, 1>{0};

// 
constexpr auto rxie_enabled = stmcpp::register_field<cr1_register, 2, 1>{1};

using rxie = stmcpp::register_field<cr1_register, 2, 1>;


// 
constexpr auto addrie_disabled = stmcpp::register_field<cr1_register, 3, 1>{0};

// 
constexpr auto addrie_enabled = stmcpp::register_field<cr1_register, 3, 1>{1};

using addrie = stmcpp::register_field<cr1_register, 3, 1>;


// 
constexpr auto nackie_disabled = stmcpp::register_field<cr1_register, 4, 1>{0};

// 
constexpr auto nackie_enabled = stmcpp::register_field<cr1_register, 4, 1>{1};

using nackie = stmcpp::register_field<cr1_register, 4, 1>;


// 
constexpr auto stopie_disabled = stmcpp::register_field<cr1_register, 5, 1>{0};

// 
constexpr auto stopie_enabled = stmcpp::register_field<cr1_register, 5, 1>{1};

using stopie = stmcpp::register_field<cr1_register, 5, 1>;


// 
constexpr auto tcie_disabled = stmcpp::register_field<cr1_register, 6, 1>{0};

// 
constexpr auto tcie_enabled = stmcpp::register_field<cr1_register, 6, 1>{1};

using tcie = stmcpp::register_field<cr1_register, 6, 1>;


// 
constexpr auto errie_disabled = stmcpp::register_field<cr1_register, 7, 1>{0};

// 
constexpr auto errie_enabled = stmcpp::register_field<cr1_register, 7, 1>{1};

using errie = stmcpp::register_field<cr1_register, 7, 1>;


// 
constexpr auto dnf_nofilter = stmcpp::register_field<cr1_register, 8, 4>{0};

// 
constexpr auto dnf_filter1 = stmcpp::register_field<cr1_register, 8, 4>{1};

// 
constexpr auto dnf_filter2 = stmcpp::register_field<cr1_register, 8, 4>{2};

// 
constexpr auto dnf_filter3 = stmcpp::register_field<cr1_register, 8, 4>{3};

// 
constexpr auto dnf_filter4 = stmcpp::register_field<cr1_register, 8, 4>{4};

// 
constexpr auto dnf_filter5 = stmcpp::register_field<cr1_register, 8, 4>{5};

// 
constexpr auto dnf_filter6 = stmcpp::register_field<cr1_register, 8, 4>{6};

// 
constexpr auto dnf_filter7 = stmcpp::register_field<cr1_register, 8, 4>{7};

// 
constexpr auto dnf_filter8 = stmcpp::register_field<cr1_register, 8, 4>{8};

// 
constexpr auto dnf_filter9 = stmcpp::register_field<cr1_register, 8, 4>{9};

// 
constexpr auto dnf_filter10 = stmcpp::register_field<cr1_register, 8, 4>{10};

// 
constexpr auto dnf_filter11 = stmcpp::register_field<cr1_register, 8, 4>{11};

// 
constexpr auto dnf_filter12 = stmcpp::register_field<cr1_register, 8, 4>{12};

// 
constexpr auto dnf_filter13 = stmcpp::register_field<cr1_register, 8, 4>{13};

// 
constexpr auto dnf_filter14 = stmcpp::register_field<cr1_register, 8, 4>{14};

// 
constexpr auto dnf_filter15 = stmcpp::register_field<cr1_register, 8, 4>{15};

using dnf = stmcpp::register_field<cr1_register, 8, 4>;


// 
constexpr auto anfoff_enabled = stmcpp::register_field<cr1_register, 12, 1>{0};

// 
constexpr auto anfoff_disabled = stmcpp::register_field<cr1_register, 12, 1>{1};

using anfoff = stmcpp::register_field<cr1_register, 12, 1>;


// 
constexpr auto swrst = stmcpp::register_field<cr1_register, 13, 1>{1};

// 
constexpr auto txdmaen_disabled = stmcpp::register_field<cr1_register, 14, 1>{0};

// 
constexpr auto txdmaen_enabled = stmcpp::register_field<cr1_register, 14, 1>{1};

using txdmaen = stmcpp::register_field<cr1_register, 14, 1>;


// 
constexpr auto rxdmaen_disabled = stmcpp::register_field<cr1_register, 15, 1>{0};

// 
constexpr auto rxdmaen_enabled = stmcpp::register_field<cr1_register, 15, 1>{1};

using rxdmaen = stmcpp::register_field<cr1_register, 15, 1>;


// 
constexpr auto sbc_disabled = stmcpp::register_field<cr1_register, 16, 1>{0};

// 
constexpr auto sbc_enabled = stmcpp::register_field<cr1_register, 16, 1>{1};

using sbc = stmcpp::register_field<cr1_register, 16, 1>;


// 
constexpr auto nostretch_enabled = stmcpp::register_field<cr1_register, 17, 1>{0};

// 
constexpr auto nostretch_disabled = stmcpp::register_field<cr1_register, 17, 1>{1};

using nostretch = stmcpp::register_field<cr1_register, 17, 1>;


// 
constexpr auto wupen_disabled = stmcpp::register_field<cr1_register, 18, 1>{0};

// 
constexpr auto wupen_enabled = stmcpp::register_field<cr1_register, 18, 1>{1};

using wupen = stmcpp::register_field<cr1_register, 18, 1>;


// 
constexpr auto gcen_disabled = stmcpp::register_field<cr1_register, 19, 1>{0};

// 
constexpr auto gcen_enabled = stmcpp::register_field<cr1_register, 19, 1>{1};

using gcen = stmcpp::register_field<cr1_register, 19, 1>;


// 
constexpr auto smbhen_disabled = stmcpp::register_field<cr1_register, 20, 1>{0};

// 
constexpr auto smbhen_enabled = stmcpp::register_field<cr1_register, 20, 1>{1};

using smbhen = stmcpp::register_field<cr1_register, 20, 1>;


// 
constexpr auto smbden_disabled = stmcpp::register_field<cr1_register, 21, 1>{0};

// 
constexpr auto smbden_enabled = stmcpp::register_field<cr1_register, 21, 1>{1};

using smbden = stmcpp::register_field<cr1_register, 21, 1>;


// 
constexpr auto alerten_disabled = stmcpp::register_field<cr1_register, 22, 1>{0};

// 
constexpr auto alerten_enabled = stmcpp::register_field<cr1_register, 22, 1>{1};

using alerten = stmcpp::register_field<cr1_register, 22, 1>;


// 
constexpr auto pecen_disabled = stmcpp::register_field<cr1_register, 23, 1>{0};

// 
constexpr auto pecen_enabled = stmcpp::register_field<cr1_register, 23, 1>{1};

using pecen = stmcpp::register_field<cr1_register, 23, 1>;




} // namespace cr1_fields

constexpr auto cr1 = cr1_register{};


// 
using cr2_register = stmcpp::register_wrapper<0x40005404, 4, stmcpp::read_write_flag>;

namespace cr2_fields
{

// 
constexpr auto pecbyte_nopec = stmcpp::register_field<cr2_register, 26, 1>{0};

// 
constexpr auto pecbyte_pec = stmcpp::register_field<cr2_register, 26, 1>{1};

using pecbyte = stmcpp::register_field<cr2_register, 26, 1>;


// 
constexpr auto autoend_software = stmcpp::register_field<cr2_register, 25, 1>{0};

// 
constexpr auto autoend_automatic = stmcpp::register_field<cr2_register, 25, 1>{1};

using autoend = stmcpp::register_field<cr2_register, 25, 1>;


// 
constexpr auto reload_completed = stmcpp::register_field<cr2_register, 24, 1>{0};

// 
constexpr auto reload_notcompleted = stmcpp::register_field<cr2_register, 24, 1>{1};

using reload = stmcpp::register_field<cr2_register, 24, 1>;



// 
constexpr auto nack_ack = stmcpp::register_field<cr2_register, 15, 1>{0};

// 
constexpr auto nack_nack = stmcpp::register_field<cr2_register, 15, 1>{1};

using nack = stmcpp::register_field<cr2_register, 15, 1>;


// 
constexpr auto stop_nostop = stmcpp::register_field<cr2_register, 14, 1>{0};

// 
constexpr auto stop_stop = stmcpp::register_field<cr2_register, 14, 1>{1};

using stop = stmcpp::register_field<cr2_register, 14, 1>;


// 
constexpr auto start_nostart = stmcpp::register_field<cr2_register, 13, 1>{0};

// 
constexpr auto start_start = stmcpp::register_field<cr2_register, 13, 1>{1};

using start = stmcpp::register_field<cr2_register, 13, 1>;


// 
constexpr auto head10r_complete = stmcpp::register_field<cr2_register, 12, 1>{0};

// 
constexpr auto head10r_partial = stmcpp::register_field<cr2_register, 12, 1>{1};

using head10r = stmcpp::register_field<cr2_register, 12, 1>;


// 
constexpr auto add10_bit7 = stmcpp::register_field<cr2_register, 11, 1>{0};

// 
constexpr auto add10_bit10 = stmcpp::register_field<cr2_register, 11, 1>{1};

using add10 = stmcpp::register_field<cr2_register, 11, 1>;


// 
constexpr auto rd_wrn_write = stmcpp::register_field<cr2_register, 10, 1>{0};

// 
constexpr auto rd_wrn_read = stmcpp::register_field<cr2_register, 10, 1>{1};

using rd_wrn = stmcpp::register_field<cr2_register, 10, 1>;





} // namespace cr2_fields

constexpr auto cr2 = cr2_register{};


// 
using oar1_register = stmcpp::register_wrapper<0x40005408, 4, stmcpp::read_write_flag>;

namespace oar1_fields
{

// 
constexpr auto oa1mode_bit7 = stmcpp::register_field<oar1_register, 10, 1>{0};

// 
constexpr auto oa1mode_bit10 = stmcpp::register_field<oar1_register, 10, 1>{1};

using oa1mode = stmcpp::register_field<oar1_register, 10, 1>;


// 
constexpr auto oa1en_disabled = stmcpp::register_field<oar1_register, 15, 1>{0};

// 
constexpr auto oa1en_enabled = stmcpp::register_field<oar1_register, 15, 1>{1};

using oa1en = stmcpp::register_field<oar1_register, 15, 1>;





} // namespace oar1_fields

constexpr auto oar1 = oar1_register{};


// 
using oar2_register = stmcpp::register_wrapper<0x4000540c, 4, stmcpp::read_write_flag>;

namespace oar2_fields
{


// 
constexpr auto oa2msk_nomask = stmcpp::register_field<oar2_register, 8, 3>{0};

// 
constexpr auto oa2msk_mask1 = stmcpp::register_field<oar2_register, 8, 3>{1};

// 
constexpr auto oa2msk_mask2 = stmcpp::register_field<oar2_register, 8, 3>{2};

// 
constexpr auto oa2msk_mask3 = stmcpp::register_field<oar2_register, 8, 3>{3};

// 
constexpr auto oa2msk_mask4 = stmcpp::register_field<oar2_register, 8, 3>{4};

// 
constexpr auto oa2msk_mask5 = stmcpp::register_field<oar2_register, 8, 3>{5};

// 
constexpr auto oa2msk_mask6 = stmcpp::register_field<oar2_register, 8, 3>{6};

// 
constexpr auto oa2msk_mask7 = stmcpp::register_field<oar2_register, 8, 3>{7};

using oa2msk = stmcpp::register_field<oar2_register, 8, 3>;


// 
constexpr auto oa2en_disabled = stmcpp::register_field<oar2_register, 15, 1>{0};

// 
constexpr auto oa2en_enabled = stmcpp::register_field<oar2_register, 15, 1>{1};

using oa2en = stmcpp::register_field<oar2_register, 15, 1>;




} // namespace oar2_fields

constexpr auto oar2 = oar2_register{};


// 
using timingr_register = stmcpp::register_wrapper<0x40005410, 4, stmcpp::read_write_flag>;

namespace timingr_fields
{








} // namespace timingr_fields

constexpr auto timingr = timingr_register{};


// 
using timeoutr_register = stmcpp::register_wrapper<0x40005414, 4, stmcpp::read_write_flag>;

namespace timeoutr_fields
{


// 
constexpr auto tidle_disabled = stmcpp::register_field<timeoutr_register, 12, 1>{0};

// 
constexpr auto tidle_enabled = stmcpp::register_field<timeoutr_register, 12, 1>{1};

using tidle = stmcpp::register_field<timeoutr_register, 12, 1>;


// 
constexpr auto timouten_disabled = stmcpp::register_field<timeoutr_register, 15, 1>{0};

// 
constexpr auto timouten_enabled = stmcpp::register_field<timeoutr_register, 15, 1>{1};

using timouten = stmcpp::register_field<timeoutr_register, 15, 1>;



// 
constexpr auto texten_disabled = stmcpp::register_field<timeoutr_register, 31, 1>{0};

// 
constexpr auto texten_enabled = stmcpp::register_field<timeoutr_register, 31, 1>{1};

using texten = stmcpp::register_field<timeoutr_register, 31, 1>;




} // namespace timeoutr_fields

constexpr auto timeoutr = timeoutr_register{};


// 
using isr_register = stmcpp::register_wrapper<0x40005418, 4, readj-write>;

namespace isr_fields
{


// 
constexpr auto dir_write = stmcpp::register_field<isr_register, 16, 1>{0};

// 
constexpr auto dir_read = stmcpp::register_field<isr_register, 16, 1>{1};

using dir = stmcpp::register_field<isr_register, 16, 1>;


// 
constexpr auto busy_notbusy = stmcpp::register_field<isr_register, 15, 1>{0};

// 
constexpr auto busy_busy = stmcpp::register_field<isr_register, 15, 1>{1};

using busy = stmcpp::register_field<isr_register, 15, 1>;


// 
constexpr auto alert_noalert = stmcpp::register_field<isr_register, 13, 1>{0};

// 
constexpr auto alert_alert = stmcpp::register_field<isr_register, 13, 1>{1};

using alert = stmcpp::register_field<isr_register, 13, 1>;


// 
constexpr auto timeout_notimeout = stmcpp::register_field<isr_register, 12, 1>{0};

// 
constexpr auto timeout_timeout = stmcpp::register_field<isr_register, 12, 1>{1};

using timeout = stmcpp::register_field<isr_register, 12, 1>;


// 
constexpr auto pecerr_match = stmcpp::register_field<isr_register, 11, 1>{0};

// 
constexpr auto pecerr_nomatch = stmcpp::register_field<isr_register, 11, 1>{1};

using pecerr = stmcpp::register_field<isr_register, 11, 1>;


// 
constexpr auto ovr_nooverrun = stmcpp::register_field<isr_register, 10, 1>{0};

// 
constexpr auto ovr_overrun = stmcpp::register_field<isr_register, 10, 1>{1};

using ovr = stmcpp::register_field<isr_register, 10, 1>;


// 
constexpr auto arlo_notlost = stmcpp::register_field<isr_register, 9, 1>{0};

// 
constexpr auto arlo_lost = stmcpp::register_field<isr_register, 9, 1>{1};

using arlo = stmcpp::register_field<isr_register, 9, 1>;


// 
constexpr auto berr_noerror = stmcpp::register_field<isr_register, 8, 1>{0};

// 
constexpr auto berr_error = stmcpp::register_field<isr_register, 8, 1>{1};

using berr = stmcpp::register_field<isr_register, 8, 1>;


// 
constexpr auto tcr_notcomplete = stmcpp::register_field<isr_register, 7, 1>{0};

// 
constexpr auto tcr_complete = stmcpp::register_field<isr_register, 7, 1>{1};

using tcr = stmcpp::register_field<isr_register, 7, 1>;


// 
constexpr auto tc_notcomplete = stmcpp::register_field<isr_register, 6, 1>{0};

// 
constexpr auto tc_complete = stmcpp::register_field<isr_register, 6, 1>{1};

using tc = stmcpp::register_field<isr_register, 6, 1>;


// 
constexpr auto stopf_nostop = stmcpp::register_field<isr_register, 5, 1>{0};

// 
constexpr auto stopf_stop = stmcpp::register_field<isr_register, 5, 1>{1};

using stopf = stmcpp::register_field<isr_register, 5, 1>;


// 
constexpr auto nackf_nonack = stmcpp::register_field<isr_register, 4, 1>{0};

// 
constexpr auto nackf_nack = stmcpp::register_field<isr_register, 4, 1>{1};

using nackf = stmcpp::register_field<isr_register, 4, 1>;


// 
constexpr auto addr_notmatch = stmcpp::register_field<isr_register, 3, 1>{0};

// 
constexpr auto addr_match = stmcpp::register_field<isr_register, 3, 1>{1};

using addr = stmcpp::register_field<isr_register, 3, 1>;


// 
constexpr auto rxne_empty = stmcpp::register_field<isr_register, 2, 1>{0};

// 
constexpr auto rxne_notempty = stmcpp::register_field<isr_register, 2, 1>{1};

using rxne = stmcpp::register_field<isr_register, 2, 1>;


// 
constexpr auto txis_notempty = stmcpp::register_field<isr_register, 1, 1>{0};

// 
constexpr auto txis_empty = stmcpp::register_field<isr_register, 1, 1>{1};

using txis = stmcpp::register_field<isr_register, 1, 1>;


// 
constexpr auto txe_notempty = stmcpp::register_field<isr_register, 0, 1>{0};

// 
constexpr auto txe_empty = stmcpp::register_field<isr_register, 0, 1>{1};

using txe = stmcpp::register_field<isr_register, 0, 1>;




} // namespace isr_fields

constexpr auto isr = isr_register{};


// 
using icr_register = stmcpp::register_wrapper<0x4000541c, 4, stmcpp::write_only_flag>;

namespace icr_fields
{

// 
constexpr auto alertcf_clear = stmcpp::register_field<icr_register, 13, 1>{1};

using alertcf = stmcpp::register_field<icr_register, 13, 1>;


// 
constexpr auto timoutcf_clear = stmcpp::register_field<icr_register, 12, 1>{1};

using timoutcf = stmcpp::register_field<icr_register, 12, 1>;


// 
constexpr auto peccf_clear = stmcpp::register_field<icr_register, 11, 1>{1};

using peccf = stmcpp::register_field<icr_register, 11, 1>;


// 
constexpr auto ovrcf_clear = stmcpp::register_field<icr_register, 10, 1>{1};

using ovrcf = stmcpp::register_field<icr_register, 10, 1>;


// 
constexpr auto arlocf_clear = stmcpp::register_field<icr_register, 9, 1>{1};

using arlocf = stmcpp::register_field<icr_register, 9, 1>;


// 
constexpr auto berrcf_clear = stmcpp::register_field<icr_register, 8, 1>{1};

using berrcf = stmcpp::register_field<icr_register, 8, 1>;


// 
constexpr auto stopcf_clear = stmcpp::register_field<icr_register, 5, 1>{1};

using stopcf = stmcpp::register_field<icr_register, 5, 1>;


// 
constexpr auto nackcf_clear = stmcpp::register_field<icr_register, 4, 1>{1};

using nackcf = stmcpp::register_field<icr_register, 4, 1>;


// 
constexpr auto addrcf_clear = stmcpp::register_field<icr_register, 3, 1>{1};

using addrcf = stmcpp::register_field<icr_register, 3, 1>;




} // namespace icr_fields

constexpr auto icr = icr_register{};


// 
using pecr_register = stmcpp::register_wrapper<0x40005420, 4, stmcpp::read_only_flag>;

namespace pecr_fields
{




} // namespace pecr_fields

constexpr auto pecr = pecr_register{};


// 
using rxdr_register = stmcpp::register_wrapper<0x40005424, 4, stmcpp::read_only_flag>;

namespace rxdr_fields
{




} // namespace rxdr_fields

constexpr auto rxdr = rxdr_register{};


// 
using txdr_register = stmcpp::register_wrapper<0x40005428, 4, stmcpp::read_write_flag>;

namespace txdr_fields
{




} // namespace txdr_fields

constexpr auto txdr = txdr_register{};




} // namespace stmcpp::stm32f051::mi2c1