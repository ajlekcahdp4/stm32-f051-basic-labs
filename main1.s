	.cpu arm7tdmi
	.arch armv4t
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"main.cc"
	.text
	.section	.text._ZN4mcal5gpioc5moder4addrEv,"axG",%progbits,_ZN4mcal5gpioc5moder4addrEv,comdat
	.align	2
	.weak	_ZN4mcal5gpioc5moder4addrEv
	.syntax unified
	.arm
	.type	_ZN4mcal5gpioc5moder4addrEv, %function
_ZN4mcal5gpioc5moder4addrEv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	ldr	r3, .L3
	mov	r0, r3
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
.L4:
	.align	2
.L3:
	.word	1207961600
	.size	_ZN4mcal5gpioc5moder4addrEv, .-_ZN4mcal5gpioc5moder4addrEv
	.section	.text._ZN4mcal5gpioc5moder13conf_pc8_modeEv,"axG",%progbits,_ZN4mcal5gpioc5moder13conf_pc8_modeEv,comdat
	.align	2
	.weak	_ZN4mcal5gpioc5moder13conf_pc8_modeEv
	.syntax unified
	.arm
	.type	_ZN4mcal5gpioc5moder13conf_pc8_modeEv, %function
_ZN4mcal5gpioc5moder13conf_pc8_modeEv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	_ZN4mcal5gpioc5moder4addrEv
	mov	r3, r0
	ldr	r2, [r3]
	orr	r2, r2, #65536
	str	r2, [r3]
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	_ZN4mcal5gpioc5moder13conf_pc8_modeEv, .-_ZN4mcal5gpioc5moder13conf_pc8_modeEv
	.section	.text._ZN4mcal5gpioc5moder13conf_pc9_modeEv,"axG",%progbits,_ZN4mcal5gpioc5moder13conf_pc9_modeEv,comdat
	.align	2
	.weak	_ZN4mcal5gpioc5moder13conf_pc9_modeEv
	.syntax unified
	.arm
	.type	_ZN4mcal5gpioc5moder13conf_pc9_modeEv, %function
_ZN4mcal5gpioc5moder13conf_pc9_modeEv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	_ZN4mcal5gpioc5moder4addrEv
	mov	r3, r0
	ldr	r2, [r3]
	orr	r2, r2, #262144
	str	r2, [r3]
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	_ZN4mcal5gpioc5moder13conf_pc9_modeEv, .-_ZN4mcal5gpioc5moder13conf_pc9_modeEv
	.section	.text._ZN4mcal5gpioc3odr4addrEv,"axG",%progbits,_ZN4mcal5gpioc3odr4addrEv,comdat
	.align	2
	.weak	_ZN4mcal5gpioc3odr4addrEv
	.syntax unified
	.arm
	.type	_ZN4mcal5gpioc3odr4addrEv, %function
_ZN4mcal5gpioc3odr4addrEv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	ldr	r3, .L9
	mov	r0, r3
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
.L10:
	.align	2
.L9:
	.word	1207961620
	.size	_ZN4mcal5gpioc3odr4addrEv, .-_ZN4mcal5gpioc3odr4addrEv
	.section	.text._ZN4mcal5gpioc3odr10enable_pc8Ev,"axG",%progbits,_ZN4mcal5gpioc3odr10enable_pc8Ev,comdat
	.align	2
	.weak	_ZN4mcal5gpioc3odr10enable_pc8Ev
	.syntax unified
	.arm
	.type	_ZN4mcal5gpioc3odr10enable_pc8Ev, %function
_ZN4mcal5gpioc3odr10enable_pc8Ev:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	_ZN4mcal5gpioc3odr4addrEv
	mov	r3, r0
	ldr	r2, [r3]
	orr	r2, r2, #256
	str	r2, [r3]
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	_ZN4mcal5gpioc3odr10enable_pc8Ev, .-_ZN4mcal5gpioc3odr10enable_pc8Ev
	.section	.text._ZN4mcal5gpioc3odr11disable_pc8Ev,"axG",%progbits,_ZN4mcal5gpioc3odr11disable_pc8Ev,comdat
	.align	2
	.weak	_ZN4mcal5gpioc3odr11disable_pc8Ev
	.syntax unified
	.arm
	.type	_ZN4mcal5gpioc3odr11disable_pc8Ev, %function
