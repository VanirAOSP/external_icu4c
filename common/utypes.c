/*
******************************************************************************
*
*   Copyright (C) 1997-2011, International Business Machines
*   Corporation and others.  All Rights Reserved.
*
******************************************************************************
*
*  FILE NAME : utypes.c (previously putil.c)
*
*   Date        Name        Description
*   10/07/2004  grhoten     split from putil.c
******************************************************************************
*/

#include "unicode/utypes.h"

/* u_errorName() ------------------------------------------------------------ */

static const char * const
_uErrorInfoName[U_ERROR_WARNING_LIMIT-U_ERROR_WARNING_START]={
    "U_USING_FALLBACK_WARNING",
    "U_USING_DEFAULT_WARNING",
    "U_SAFECLONE_ALLOCATED_WARNING",
    "U_STATE_OLD_WARNING",
    "U_STRING_NOT_TERMINATED_WARNING",
    "U_SORT_KEY_TOO_SHORT_WARNING",
    "U_AMBIGUOUS_ALIAS_WARNING",
    "U_DIFFERENT_UCA_VERSION",
    "U_PLUGIN_CHANGED_LEVEL_WARNING",
};

static const char * const
_uTransErrorName[U_PARSE_ERROR_LIMIT - U_PARSE_ERROR_START]={
    "U_BAD_VARIABLE_DEFINITION",
    "U_MALFORMED_RULE",
    "U_MALFORMED_SET",
    "U_MALFORMED_SYMBOL_REFERENCE",
    "U_MALFORMED_UNICODE_ESCAPE",
    "U_MALFORMED_VARIABLE_DEFINITION",
    "U_MALFORMED_VARIABLE_REFERENCE",
    "U_MISMATCHED_SEGMENT_DELIMITERS",
    "U_MISPLACED_ANCHOR_START",
    "U_MISPLACED_CURSOR_OFFSET",
    "U_MISPLACED_QUANTIFIER",
    "U_MISSING_OPERATOR",
    "U_MISSING_SEGMENT_CLOSE",
    "U_MULTIPLE_ANTE_CONTEXTS",
    "U_MULTIPLE_CURSORS",
    "U_MULTIPLE_POST_CONTEXTS",
    "U_TRAILING_BACKSLASH",
    "U_UNDEFINED_SEGMENT_REFERENCE",
    "U_UNDEFINED_VARIABLE",
    "U_UNQUOTED_SPECIAL",
    "U_UNTERMINATED_QUOTE",
    "U_RULE_MASK_ERROR",
    "U_MISPLACED_COMPOUND_FILTER",
    "U_MULTIPLE_COMPOUND_FILTERS",
    "U_INVALID_RBT_SYNTAX",
    "U_INVALID_PROPERTY_PATTERN",
    "U_MALFORMED_PRAGMA",
    "U_UNCLOSED_SEGMENT",
    "U_ILLEGAL_CHAR_IN_SEGMENT",
    "U_VARIABLE_RANGE_EXHAUSTED",
    "U_VARIABLE_RANGE_OVERLAP",
    "U_ILLEGAL_CHARACTER",
    "U_INTERNAL_TRANSLITERATOR_ERROR",
    "U_INVALID_ID",
    "U_INVALID_FUNCTION"
};

static const char * const
_uErrorName[U_STANDARD_ERROR_LIMIT]={
    "U_ZERO_ERROR",

    "U_ILLEGAL_ARGUMENT_ERROR",
    "U_MISSING_RESOURCE_ERROR",
    "U_INVALID_FORMAT_ERROR",
    "U_FILE_ACCESS_ERROR",
    "U_INTERNAL_PROGRAM_ERROR",
    "U_MESSAGE_PARSE_ERROR",
    "U_MEMORY_ALLOCATION_ERROR",
    "U_INDEX_OUTOFBOUNDS_ERROR",
    "U_PARSE_ERROR",
    "U_INVALID_CHAR_FOUND",
    "U_TRUNCATED_CHAR_FOUND",
    "U_ILLEGAL_CHAR_FOUND",
    "U_INVALID_TABLE_FORMAT",
    "U_INVALID_TABLE_FILE",
    "U_BUFFER_OVERFLOW_ERROR",
    "U_UNSUPPORTED_ERROR",
    "U_RESOURCE_TYPE_MISMATCH",
    "U_ILLEGAL_ESCAPE_SEQUENCE",
    "U_UNSUPPORTED_ESCAPE_SEQUENCE",
    "U_NO_SPACE_AVAILABLE",
    "U_CE_NOT_FOUND_ERROR",
    "U_PRIMARY_TOO_LONG_ERROR",
    "U_STATE_TOO_OLD_ERROR",
    "U_TOO_MANY_ALIASES_ERROR",
    "U_ENUM_OUT_OF_SYNC_ERROR",
    "U_INVARIANT_CONVERSION_ERROR",
    "U_INVALID_STATE_ERROR",
    "U_COLLATOR_VERSION_MISMATCH",
    "U_USELESS_COLLATOR_ERROR",
    "U_NO_WRITE_PERMISSION"
};
static const char * const
_uFmtErrorName[U_FMT_PARSE_ERROR_LIMIT - U_FMT_PARSE_ERROR_START] = {
    "U_UNEXPECTED_TOKEN",
    "U_MULTIPLE_DECIMAL_SEPARATORS",
    "U_MULTIPLE_EXPONENTIAL_SYMBOLS",
    "U_MALFORMED_EXPONENTIAL_PATTERN",
    "U_MULTIPLE_PERCENT_SYMBOLS",
    "U_MULTIPLE_PERMILL_SYMBOLS",
    "U_MULTIPLE_PAD_SPECIFIERS",
    "U_PATTERN_SYNTAX_ERROR",
    "U_ILLEGAL_PAD_POSITION",
    "U_UNMATCHED_BRACES",
    "U_UNSUPPORTED_PROPERTY",
    "U_UNSUPPORTED_ATTRIBUTE",
    "U_ARGUMENT_TYPE_MISMATCH",
    "U_DUPLICATE_KEYWORD",
    "U_UNDEFINED_KEYWORD",
    "U_DEFAULT_KEYWORD_MISSING",
    "U_DECIMAL_NUMBER_SYNTAX_ERROR",
    "U_FORMAT_INEXACT_ERROR"
};

