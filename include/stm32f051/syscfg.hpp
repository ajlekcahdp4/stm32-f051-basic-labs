
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

namespace stmcpp::stm32f051::msyscfg
{

// 
using cfgr1_register = stmcpp::register_wrapper<0x40010000, 4, stmcpp::read_write_flag>;

namespace cfgr1_fields
{

// 
constexpr auto mem_mode_mainflash = stmcpp::register_field<cfgr1_register, 0, 2>{0};

// 
constexpr auto mem_mode_systemflash = stmcpp::register_field<cfgr1_register, 0, 2>{1};

// 
constexpr auto mem_mode_mainflash2 = stmcpp::register_field<cfgr1_register, 0, 2>{2};

// 
constexpr auto mem_mode_sram = stmcpp::register_field<cfgr1_register, 0, 2>{3};

using mem_mode = stmcpp::register_field<cfgr1_register, 0, 2>;


// 
constexpr auto adc_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 8, 1>{0};

// 
constexpr auto adc_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 8, 1>{1};

using adc_dma_rmp = stmcpp::register_field<cfgr1_register, 8, 1>;


// 
constexpr auto usart1_tx_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 9, 1>{0};

// 
constexpr auto usart1_tx_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 9, 1>{1};

using usart1_tx_dma_rmp = stmcpp::register_field<cfgr1_register, 9, 1>;


// 
constexpr auto usart1_rx_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 10, 1>{0};

// 
constexpr auto usart1_rx_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 10, 1>{1};

using usart1_rx_dma_rmp = stmcpp::register_field<cfgr1_register, 10, 1>;


// 
constexpr auto tim16_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 11, 1>{0};

// 
constexpr auto tim16_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 11, 1>{1};

using tim16_dma_rmp = stmcpp::register_field<cfgr1_register, 11, 1>;


// 
constexpr auto tim17_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 12, 1>{0};

// 
constexpr auto tim17_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 12, 1>{1};

using tim17_dma_rmp = stmcpp::register_field<cfgr1_register, 12, 1>;


// 
constexpr auto i2c_pb6_fmp_standard = stmcpp::register_field<cfgr1_register, 16, 1>{0};

// 
constexpr auto i2c_pb6_fmp_fmp = stmcpp::register_field<cfgr1_register, 16, 1>{1};

using i2c_pb6_fmp = stmcpp::register_field<cfgr1_register, 16, 1>;


// 
constexpr auto i2c_pb7_fmp_standard = stmcpp::register_field<cfgr1_register, 17, 1>{0};

// 
constexpr auto i2c_pb7_fmp_fmp = stmcpp::register_field<cfgr1_register, 17, 1>{1};

using i2c_pb7_fmp = stmcpp::register_field<cfgr1_register, 17, 1>;


// 
constexpr auto i2c_pb8_fmp_standard = stmcpp::register_field<cfgr1_register, 18, 1>{0};

// 
constexpr auto i2c_pb8_fmp_fmp = stmcpp::register_field<cfgr1_register, 18, 1>{1};

using i2c_pb8_fmp = stmcpp::register_field<cfgr1_register, 18, 1>;


// 
constexpr auto i2c_pb9_fmp_standard = stmcpp::register_field<cfgr1_register, 19, 1>{0};

// 
constexpr auto i2c_pb9_fmp_fmp = stmcpp::register_field<cfgr1_register, 19, 1>{1};

using i2c_pb9_fmp = stmcpp::register_field<cfgr1_register, 19, 1>;


// 
constexpr auto i2c1_fmp_standard = stmcpp::register_field<cfgr1_register, 20, 1>{0};

// 
constexpr auto i2c1_fmp_fmp = stmcpp::register_field<cfgr1_register, 20, 1>{1};

using i2c1_fmp = stmcpp::register_field<cfgr1_register, 20, 1>;


// 
constexpr auto i2c2_fmp_standard = stmcpp::register_field<cfgr1_register, 21, 1>{0};

// 
constexpr auto i2c2_fmp_fmp = stmcpp::register_field<cfgr1_register, 21, 1>{1};

using i2c2_fmp = stmcpp::register_field<cfgr1_register, 21, 1>;


// 
constexpr auto spi2_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 24, 1>{0};

// 
constexpr auto spi2_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 24, 1>{1};

using spi2_dma_rmp = stmcpp::register_field<cfgr1_register, 24, 1>;


// 
constexpr auto usart2_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 25, 1>{0};

// 
constexpr auto usart2_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 25, 1>{1};

using usart2_dma_rmp = stmcpp::register_field<cfgr1_register, 25, 1>;


// 
constexpr auto usart3_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 26, 1>{0};

// 
constexpr auto usart3_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 26, 1>{1};

using usart3_dma_rmp = stmcpp::register_field<cfgr1_register, 26, 1>;


// 
constexpr auto i2c1_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 27, 1>{0};

// 
constexpr auto i2c1_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 27, 1>{1};

using i2c1_dma_rmp = stmcpp::register_field<cfgr1_register, 27, 1>;


// 
constexpr auto tim1_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 28, 1>{0};

// 
constexpr auto tim1_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 28, 1>{1};

using tim1_dma_rmp = stmcpp::register_field<cfgr1_register, 28, 1>;


// 
constexpr auto tim2_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 29, 1>{0};

// 
constexpr auto tim2_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 29, 1>{1};

using tim2_dma_rmp = stmcpp::register_field<cfgr1_register, 29, 1>;


// 
constexpr auto tim3_dma_rmp_notremapped = stmcpp::register_field<cfgr1_register, 30, 1>{0};

// 
constexpr auto tim3_dma_rmp_remapped = stmcpp::register_field<cfgr1_register, 30, 1>{1};

using tim3_dma_rmp = stmcpp::register_field<cfgr1_register, 30, 1>;


// 
constexpr auto ir_mod_tim16 = stmcpp::register_field<cfgr1_register, 6, 2>{0};

// 
constexpr auto ir_mod_usart1 = stmcpp::register_field<cfgr1_register, 6, 2>{1};

// 
constexpr auto ir_mod_usart4 = stmcpp::register_field<cfgr1_register, 6, 2>{2};

using ir_mod = stmcpp::register_field<cfgr1_register, 6, 2>;


// 
constexpr auto tim16_dma_rmp2_notalternateremapped = stmcpp::register_field<cfgr1_register, 13, 1>{0};

// 
constexpr auto tim16_dma_rmp2_alternateremapped = stmcpp::register_field<cfgr1_register, 13, 1>{1};

using tim16_dma_rmp2 = stmcpp::register_field<cfgr1_register, 13, 1>;


// 
constexpr auto tim17_dma_rmp2_notalternateremapped = stmcpp::register_field<cfgr1_register, 14, 1>{0};

// 
constexpr auto tim17_dma_rmp2_alternateremapped = stmcpp::register_field<cfgr1_register, 14, 1>{1};

using tim17_dma_rmp2 = stmcpp::register_field<cfgr1_register, 14, 1>;


// 
constexpr auto pa11_pa12_rmp_notremapped = stmcpp::register_field<cfgr1_register, 4, 1>{0};

// 
constexpr auto pa11_pa12_rmp_remapped = stmcpp::register_field<cfgr1_register, 4, 1>{1};

using pa11_pa12_rmp = stmcpp::register_field<cfgr1_register, 4, 1>;


// 
constexpr auto i2c_pa9_fmp_standard = stmcpp::register_field<cfgr1_register, 22, 1>{0};

// 
constexpr auto i2c_pa9_fmp_fmp = stmcpp::register_field<cfgr1_register, 22, 1>{1};

using i2c_pa9_fmp = stmcpp::register_field<cfgr1_register, 22, 1>;


// 
constexpr auto i2c_pa10_fmp_standard = stmcpp::register_field<cfgr1_register, 23, 1>{0};

// 
constexpr auto i2c_pa10_fmp_fmp = stmcpp::register_field<cfgr1_register, 23, 1>{1};

using i2c_pa10_fmp = stmcpp::register_field<cfgr1_register, 23, 1>;




} // namespace cfgr1_fields

constexpr auto cfgr1 = cfgr1_register{};


// 
using exticr1_register = stmcpp::register_wrapper<0x40010008, 4, stmcpp::read_write_flag>;

namespace exticr1_fields
{

// 
constexpr auto exti3_pe3 = stmcpp::register_field<exticr1_register, 12, 4>{4};

// 
constexpr auto exti3_pa3 = stmcpp::register_field<exticr1_register, 12, 4>{0};

// 
constexpr auto exti3_pb3 = stmcpp::register_field<exticr1_register, 12, 4>{1};

// 
constexpr auto exti3_pc3 = stmcpp::register_field<exticr1_register, 12, 4>{2};

// 
constexpr auto exti3_pd3 = stmcpp::register_field<exticr1_register, 12, 4>{3};

// 
constexpr auto exti3_pf3 = stmcpp::register_field<exticr1_register, 12, 4>{5};

using exti3 = stmcpp::register_field<exticr1_register, 12, 4>;


// 
constexpr auto exti2_pe2 = stmcpp::register_field<exticr1_register, 8, 4>{4};

// 
constexpr auto exti2_pa2 = stmcpp::register_field<exticr1_register, 8, 4>{0};

// 
constexpr auto exti2_pb2 = stmcpp::register_field<exticr1_register, 8, 4>{1};

// 
constexpr auto exti2_pc2 = stmcpp::register_field<exticr1_register, 8, 4>{2};

// 
constexpr auto exti2_pd2 = stmcpp::register_field<exticr1_register, 8, 4>{3};

// 
constexpr auto exti2_pf2 = stmcpp::register_field<exticr1_register, 8, 4>{5};

using exti2 = stmcpp::register_field<exticr1_register, 8, 4>;


// 
constexpr auto exti1_pe1 = stmcpp::register_field<exticr1_register, 4, 4>{4};

// 
constexpr auto exti1_pa1 = stmcpp::register_field<exticr1_register, 4, 4>{0};

// 
constexpr auto exti1_pb1 = stmcpp::register_field<exticr1_register, 4, 4>{1};

// 
constexpr auto exti1_pc1 = stmcpp::register_field<exticr1_register, 4, 4>{2};

// 
constexpr auto exti1_pd1 = stmcpp::register_field<exticr1_register, 4, 4>{3};

// 
constexpr auto exti1_pf1 = stmcpp::register_field<exticr1_register, 4, 4>{5};

using exti1 = stmcpp::register_field<exticr1_register, 4, 4>;


// 
constexpr auto exti0_pe0 = stmcpp::register_field<exticr1_register, 0, 4>{4};

// 
constexpr auto exti0_pa0 = stmcpp::register_field<exticr1_register, 0, 4>{0};

// 
constexpr auto exti0_pb0 = stmcpp::register_field<exticr1_register, 0, 4>{1};

// 
constexpr auto exti0_pc0 = stmcpp::register_field<exticr1_register, 0, 4>{2};

// 
constexpr auto exti0_pd0 = stmcpp::register_field<exticr1_register, 0, 4>{3};

// 
constexpr auto exti0_pf0 = stmcpp::register_field<exticr1_register, 0, 4>{5};

using exti0 = stmcpp::register_field<exticr1_register, 0, 4>;




} // namespace exticr1_fields

constexpr auto exticr1 = exticr1_register{};


// 
using exticr2_register = stmcpp::register_wrapper<0x4001000c, 4, stmcpp::read_write_flag>;

namespace exticr2_fields
{

// 
constexpr auto exti7_pe7 = stmcpp::register_field<exticr2_register, 12, 4>{4};

// 
constexpr auto exti7_pa7 = stmcpp::register_field<exticr2_register, 12, 4>{0};

// 
constexpr auto exti7_pb7 = stmcpp::register_field<exticr2_register, 12, 4>{1};

// 
constexpr auto exti7_pc7 = stmcpp::register_field<exticr2_register, 12, 4>{2};

// 
constexpr auto exti7_pd7 = stmcpp::register_field<exticr2_register, 12, 4>{3};

// 
constexpr auto exti7_pf7 = stmcpp::register_field<exticr2_register, 12, 4>{5};

using exti7 = stmcpp::register_field<exticr2_register, 12, 4>;


// 
constexpr auto exti6_pe6 = stmcpp::register_field<exticr2_register, 8, 4>{4};

// 
constexpr auto exti6_pa6 = stmcpp::register_field<exticr2_register, 8, 4>{0};

// 
constexpr auto exti6_pb6 = stmcpp::register_field<exticr2_register, 8, 4>{1};

// 
constexpr auto exti6_pc6 = stmcpp::register_field<exticr2_register, 8, 4>{2};

// 
constexpr auto exti6_pd6 = stmcpp::register_field<exticr2_register, 8, 4>{3};

// 
constexpr auto exti6_pf6 = stmcpp::register_field<exticr2_register, 8, 4>{5};

using exti6 = stmcpp::register_field<exticr2_register, 8, 4>;


// 
constexpr auto exti5_pe5 = stmcpp::register_field<exticr2_register, 4, 4>{4};

// 
constexpr auto exti5_pa5 = stmcpp::register_field<exticr2_register, 4, 4>{0};

// 
constexpr auto exti5_pb5 = stmcpp::register_field<exticr2_register, 4, 4>{1};

// 
constexpr auto exti5_pc5 = stmcpp::register_field<exticr2_register, 4, 4>{2};

// 
constexpr auto exti5_pd5 = stmcpp::register_field<exticr2_register, 4, 4>{3};

// 
constexpr auto exti5_pf5 = stmcpp::register_field<exticr2_register, 4, 4>{5};

using exti5 = stmcpp::register_field<exticr2_register, 4, 4>;


// 
constexpr auto exti4_pe4 = stmcpp::register_field<exticr2_register, 0, 4>{4};

// 
constexpr auto exti4_pa4 = stmcpp::register_field<exticr2_register, 0, 4>{0};

// 
constexpr auto exti4_pb4 = stmcpp::register_field<exticr2_register, 0, 4>{1};

// 
constexpr auto exti4_pc4 = stmcpp::register_field<exticr2_register, 0, 4>{2};

// 
constexpr auto exti4_pd4 = stmcpp::register_field<exticr2_register, 0, 4>{3};

// 
constexpr auto exti4_pf4 = stmcpp::register_field<exticr2_register, 0, 4>{5};

using exti4 = stmcpp::register_field<exticr2_register, 0, 4>;




} // namespace exticr2_fields

constexpr auto exticr2 = exticr2_register{};


// 
using exticr3_register = stmcpp::register_wrapper<0x40010010, 4, stmcpp::read_write_flag>;

namespace exticr3_fields
{

// 
constexpr auto exti11_pe11 = stmcpp::register_field<exticr3_register, 12, 4>{4};

// 
constexpr auto exti11_pa11 = stmcpp::register_field<exticr3_register, 12, 4>{0};

// 
constexpr auto exti11_pb11 = stmcpp::register_field<exticr3_register, 12, 4>{1};

// 
constexpr auto exti11_pc11 = stmcpp::register_field<exticr3_register, 12, 4>{2};

// 
constexpr auto exti11_pd11 = stmcpp::register_field<exticr3_register, 12, 4>{3};

// 
constexpr auto exti11_pf11 = stmcpp::register_field<exticr3_register, 12, 4>{5};

using exti11 = stmcpp::register_field<exticr3_register, 12, 4>;


// 
constexpr auto exti10_pe10 = stmcpp::register_field<exticr3_register, 8, 4>{4};

// 
constexpr auto exti10_pa10 = stmcpp::register_field<exticr3_register, 8, 4>{0};

// 
constexpr auto exti10_pb10 = stmcpp::register_field<exticr3_register, 8, 4>{1};

// 
constexpr auto exti10_pc10 = stmcpp::register_field<exticr3_register, 8, 4>{2};

// 
constexpr auto exti10_pd10 = stmcpp::register_field<exticr3_register, 8, 4>{3};

// 
constexpr auto exti10_pf10 = stmcpp::register_field<exticr3_register, 8, 4>{5};

using exti10 = stmcpp::register_field<exticr3_register, 8, 4>;


// 
constexpr auto exti9_pe9 = stmcpp::register_field<exticr3_register, 4, 4>{4};

// 
constexpr auto exti9_pa9 = stmcpp::register_field<exticr3_register, 4, 4>{0};

// 
constexpr auto exti9_pb9 = stmcpp::register_field<exticr3_register, 4, 4>{1};

// 
constexpr auto exti9_pc9 = stmcpp::register_field<exticr3_register, 4, 4>{2};

// 
constexpr auto exti9_pd9 = stmcpp::register_field<exticr3_register, 4, 4>{3};

// 
constexpr auto exti9_pf9 = stmcpp::register_field<exticr3_register, 4, 4>{5};

using exti9 = stmcpp::register_field<exticr3_register, 4, 4>;


// 
constexpr auto exti8_pe8 = stmcpp::register_field<exticr3_register, 0, 4>{4};

// 
constexpr auto exti8_pa8 = stmcpp::register_field<exticr3_register, 0, 4>{0};

// 
constexpr auto exti8_pb8 = stmcpp::register_field<exticr3_register, 0, 4>{1};

// 
constexpr auto exti8_pc8 = stmcpp::register_field<exticr3_register, 0, 4>{2};

// 
constexpr auto exti8_pd8 = stmcpp::register_field<exticr3_register, 0, 4>{3};

// 
constexpr auto exti8_pf8 = stmcpp::register_field<exticr3_register, 0, 4>{5};

using exti8 = stmcpp::register_field<exticr3_register, 0, 4>;




} // namespace exticr3_fields

constexpr auto exticr3 = exticr3_register{};


// 
using exticr4_register = stmcpp::register_wrapper<0x40010014, 4, stmcpp::read_write_flag>;

namespace exticr4_fields
{

// 
constexpr auto exti15_pe15 = stmcpp::register_field<exticr4_register, 12, 4>{4};

// 
constexpr auto exti15_pa15 = stmcpp::register_field<exticr4_register, 12, 4>{0};

// 
constexpr auto exti15_pb15 = stmcpp::register_field<exticr4_register, 12, 4>{1};

// 
constexpr auto exti15_pc15 = stmcpp::register_field<exticr4_register, 12, 4>{2};

// 
constexpr auto exti15_pd15 = stmcpp::register_field<exticr4_register, 12, 4>{3};

// 
constexpr auto exti15_pf15 = stmcpp::register_field<exticr4_register, 12, 4>{5};

using exti15 = stmcpp::register_field<exticr4_register, 12, 4>;


// 
constexpr auto exti14_pe14 = stmcpp::register_field<exticr4_register, 8, 4>{4};

// 
constexpr auto exti14_pa14 = stmcpp::register_field<exticr4_register, 8, 4>{0};

// 
constexpr auto exti14_pb14 = stmcpp::register_field<exticr4_register, 8, 4>{1};

// 
constexpr auto exti14_pc14 = stmcpp::register_field<exticr4_register, 8, 4>{2};

// 
constexpr auto exti14_pd14 = stmcpp::register_field<exticr4_register, 8, 4>{3};

// 
constexpr auto exti14_pf14 = stmcpp::register_field<exticr4_register, 8, 4>{5};

using exti14 = stmcpp::register_field<exticr4_register, 8, 4>;


// 
constexpr auto exti13_pe13 = stmcpp::register_field<exticr4_register, 4, 4>{4};

// 
constexpr auto exti13_pa13 = stmcpp::register_field<exticr4_register, 4, 4>{0};

// 
constexpr auto exti13_pb13 = stmcpp::register_field<exticr4_register, 4, 4>{1};

// 
constexpr auto exti13_pc13 = stmcpp::register_field<exticr4_register, 4, 4>{2};

// 
constexpr auto exti13_pd13 = stmcpp::register_field<exticr4_register, 4, 4>{3};

// 
constexpr auto exti13_pf13 = stmcpp::register_field<exticr4_register, 4, 4>{5};

using exti13 = stmcpp::register_field<exticr4_register, 4, 4>;


// 
constexpr auto exti12_pe12 = stmcpp::register_field<exticr4_register, 0, 4>{4};

// 
constexpr auto exti12_pa12 = stmcpp::register_field<exticr4_register, 0, 4>{0};

// 
constexpr auto exti12_pb12 = stmcpp::register_field<exticr4_register, 0, 4>{1};

// 
constexpr auto exti12_pc12 = stmcpp::register_field<exticr4_register, 0, 4>{2};

// 
constexpr auto exti12_pd12 = stmcpp::register_field<exticr4_register, 0, 4>{3};

// 
constexpr auto exti12_pf12 = stmcpp::register_field<exticr4_register, 0, 4>{5};

using exti12 = stmcpp::register_field<exticr4_register, 0, 4>;




} // namespace exticr4_fields

constexpr auto exticr4 = exticr4_register{};


// 
using cfgr2_register = stmcpp::register_wrapper<0x40010018, 4, stmcpp::read_write_flag>;

namespace cfgr2_fields
{

// 
constexpr auto sram_pef_noparityerror = stmcpp::register_field<cfgr2_register, 8, 1>{0};

// 
constexpr auto sram_pef_parityerrordetected = stmcpp::register_field<cfgr2_register, 8, 1>{1};

// 
constexpr auto sram_pef_clear = stmcpp::register_field<cfgr2_register, 8, 1>{1};

using sram_pef = stmcpp::register_field<cfgr2_register, 8, 1>;


// 
constexpr auto pvd_lock_disconnected = stmcpp::register_field<cfgr2_register, 2, 1>{0};

// 
constexpr auto pvd_lock_connected = stmcpp::register_field<cfgr2_register, 2, 1>{1};

using pvd_lock = stmcpp::register_field<cfgr2_register, 2, 1>;


// 
constexpr auto sram_parity_lock_disconnected = stmcpp::register_field<cfgr2_register, 1, 1>{0};

// 
constexpr auto sram_parity_lock_connected = stmcpp::register_field<cfgr2_register, 1, 1>{1};

using sram_parity_lock = stmcpp::register_field<cfgr2_register, 1, 1>;


// 
constexpr auto lockup_lock_disconnected = stmcpp::register_field<cfgr2_register, 0, 1>{0};

// 
constexpr auto lockup_lock_connected = stmcpp::register_field<cfgr2_register, 0, 1>{1};

using lockup_lock = stmcpp::register_field<cfgr2_register, 0, 1>;




} // namespace cfgr2_fields

constexpr auto cfgr2 = cfgr2_register{};




} // namespace stmcpp::stm32f051::msyscfg