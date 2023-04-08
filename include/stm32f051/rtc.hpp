
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

namespace stmcpp::stm32f051::mrtc
{

// 
using tr_register = stmcpp::register_wrapper<0x40002800, 4, stmcpp::read_write_flag>;

namespace tr_fields
{

// 
constexpr auto pm = stmcpp::register_field<tr_register, 22, 1>{1};









} // namespace tr_fields

constexpr auto tr = tr_register{};


// 
using dr_register = stmcpp::register_wrapper<0x40002804, 4, stmcpp::read_write_flag>;

namespace dr_fields
{




// 
constexpr auto mt = stmcpp::register_field<dr_register, 12, 1>{1};






} // namespace dr_fields

constexpr auto dr = dr_register{};


// 
using cr_register = stmcpp::register_wrapper<0x40002808, 4, readj-write>;

namespace cr_fields
{


// 
constexpr auto tsedge = stmcpp::register_field<cr_register, 3, 1>{1};

// 
constexpr auto refckon = stmcpp::register_field<cr_register, 4, 1>{1};

// 
constexpr auto bypshad = stmcpp::register_field<cr_register, 5, 1>{1};

// 
constexpr auto fmt = stmcpp::register_field<cr_register, 6, 1>{1};

// 
constexpr auto alrae = stmcpp::register_field<cr_register, 8, 1>{1};

// 
constexpr auto wute = stmcpp::register_field<cr_register, 10, 1>{1};

// 
constexpr auto tse = stmcpp::register_field<cr_register, 11, 1>{1};

// 
constexpr auto alraie = stmcpp::register_field<cr_register, 12, 1>{1};

// 
constexpr auto wutie = stmcpp::register_field<cr_register, 14, 1>{1};

// 
constexpr auto tsie = stmcpp::register_field<cr_register, 15, 1>{1};

// 
constexpr auto add1h = stmcpp::register_field<cr_register, 16, 1>{1};

// 
constexpr auto sub1h = stmcpp::register_field<cr_register, 17, 1>{1};

// 
constexpr auto bkp = stmcpp::register_field<cr_register, 18, 1>{1};

// 
constexpr auto cosel = stmcpp::register_field<cr_register, 19, 1>{1};

// 
constexpr auto pol = stmcpp::register_field<cr_register, 20, 1>{1};


// 
constexpr auto coe = stmcpp::register_field<cr_register, 23, 1>{1};



} // namespace cr_fields

constexpr auto cr = cr_register{};


// 
using isr_register = stmcpp::register_wrapper<0x4000280c, 4, readj-write>;

namespace isr_fields
{

// 
constexpr auto alrawf = stmcpp::register_field<isr_register, 0, 1>{1};

// 
constexpr auto wutwf = stmcpp::register_field<isr_register, 2, 1>{1};

// 
constexpr auto shpf = stmcpp::register_field<isr_register, 3, 1>{1};

// 
constexpr auto inits = stmcpp::register_field<isr_register, 4, 1>{1};

// 
constexpr auto rsf = stmcpp::register_field<isr_register, 5, 1>{1};

// 
constexpr auto initf = stmcpp::register_field<isr_register, 6, 1>{1};

// 
constexpr auto init = stmcpp::register_field<isr_register, 7, 1>{1};

// 
constexpr auto alraf = stmcpp::register_field<isr_register, 8, 1>{1};

// 
constexpr auto wutf = stmcpp::register_field<isr_register, 10, 1>{1};

// 
constexpr auto tsf = stmcpp::register_field<isr_register, 11, 1>{1};

// 
constexpr auto tsovf = stmcpp::register_field<isr_register, 12, 1>{1};

// 
constexpr auto tamp1f = stmcpp::register_field<isr_register, 13, 1>{1};

// 
constexpr auto tamp2f = stmcpp::register_field<isr_register, 14, 1>{1};

// 
constexpr auto tamp3f = stmcpp::register_field<isr_register, 15, 1>{1};

// 
constexpr auto recalpf = stmcpp::register_field<isr_register, 16, 1>{1};



} // namespace isr_fields

constexpr auto isr = isr_register{};


// 
using prer_register = stmcpp::register_wrapper<0x40002810, 4, stmcpp::read_write_flag>;

namespace prer_fields
{





} // namespace prer_fields

constexpr auto prer = prer_register{};


// 
using alrmar_register = stmcpp::register_wrapper<0x4000281c, 4, stmcpp::read_write_flag>;

namespace alrmar_fields
{

// 
constexpr auto msk4 = stmcpp::register_field<alrmar_register, 31, 1>{1};

// 
constexpr auto wdsel = stmcpp::register_field<alrmar_register, 30, 1>{1};



// 
constexpr auto msk3 = stmcpp::register_field<alrmar_register, 23, 1>{1};

// 
constexpr auto pm = stmcpp::register_field<alrmar_register, 22, 1>{1};



// 
constexpr auto msk2 = stmcpp::register_field<alrmar_register, 15, 1>{1};



// 
constexpr auto msk1 = stmcpp::register_field<alrmar_register, 7, 1>{1};





} // namespace alrmar_fields

constexpr auto alrmar = alrmar_register{};


// 
using wpr_register = stmcpp::register_wrapper<0x40002824, 4, stmcpp::write_only_flag>;

namespace wpr_fields
{




} // namespace wpr_fields

constexpr auto wpr = wpr_register{};


// 
using ssr_register = stmcpp::register_wrapper<0x40002828, 4, stmcpp::read_only_flag>;

namespace ssr_fields
{




} // namespace ssr_fields

constexpr auto ssr = ssr_register{};


// 
using shiftr_register = stmcpp::register_wrapper<0x4000282c, 4, stmcpp::write_only_flag>;

namespace shiftr_fields
{

// 
constexpr auto add1s = stmcpp::register_field<shiftr_register, 31, 1>{1};




} // namespace shiftr_fields

constexpr auto shiftr = shiftr_register{};


// 
using tstr_register = stmcpp::register_wrapper<0x40002830, 4, stmcpp::read_only_flag>;

namespace tstr_fields
{

// 
constexpr auto pm = stmcpp::register_field<tstr_register, 22, 1>{1};









} // namespace tstr_fields

constexpr auto tstr = tstr_register{};


// 
using tsdr_register = stmcpp::register_wrapper<0x40002834, 4, stmcpp::read_only_flag>;

namespace tsdr_fields
{


// 
constexpr auto mt = stmcpp::register_field<tsdr_register, 12, 1>{1};






} // namespace tsdr_fields

constexpr auto tsdr = tsdr_register{};


// 
using tsssr_register = stmcpp::register_wrapper<0x40002838, 4, stmcpp::read_only_flag>;

namespace tsssr_fields
{




} // namespace tsssr_fields

constexpr auto tsssr = tsssr_register{};


// 
using calr_register = stmcpp::register_wrapper<0x4000283c, 4, stmcpp::read_write_flag>;

namespace calr_fields
{

// 
constexpr auto calp = stmcpp::register_field<calr_register, 15, 1>{1};

// 
constexpr auto calw8 = stmcpp::register_field<calr_register, 14, 1>{1};

// 
constexpr auto calw16 = stmcpp::register_field<calr_register, 13, 1>{1};




} // namespace calr_fields

constexpr auto calr = calr_register{};


// 
using tafcr_register = stmcpp::register_wrapper<0x40002840, 4, stmcpp::read_write_flag>;

namespace tafcr_fields
{

// 
constexpr auto pc15mode = stmcpp::register_field<tafcr_register, 23, 1>{1};

// 
constexpr auto pc15value = stmcpp::register_field<tafcr_register, 22, 1>{1};

// 
constexpr auto pc14mode = stmcpp::register_field<tafcr_register, 21, 1>{1};

// 
constexpr auto pc14value = stmcpp::register_field<tafcr_register, 20, 1>{1};

// 
constexpr auto pc13mode = stmcpp::register_field<tafcr_register, 19, 1>{1};

// 
constexpr auto pc13value = stmcpp::register_field<tafcr_register, 18, 1>{1};

// 
constexpr auto tamp_pudis = stmcpp::register_field<tafcr_register, 15, 1>{1};




// 
constexpr auto tampts = stmcpp::register_field<tafcr_register, 7, 1>{1};

// 
constexpr auto tamp3trg = stmcpp::register_field<tafcr_register, 6, 1>{1};

// 
constexpr auto tamp3e = stmcpp::register_field<tafcr_register, 5, 1>{1};

// 
constexpr auto tamp2_trg = stmcpp::register_field<tafcr_register, 4, 1>{1};

// 
constexpr auto tamp2e = stmcpp::register_field<tafcr_register, 3, 1>{1};

// 
constexpr auto tampie = stmcpp::register_field<tafcr_register, 2, 1>{1};

// 
constexpr auto tamp1trg = stmcpp::register_field<tafcr_register, 1, 1>{1};

// 
constexpr auto tamp1e = stmcpp::register_field<tafcr_register, 0, 1>{1};



} // namespace tafcr_fields

constexpr auto tafcr = tafcr_register{};


// 
using alrmassr_register = stmcpp::register_wrapper<0x40002844, 4, stmcpp::read_write_flag>;

namespace alrmassr_fields
{





} // namespace alrmassr_fields

constexpr auto alrmassr = alrmassr_register{};


// 
using wutr_register = stmcpp::register_wrapper<0x40002814, 4, stmcpp::read_write_flag>;

namespace wutr_fields
{




} // namespace wutr_fields

constexpr auto wutr = wutr_register{};


// 
using bkp0r_register = stmcpp::register_wrapper<0x40002850, 4, stmcpp::read_write_flag>;

namespace bkp0r_fields
{




} // namespace bkp0r_fields

constexpr auto bkp0r = bkp0r_register{};


// 
using bkp1r_register = stmcpp::register_wrapper<0x40002854, 4, stmcpp::read_write_flag>;

namespace bkp1r_fields
{




} // namespace bkp1r_fields

constexpr auto bkp1r = bkp1r_register{};


// 
using bkp2r_register = stmcpp::register_wrapper<0x40002858, 4, stmcpp::read_write_flag>;

namespace bkp2r_fields
{




} // namespace bkp2r_fields

constexpr auto bkp2r = bkp2r_register{};


// 
using bkp3r_register = stmcpp::register_wrapper<0x4000285c, 4, stmcpp::read_write_flag>;

namespace bkp3r_fields
{




} // namespace bkp3r_fields

constexpr auto bkp3r = bkp3r_register{};


// 
using bkp4r_register = stmcpp::register_wrapper<0x40002860, 4, stmcpp::read_write_flag>;

namespace bkp4r_fields
{




} // namespace bkp4r_fields

constexpr auto bkp4r = bkp4r_register{};




} // namespace stmcpp::stm32f051::mrtc