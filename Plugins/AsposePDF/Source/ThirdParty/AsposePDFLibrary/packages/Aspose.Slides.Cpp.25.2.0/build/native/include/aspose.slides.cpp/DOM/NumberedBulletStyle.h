#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the style of the numbered bullets.
/// </summary>
enum class NumberedBulletStyle : int8_t
{
    /// <summary>
    /// Not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Lowercase alphabetical characters with a period. Sample: a., b., c., ...
    /// </summary>
    BulletAlphaLCPeriod = 0,
    /// <summary>
    /// Uppercase alphabetical characters with a period. Sample: A., B., C., ...
    /// </summary>
    BulletAlphaUCPeriod = 1,
    /// <summary>
    /// Arabic numerals with closing parenthesis. Sample: 1), 2), 3), ...
    /// </summary>
    BulletArabicParenRight = 2,
    /// <summary>
    /// Arabic numerals with a period. Sample: 1., 2., 3., ...
    /// </summary>
    BulletArabicPeriod = 3,
    /// <summary>
    /// Lowercase Roman numerals with both parentheses. Sample: (i), (ii), (iii), ...
    /// </summary>
    BulletRomanLCParenBoth = 4,
    /// <summary>
    /// Lowercase Roman numerals with closing parenthesis. Sample: i), ii), iii), ...
    /// </summary>
    BulletRomanLCParenRight = 5,
    /// <summary>
    /// Lowercase Roman numerals with period. Sample: i., ii., iii., ...
    /// </summary>
    BulletRomanLCPeriod = 6,
    /// <summary>
    /// Uppercase Roman numerals with period. Sample: I., II., III., ...
    /// </summary>
    BulletRomanUCPeriod = 7,
    /// <summary>
    /// Lowercase alphabetical characters with both parentheses. Sample: (a), (b), (c), ...
    /// </summary>
    BulletAlphaLCParenBoth = 8,
    /// <summary>
    /// Lowercase alphabetical characters with closing parenthesis. Sample: a), b), c), ...
    /// </summary>
    BulletAlphaLCParenRight = 9,
    /// <summary>
    /// Uppercase alphabetical characters with both parentheses. Sample: (A), (B), (C), ...
    /// </summary>
    BulletAlphaUCParenBoth = 10,
    /// <summary>
    /// Uppercase alphabetical characters with closing parenthesis. Sample: A), B), C), ...
    /// </summary>
    BulletAlphaUCParenRight = 11,
    /// <summary>
    /// Arabic numerals with both parentheses. Sample: (1), (2), (3), ...
    /// </summary>
    BulletArabicParenBoth = 12,
    /// <summary>
    /// Arabic numerals. Sample: 1, 2, 3, ...
    /// </summary>
    BulletArabicPlain = 13,
    /// <summary>
    /// Uppercase Roman numerals with both parentheses. Sample: (I), (II), (III), ...
    /// </summary>
    BulletRomanUCParenBoth = 14,
    /// <summary>
    /// Uppercase Roman numerals with closing parenthesis. Sample: I), II), III), ...
    /// </summary>
    BulletRomanUCParenRight = 15,
    /// <summary>
    /// Simplified Chinese without a period.
    /// </summary>
    BulletSimpChinPlain = 16,
    /// <summary>
    /// Simplified Chinese with a period.
    /// </summary>
    BulletSimpChinPeriod = 17,
    /// <summary>
    /// Double-byte circled number for values up to 10, from  11 - arabic numbers.
    /// </summary>
    BulletCircleNumDBPlain = 18,
    /// <summary>
    /// Text colored number with same color circle drawn around it (Wingdings white circle numbers). From  11 - arabic numbers.
    /// </summary>
    BulletCircleNumWDWhitePlain = 19,
    /// <summary>
    /// Shadow color number with circular background of normal text color (Wingdings black circle numbers).
    /// </summary>
    BulletCircleNumWDBlackPlain = 20,
    /// <summary>
    /// Traditional Chinese without a period.
    /// </summary>
    BulletTradChinPlain = 21,
    /// <summary>
    /// Traditional Chinese with a period.
    /// </summary>
    BulletTradChinPeriod = 22,
    /// <summary>
    /// Arabic language alphabetical characters with a dash.
    /// </summary>
    BulletArabicAlphaDash = 23,
    /// <summary>
    /// Arabic Abjad alphabets with a dash.
    /// </summary>
    BulletArabicAbjadDash = 24,
    /// <summary>
    /// Hebrew language alphabetical characters with a dash.
    /// </summary>
    BulletHebrewAlphaDash = 25,
    /// <summary>
    /// Japanese/Korean numbers without a period.
    /// </summary>
    BulletKanjiKoreanPlain = 26,
    /// <summary>
    /// Japanese/Korean numbers with a period.
    /// </summary>
    BulletKanjiKoreanPeriod = 27,
    /// <summary>
    /// Double-byte Arabic numbering scheme (no punctuation).
    /// </summary>
    BulletArabicDBPlain = 28,
    /// <summary>
    /// Double-byte Arabic numbering scheme with double-byte period.
    /// </summary>
    BulletArabicDBPeriod = 29,
    /// <summary>
    /// Thai alphabet period.
    /// </summary>
    BulletThaiAlphaPeriod = 30,
    /// <summary>
    /// Thai alphabet parentheses - right.
    /// </summary>
    BulletThaiAlphaParenRight = 31,
    /// <summary>
    /// Thai alphabet parentheses - both.
    /// </summary>
    BulletThaiAlphaParenBoth = 32,
    /// <summary>
    /// Thai numerical period.
    /// </summary>
    BulletThaiNumPeriod = 33,
    /// <summary>
    /// Thai numerical parentheses - right.
    /// </summary>
    BulletThaiNumParenRight = 34,
    /// <summary>
    /// Thai numerical parentheses - both.
    /// </summary>
    BulletThaiNumParenBoth = 35,
    /// <summary>
    /// Hindi alphabet period - vowels.
    /// </summary>
    BulletHindiAlphaPeriod = 36,
    /// <summary>
    /// Hindi numerical period.
    /// </summary>
    BulletHindiNumPeriod = 37,
    /// <summary>
    /// Kanji Simple Chinese DBPeriod.
    /// </summary>
    BulletKanjiSimpChinDBPeriod = 38,
    /// <summary>
    /// Hindi numerical parentheses - right.
    /// </summary>
    BulletHindiNumParenRight = 39,
    /// <summary>
    /// Hindi alphabet period - consonants.
    /// </summary>
    BulletHindiAlpha1Period = 40
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::NumberedBulletStyle>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::NumberedBulletStyle, const char_t*>, 42>& values();
};
/// @endcond