static const char * const
_uBrkErrorName[U_BRK_ERROR_LIMIT - U_BRK_ERROR_START] = {
    "U_BRK_INTERNAL_ERROR",
    "U_BRK_HEX_DIGITS_EXPECTED",
    "U_BRK_SEMICOLON_EXPECTED",
    "U_BRK_RULE_SYNTAX",
    "U_BRK_UNCLOSED_SET",
    "U_BRK_ASSIGN_ERROR",
    "U_BRK_VARIABLE_REDFINITION",
    "U_BRK_MISMATCHED_PAREN",
    "U_BRK_NEW_LINE_IN_QUOTED_STRING",
    "U_BRK_UNDEFINED_VARIABLE",
    "U_BRK_INIT_ERROR",
    "U_BRK_RULE_EMPTY_SET",
    "U_BRK_UNRECOGNIZED_OPTION",
    "U_BRK_MALFORMED_RULE_TAG"
};

static const char * const
_uRegexErrorName[U_REGEX_ERROR_LIMIT - U_REGEX_ERROR_START] = {
    "U_REGEX_INTERNAL_ERROR",
    "U_REGEX_RULE_SYNTAX",
    "U_REGEX_INVALID_STATE",
    "U_REGEX_BAD_ESCAPE_SEQUENCE",
    "U_REGEX_PROPERTY_SYNTAX",
    "U_REGEX_UNIMPLEMENTED",
    "U_REGEX_MISMATCHED_PAREN",
    "U_REGEX_NUMBER_TOO_BIG",
    "U_REGEX_BAD_INTERVAL",
    "U_REGEX_MAX_LT_MIN",
    "U_REGEX_INVALID_BACK_REF",
    "U_REGEX_INVALID_FLAG",
    "U_REGEX_LOOK_BEHIND_LIMIT",
    "U_REGEX_SET_CONTAINS_STRING",
    "U_REGEX_OCTAL_TOO_BIG",
    "U_REGEX_MISSING_CLOSE_BRACKET",
    "U_REGEX_INVALID_RANGE",
    "U_REGEX_STACK_OVERFLOW",
    "U_REGEX_TIME_OUT",
    "U_REGEX_STOPPED_BY_CALLER"
};

static const char * const
_uIDNAErrorName[U_IDNA_ERROR_LIMIT - U_IDNA_ERROR_START] = {
     "U_STRINGPREP_PROHIBITED_ERROR",
     "U_STRINGPREP_UNASSIGNED_ERROR",
     "U_STRINGPREP_CHECK_BIDI_ERROR",
     "U_IDNA_STD3_ASCII_RULES_ERROR",
     "U_IDNA_ACE_PREFIX_ERROR",
     "U_IDNA_VERIFICATION_ERROR",
     "U_IDNA_LABEL_TOO_LONG_ERROR",
     "U_IDNA_ZERO_LENGTH_LABEL_ERROR",
     "U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR"
};

static const char * const
_uPluginErrorName[U_PLUGIN_ERROR_LIMIT - U_PLUGIN_ERROR_START] = {
     "U_PLUGIN_TOO_HIGH",
     "U_PLUGIN_DIDNT_SET_LEVEL",
};

U_CAPI const char * U_EXPORT2
u_errorName(UErrorCode code) {
    if(U_ZERO_ERROR <= code && code < U_STANDARD_ERROR_LIMIT) {
        return _uErrorName[code];
    } else if(U_ERROR_WARNING_START <= code && code < U_ERROR_WARNING_LIMIT) {
        return _uErrorInfoName[code - U_ERROR_WARNING_START];
    } else if(U_PARSE_ERROR_START <= code && code < U_PARSE_ERROR_LIMIT){
        return _uTransErrorName[code - U_PARSE_ERROR_START];
    } else if(U_FMT_PARSE_ERROR_START <= code && code < U_FMT_PARSE_ERROR_LIMIT){
        return _uFmtErrorName[code - U_FMT_PARSE_ERROR_START];
    } else if (U_BRK_ERROR_START <= code  && code < U_BRK_ERROR_LIMIT){
        return _uBrkErrorName[code - U_BRK_ERROR_START];
    } else if (U_REGEX_ERROR_START <= code && code < U_REGEX_ERROR_LIMIT) {
        return _uRegexErrorName[code - U_REGEX_ERROR_START];
    } else if(U_IDNA_ERROR_START <= code && code < U_IDNA_ERROR_LIMIT) {
        return _uIDNAErrorName[code - U_IDNA_ERROR_START];
    } else if(U_PLUGIN_ERROR_START <= code && code < U_PLUGIN_ERROR_LIMIT) {
        return _uPluginErrorName[code - U_PLUGIN_ERROR_START];
    } else {
        return "[BOGUS UErrorCode]";
    }
}

U_CAPI const char * U_EXPORT2
u_errorName_48(UErrorCode code) {
	return u_errorName(code);
}

U_CAPI const char * U_EXPORT2
u_errorName_50(UErrorCode code) {
	return u_errorName(code);
}

/*
 * Hey, Emacs, please set the following:
 *
 * Local Variables:
 * indent-tabs-mode: nil
 * End:
 *
 */
