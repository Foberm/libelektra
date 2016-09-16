/**
 * @file
 *
 * @brief helper functions for the crypto plugin
 *
 * @copyright BSD License (see doc/COPYING or http://www.libelektra.org)
 *
 */

#ifndef ELEKTRA_PLUGIN_CRYPTO_HELPER_H
#define ELEKTRA_PLUGIN_CRYPTO_HELPER_H

#include "crypto.h"
#include <kdb.h>
#include <kdbtypes.h>

int CRYPTO_PLUGIN_FUNCTION (getSaltFromMetakey) (Key * errorKey, Key * k, kdb_octet_t ** salt, kdb_unsigned_long_t * saltLen);
int CRYPTO_PLUGIN_FUNCTION (getSaltFromPayload) (Key * errorKey, Key * k, kdb_octet_t ** salt, kdb_unsigned_long_t * saltLen);
Key * CRYPTO_PLUGIN_FUNCTION (getMasterPassword) (Key * errorKey, KeySet * config);
kdb_unsigned_long_t CRYPTO_PLUGIN_FUNCTION (getIterationCount) (Key * errorKey, KeySet * config);
void CRYPTO_PLUGIN_FUNCTION (hex2bin) (Key * errorKey, const char * hexBuffer, kdb_octet_t ** output, kdb_unsigned_long_t * outputLen);
char * CRYPTO_PLUGIN_FUNCTION (bin2hex) (Key * errorKey, const kdb_octet_t * buffer, const size_t length);

#endif