_ZN4mcal5gpioc3odr11disable_pc8Ev:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	_ZN4mcal5gpioc3odr4addrEv
	mov	r3, r0
	ldr	r2, [r3]
	bic	r2, r2, #256
	str	r2, [r3]
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	_ZN4mcal5gpioc3odr11disable_pc8Ev, .-_ZN4mcal5gpioc3odr11disable_pc8Ev
	.section	.text._ZN4mcal5gpioc3odr10enable_pc9Ev,"axG",%progbits,_ZN4mcal5gpioc3odr10enable_pc9Ev,comdat
	.align	2
	.weak	_ZN4mcal5gpioc3odr10enable_pc9Ev
	.syntax unified
	.arm
	.type	_ZN4mcal5gpioc3odr10enable_pc9Ev, %function
_ZN4mcal5gpioc3odr10enable_pc9Ev:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	_ZN4mcal5gpioc3odr4addrEv
	mov	r3, r0
	ldr	r2, [r3]
	orr	r2, r2, #512
	str	r2, [r3]
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	_ZN4mcal5gpioc3odr10enable_pc9Ev, .-_ZN4mcal5gpioc3odr10enable_pc9Ev
	.section	.text._ZN4mcal5gpioc3odr11disable_pc9Ev,"axG",%progbits,_ZN4mcal5gpioc3odr11disable_pc9Ev,comdat
	.align	2
	.weak	_ZN4mcal5gpioc3odr11disable_pc9Ev
	.syntax unified
	.arm
	.type	_ZN4mcal5gpioc3odr11disable_pc9Ev, %function
_ZN4mcal5gpioc3odr11disable_pc9Ev:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	_ZN4mcal5gpioc3odr4addrEv
	mov	r3, r0
	ldr	r2, [r3]
	bic	r2, r2, #512
	str	r2, [r3]
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	_ZN4mcal5gpioc3odr11disable_pc9Ev, .-_ZN4mcal5gpioc3odr11disable_pc9Ev
	.section	.text._ZN4mcal3rcc6ahbenr4addrEv,"axG",%progbits,_ZN4mcal3rcc6ahbenr4addrEv,comdat
	.align	2
	.weak	_ZN4mcal3rcc6ahbenr4addrEv
	.syntax unified
	.arm
	.type	_ZN4mcal3rcc6ahbenr4addrEv, %function
_ZN4mcal3rcc6ahbenr4addrEv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	ldr	r3, .L17
	mov	r0, r3
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
.L18:
	.align	2
.L17:
	.word	1073877012
	.size	_ZN4mcal3rcc6ahbenr4addrEv, .-_ZN4mcal3rcc6ahbenr4addrEv
	.section	.text._ZN4mcal3rcc6ahbenr21enable_gpioc_clockingEv,"axG",%progbits,_ZN4mcal3rcc6ahbenr21enable_gpioc_clockingEv,comdat
	.align	2
	.weak	_ZN4mcal3rcc6ahbenr21enable_gpioc_clockingEv
	.syntax unified
	.arm
	.type	_ZN4mcal3rcc6ahbenr21enable_gpioc_clockingEv, %function
_ZN4mcal3rcc6ahbenr21enable_gpioc_clockingEv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	_ZN4mcal3rcc6ahbenr4addrEv
	mov	r3, r0
	ldr	r2, [r3]
	orr	r2, r2, #524288
	str	r2, [r3]
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	_ZN4mcal3rcc6ahbenr21enable_gpioc_clockingEv, .-_ZN4mcal3rcc6ahbenr21enable_gpioc_clockingEv
	.section	.text._ZN9app_blink11application15board_gpio_initEv,"axG",%progbits,_ZN9app_blink11application15board_gpio_initEv,comdat
	.align	2
	.weak	_ZN9app_blink11application15board_gpio_initEv
	.syntax unified
	.arm
	.type	_ZN9app_blink11application15board_gpio_initEv, %function
