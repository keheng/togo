/*
 * togo_hash.h
 *
 *  Created on: 2015-7-23
 *      Author: zhuli
 */

#ifndef TOGO_HASH_H_
#define TOGO_HASH_H_

int togo_djb_hash(u_char * str);
int togo_murmur_hash2(u_char *data, size_t len);

#endif /* TOGO_HASH_H_ */
