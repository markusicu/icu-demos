/*
*******************************************************************************
*
*   Copyright (C) 1996-2003, International Business Machines
*   Corporation and others.  All Rights Reserved.
*
*******************************************************************************
*   file name:  unorm_ob.h
*   encoding:   US-ASCII
*   tab size:   8 (not used)
*   indentation:4
*
*   created on: 2003mar13
*   created by: Markus W. Scherer
*
*   This file contains obsolete definitions from unorm.h.
*/

#ifndef __UNORM_OB_H__
#define __UNORM_OB_H__

#include "unicode/utypes.h"
#include "unicode/unorm.h"
#include "unicode/obsolete.h"

/** Obsolete UNormalizationMode constants. */
enum {
  /**
   * No decomposition/composition
   * @obsolete ICU 2.4. Use UNORM_NONE instead since this API will be removed in that release.
   */
  UCOL_NO_NORMALIZATION = 1,
  /**
   * Canonical decomposition
   * @obsolete ICU 2.4. Use UNORM_NFD instead since this API will be removed in that release.
   */
  UCOL_DECOMP_CAN = 2,
  /**
   * Compatibility decomposition
   * @obsolete ICU 2.4. Use UNORM_NFKD instead since this API will be removed in that release.
   */
  UCOL_DECOMP_COMPAT = 3,
  /**
   * Default normalization
   * @obsolete ICU 2.4. Use UNORM_NFKD or UNORM_DEFAULT instead since this API will be removed in that release.
   */
  UCOL_DEFAULT_NORMALIZATION = UCOL_DECOMP_COMPAT, 
  /**
   * Canonical decomposition followed by canonical composition
   * @obsolete ICU 2.4. Use UNORM_NFC instead since this API will be removed in that release.
   */
  UCOL_DECOMP_CAN_COMP_COMPAT = 4,
  /**
   * Compatibility decomposition followed by canonical composition
   * @obsolete ICU 2.4. Use UNORM_NFKC instead since this API will be removed in that release.
   */
  UCOL_DECOMP_COMPAT_COMP_CAN =5
};

/**
 * The function u_normalize() has been renamed to unorm_normalize()
 * for consistency. The old name is obsolete.
 * @obsolete ICU 2.2. Use unorm_normalize instead since this API will be removed in that release.
 */
#define u_normalize unorm_normalize

#endif