_ZN9app_blink11application15board_gpio_initEv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	str	r0, [fp, #-8]
	bl	_ZN4mcal3rcc6ahbenr21enable_gpioc_clockingEv
	bl	_ZN4mcal5gpioc5moder13conf_pc8_modeEv
	bl	_ZN4mcal5gpioc5moder13conf_pc9_modeEv
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	_ZN9app_blink11application15board_gpio_initEv, .-_ZN9app_blink11application15board_gpio_initEv
	.section	.text._ZN9app_blink11application8delay_msEm,"axG",%progbits,_ZN9app_blink11application8delay_msEm,comdat
	.align	2
	.weak	_ZN9app_blink11application8delay_msEm
	.syntax unified
	.arm
	.type	_ZN9app_blink11application8delay_msEm, %function
_ZN9app_blink11application8delay_msEm:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #20
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L22
.L23:
	.syntax divided
@ 33 "01-blink/include/app.hpp" 1
	nop
@ 0 "" 2
	.arm
	.syntax unified
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L22:
	ldr	r2, [fp, #-20]
	mov	r3, r2
	lsl	r3, r3, #4
	sub	r3, r3, r2
	lsl	r3, r3, #5
	mov	r2, r3
	ldr	r3, [fp, #-8]
	cmp	r3, r2
	bcc	.L23
	nop
	nop
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
	.size	_ZN9app_blink11application8delay_msEm, .-_ZN9app_blink11application8delay_msEm
	.section	.text._ZN9app_blink11applicationC2Ev,"axG",%progbits,_ZN9app_blink11applicationC5Ev,comdat
	.align	2
	.weak	_ZN9app_blink11applicationC2Ev
	.syntax unified
	.arm
	.type	_ZN9app_blink11applicationC2Ev, %function
_ZN9app_blink11applicationC2Ev:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #12
	str	r0, [fp, #-8]
	ldr	r3, [fp, #-8]
	mov	r0, r3
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
	.size	_ZN9app_blink11applicationC2Ev, .-_ZN9app_blink11applicationC2Ev
	.weak	_ZN9app_blink11applicationC1Ev
	.set	_ZN9app_blink11applicationC1Ev,_ZN9app_blink11applicationC2Ev
	.section	.text._ZN9app_blink11application8run_loopEv,"axG",%progbits,_ZN9app_blink11application8run_loopEv,comdat
	.align	2
	.weak	_ZN9app_blink11application8run_loopEv
	.syntax unified
	.arm
	.type	_ZN9app_blink11application8run_loopEv, %function
_ZN9app_blink11application8run_loopEv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	str	r0, [fp, #-8]
	ldr	r0, [fp, #-8]
	bl	_ZN9app_blink11application15board_gpio_initEv
.L27:
	bl	_ZN4mcal5gpioc3odr10enable_pc8Ev
	mov	r1, #1000
	ldr	r0, [fp, #-8]
	bl	_ZN9app_blink11application8delay_msEm
	bl	_ZN4mcal5gpioc3odr11disable_pc8Ev
	bl	_ZN4mcal5gpioc3odr10enable_pc9Ev
	mov	r1, #1000
	ldr	r0, [fp, #-8]
	bl	_ZN9app_blink11application8delay_msEm
	bl	_ZN4mcal5gpioc3odr11disable_pc9Ev
	b	.L27
	.size	_ZN9app_blink11application8run_loopEv, .-_ZN9app_blink11application8run_loopEv
	.text
	.align	2
	.global	main
	.syntax unified
	.arm
	.type	main, %function
main:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	sub	r3, fp, #8
	mov	r0, r3
	bl	_ZN9app_blink11applicationC1Ev
	sub	r3, fp, #8
	mov	r0, r3
	bl	_ZN9app_blink11application8run_loopEv
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	main, .-main
	.ident	"GCC: (Arch Repository) 12.2.0"
