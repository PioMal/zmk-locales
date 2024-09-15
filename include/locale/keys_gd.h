/*
 * Localized Keys for Scottish Gaelic
 *
 * This file was generated from data with the following license:
 *
 * UNICODE, INC. LICENSE AGREEMENT - DATA FILES AND SOFTWARE
 * 
 * See Terms of Use <https://www.unicode.org/copyright.html>
 * for definitions of Unicode Inc.’s Data Files and Software.
 * 
 * NOTICE TO USER: Carefully read the following legal agreement.
 * BY DOWNLOADING, INSTALLING, COPYING OR OTHERWISE USING UNICODE INC.'S
 * DATA FILES ("DATA FILES"), AND/OR SOFTWARE ("SOFTWARE"),
 * YOU UNEQUIVOCALLY ACCEPT, AND AGREE TO BE BOUND BY, ALL OF THE
 * TERMS AND CONDITIONS OF THIS AGREEMENT.
 * IF YOU DO NOT AGREE, DO NOT DOWNLOAD, INSTALL, COPY, DISTRIBUTE OR USE
 * THE DATA FILES OR SOFTWARE.
 * 
 * COPYRIGHT AND PERMISSION NOTICE
 * 
 * Copyright © 1991-2023 Unicode, Inc. All rights reserved.
 * Distributed under the Terms of Use in https://www.unicode.org/copyright.html.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of the Unicode data files and any associated documentation
 * (the "Data Files") or Unicode software and any associated documentation
 * (the "Software") to deal in the Data Files or Software
 * without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, and/or sell copies of
 * the Data Files or Software, and to permit persons to whom the Data Files
 * or Software are furnished to do so, provided that either
 * (a) this copyright and permission notice appear with all copies
 * of the Data Files or Software, or
 * (b) this copyright and permission notice appear in associated
 * Documentation.
 * 
 * THE DATA FILES AND SOFTWARE ARE PROVIDED "AS IS", WITHOUT WARRANTY OF
 * ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT OF THIRD PARTY RIGHTS.
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS INCLUDED IN THIS
 * NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT OR CONSEQUENTIAL
 * DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THE DATA FILES OR SOFTWARE.
 * 
 * Except as contained in this notice, the name of a copyright holder
 * shall not be used in advertising or otherwise to promote the sale,
 * use or other dealings in these Data Files or Software without prior
 * written authorization of the copyright holder.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define GD_ESCAPE_CHARACTER (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

#define GD_FILE_SEPARATOR (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))

#define GD_GROUP_SEPARATOR (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

#define GD_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define GD_EXCLAMATION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define GD_EXCL (GD_EXCLAMATION)

/* " */
#define GD_DOUBLE_QUOTES (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define GD_DQT (GD_DOUBLE_QUOTES)

/* # */
#define GD_HASH (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))
#define GD_POUND (GD_HASH)

/* $ */
#define GD_DOLLAR (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define GD_DLLR (GD_DOLLAR)

/* % */
#define GD_PERCENT (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define GD_PRCNT (GD_PERCENT)

/* & */
#define GD_AMPERSAND (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define GD_AMPS (GD_AMPERSAND)

/* ' */
#define GD_SINGLE_QUOTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))
#define GD_SQT (GD_SINGLE_QUOTE)
#define GD_APOSTROPHE (GD_SINGLE_QUOTE)
#define GD_APOS (GD_SINGLE_QUOTE)

/* ( */
#define GD_LEFT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define GD_LPAR (GD_LEFT_PARENTHESIS)

/* ) */
#define GD_RIGHT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define GD_RPAR (GD_RIGHT_PARENTHESIS)

/* * */
#define GD_ASTERISK (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define GD_ASTRK (GD_ASTERISK)
#define GD_STAR (GD_ASTERISK)

/* + */
#define GD_PLUS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* , */
#define GD_COMMA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define GD_MINUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))

/* . */
#define GD_PERIOD (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define GD_DOT (GD_PERIOD)

/* / */
#define GD_SLASH (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))
#define GD_FSLH (GD_SLASH)

/* 0 */
#define GD_N0 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define GD_N1 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define GD_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define GD_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define GD_N4 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define GD_N5 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define GD_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define GD_N7 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define GD_N8 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define GD_N9 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* : */
#define GD_COLON (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))

/* ; */
#define GD_SEMICOLON (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))
#define GD_SEMI (GD_SEMICOLON)

/* < */
#define GD_LESS_THAN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define GD_LT (GD_LESS_THAN)

/* = */
#define GD_EQUAL (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* > */
#define GD_GREATER_THAN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))
#define GD_GT (GD_GREATER_THAN)

/* ? */
#define GD_QUESTION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))
#define GD_QMARK (GD_QUESTION)

/* @ */
#define GD_AT_SIGN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))
#define GD_AT (GD_AT_SIGN)

/* [ */
#define GD_LEFT_BRACKET (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))
#define GD_LBKT (GD_LEFT_BRACKET)

/* \ */
#define GD_BACKSLASH (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define GD_BSLH (GD_BACKSLASH)

/* ] */
#define GD_RIGHT_BRACKET (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))
#define GD_RBKT (GD_RIGHT_BRACKET)

/* ^ */
#define GD_CARET (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))

/* _ */
#define GD_UNDERSCORE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define GD_UNDER (GD_UNDERSCORE)

/* ` */
#define GD_GRAVE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))

/* a */
#define GD_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* b */
#define GD_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define GD_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define GD_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define GD_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define GD_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define GD_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define GD_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define GD_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define GD_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define GD_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define GD_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define GD_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* n */
#define GD_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define GD_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define GD_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define GD_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* r */
#define GD_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define GD_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define GD_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define GD_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define GD_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define GD_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* x */
#define GD_X (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* y */
#define GD_Y (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* z */
#define GD_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* { */
#define GD_LEFT_BRACE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))
#define GD_LBRC (GD_LEFT_BRACE)

/* | */
#define GD_PIPE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))

/* } */
#define GD_RIGHT_BRACE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define GD_RBRC (GD_RIGHT_BRACE)

/* ~ */
#define GD_TILDE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))

/* £ */
#define GD_POUND_SIGN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* ¦ */
#define GD_BROKEN_BAR (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))

/* ¬ */
#define GD_NOT (LS(RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))))

/* á */
#define GD_A_ACUTE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A)))

/* é */
#define GD_E_ACUTE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)))

/* í */
#define GD_I_ACUTE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I)))

/* ó */
#define GD_O_ACUTE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O)))

/* ú */
#define GD_U_ACUTE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U)))

/* ý */
#define GD_Y_ACUTE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y)))

/* € */
#define GD_EURO (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
