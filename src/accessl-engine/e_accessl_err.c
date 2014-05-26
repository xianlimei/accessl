/*
    This file is part of AcceSSL.

    Copyright 2011-2014 Marcin Gozdalik <gozdal@gmail.com>

    AcceSSL is free software; you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    AcceSSL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with AcceSSL; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

/* e_accessl_err.c */
/* ====================================================================
 * Copyright (c) 1999-2007 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include "e_accessl_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

#define ERR_FUNC(func) ERR_PACK(0,func,0)
#define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA ACCESSL_str_functs[]=
{
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_CONVERT_RSA_KEY),  "E_ACCESSL_CONVERT_RSA_KEY"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_CREATE_RSA_KEY_POST),  "E_ACCESSL_CREATE_RSA_KEY_POST"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_CREATE_SERVER),  "E_ACCESSL_CREATE_SERVER"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_CTRL),  "E_ACCESSL_CTRL"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_GET_MODEXP_URL),  "E_ACCESSL_GET_MODEXP_URL"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_GET_RSA_FINGERPRINT),  "E_ACCESSL_GET_RSA_FINGERPRINT"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_INIT),  "E_ACCESSL_INIT"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_FINISH),  "E_ACCESSL_RSA_FINISH"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_INIT),  "E_ACCESSL_RSA_INIT"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_KEY_URL),  "E_ACCESSL_RSA_KEY_URL"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_MOD_EXP),  "E_ACCESSL_RSA_MOD_EXP"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_MOD_EXP_PERFORM),  "E_ACCESSL_RSA_MOD_EXP_PERFORM"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_PRIV_DEC),  "E_ACCESSL_RSA_PRIV_DEC"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_PRIV_ENC),  "E_ACCESSL_RSA_PRIV_ENC"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_PUB_DEC),  "E_ACCESSL_RSA_PUB_DEC"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_PUB_ENC),  "E_ACCESSL_RSA_PUB_ENC"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_SIGN),  "E_ACCESSL_RSA_SIGN"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_RSA_VERIFY),  "E_ACCESSL_RSA_VERIFY"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_SERVER_PARSE_ADD),  "E_ACCESSL_SERVER_PARSE_ADD"},
    {ERR_FUNC(ACCESSL_F_E_ACCESSL_WRITE_FUN),  "E_ACCESSL_WRITE_FUN"},
    {0,NULL}
};

static ERR_STRING_DATA ACCESSL_str_reasons[]=
{
    {ERR_REASON(ACCESSL_R_ACCESSL_FAILURE)    ,"accessl failure"},
    {ERR_REASON(ACCESSL_R_ACCESSL_RSA_INIT_FAILED),"accessl rsa init failed"},
    {ERR_REASON(ACCESSL_R_ALREADY_LOADED)     ,"already loaded"},
    {ERR_REASON(ACCESSL_R_BN2HEX_FAILURE)     ,"bn2hex failure"},
    {ERR_REASON(ACCESSL_R_CTRL_COMMAND_NOT_IMPLEMENTED),"ctrl command not implemented"},
    {ERR_REASON(ACCESSL_R_CURL_INIT_FAILURE)  ,"curl init failure"},
    {ERR_REASON(ACCESSL_R_DSO_FAILURE)        ,"dso failure"},
    {ERR_REASON(ACCESSL_R_INET_NTOP_FAILUR)   ,"inet ntop failur"},
    {ERR_REASON(ACCESSL_R_INVALID_RESPONSE)   ,"invalid response"},
    {ERR_REASON(ACCESSL_R_INVALID_SYNTAX)     ,"invalid syntax"},
    {ERR_REASON(ACCESSL_R_KEY_CONTEXT)        ,"key context"},
    {ERR_REASON(ACCESSL_R_MD5_FAILURE)        ,"md5 failure"},
    {ERR_REASON(ACCESSL_R_MDNS_INIT_FAILURE)  ,"mdns init failure"},
    {ERR_REASON(ACCESSL_R_MEMORY_ALLOC)       ,"memory alloc"},
    {ERR_REASON(ACCESSL_R_MISSING_KEY_COMPONENTS),"missing key components"},
    {ERR_REASON(ACCESSL_R_NO_KEY_CONTEXT)     ,"no key context"},
    {ERR_REASON(ACCESSL_R_NO_WORKERS)         ,"no workers"},
    {ERR_REASON(ACCESSL_R_PASSED_NULL_PARAM)  ,"passed null param"},
    {ERR_REASON(ACCESSL_R_RSA_GET_NEW_INDEX_FAILURE),"rsa get new index failure"},
    {ERR_REASON(ACCESSL_R_UNEXPECTED_HTTP_CODE),"unexpected http code"},
    {ERR_REASON(ACCESSL_R_WORKER_FAILURE)     ,"worker failure"},
    {0,NULL}
};

#endif

#ifdef ACCESSL_LIB_NAME
static ERR_STRING_DATA ACCESSL_lib_name[]=
{
    {0  ,ACCESSL_LIB_NAME},
    {0,NULL}
};
#endif


static int ACCESSL_lib_error_code=0;
static int ACCESSL_error_init=1;

/* FIXME
 * It is unclear what is it needed for
 */

static void ERR_load_accessl_strings(void) 
{
    if (ACCESSL_lib_error_code == 0)
        ACCESSL_lib_error_code=ERR_get_next_error_library();

    if (ACCESSL_error_init)
    {
        ACCESSL_error_init=0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(ACCESSL_lib_error_code,ACCESSL_str_functs);
        ERR_load_strings(ACCESSL_lib_error_code,ACCESSL_str_reasons);
#endif

#ifdef ACCESSL_LIB_NAME
        ACCESSL_lib_name->error = ERR_PACK(ACCESSL_lib_error_code,0,0);
        ERR_load_strings(0,ACCESSL_lib_name);
#endif
    }
}

static void ERR_unload_accessl_strings(void)
{
    if (ACCESSL_error_init == 0)
    {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(ACCESSL_lib_error_code,ACCESSL_str_functs);
        ERR_unload_strings(ACCESSL_lib_error_code,ACCESSL_str_reasons);
#endif

#ifdef ACCESSL_LIB_NAME
        ERR_unload_strings(0,ACCESSL_lib_name);
#endif
        ACCESSL_error_init=1;
    }
}

static void ERR_accessl_error(int function, int reason, char *file, int line)
{
    if (ACCESSL_lib_error_code == 0)
        ACCESSL_lib_error_code=ERR_get_next_error_library();
    ERR_PUT_error(ACCESSL_lib_error_code,function,reason,file,line);
}