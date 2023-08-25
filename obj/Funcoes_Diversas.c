/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <D:\\GitHub\\agenda\\prg\\Funcoes_Diversas.prg>
 * Command: D:\GitHub\agenda\prg\Funcoes_Diversas.prg /q /oD:\GitHub\agenda\obj\Funcoes_Diversas.c /M /N 
 * Created: 2023.08.25 15:15:49 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "D:\\GitHub\\agenda\\prg\\Funcoes_Diversas.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( MYRUN );
HB_FUNC( INTERNETOK );

/* Forward declarations of all externally defined Functions. */
HB_FUNC_EXTERN( CREATEOBJECT );
HB_FUNC_EXTERN( INETINIT );
HB_FUNC_EXTERN( INETGETHOSTS );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( INETCLEANUP );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FUNCOES_DIVERSAS )
{ "MYRUN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MYRUN )}, &ModuleFakeDyn },
{ "CCOMANDO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEOBJECT )}, NULL },
{ "RUN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INTERNETOK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INTERNETOK )}, &ModuleFakeDyn },
{ "INETINIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INETINIT )}, NULL },
{ "INETGETHOSTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( INETGETHOSTS )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "INETCLEANUP", {HB_FS_PUBLIC}, {HB_FUNCNAME( INETCLEANUP )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FUNCOES_DIVERSAS, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FUNCOES_DIVERSAS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FUNCOES_DIVERSAS )
   #include "hbiniseg.h"
#endif

HB_FUNC( MYRUN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
	HB_P_PARAMETER, 1, 0, 1,	/* CCOMANDO */
/* 00007 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_PUSHSYMNEAR, 2,	/* CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'W', 'S', 'c', 'r', 'i', 'p', 't', '.', 'S', 'h', 'e', 'l', 'l', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OSHELL */
/* 00033 */ HB_P_LINEOFFSET, 1,	/* 8 */
	HB_P_MESSAGE, 3, 0,	/* RUN */
	HB_P_PUSHLOCALNEAR, 2,	/* OSHELL */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMANDO */
	HB_P_ZERO,
	HB_P_TRUE,
	HB_P_SENDSHORT, 3,
	HB_P_POPLOCALNEAR, 3,	/* RET */
/* 00049 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 2,	/* OSHELL */
/* 00054 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_PUSHLOCALNEAR, 3,	/* RET */
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00065) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00066) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00068 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( INTERNETOK )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 16, 0,	/* 16 */
	HB_P_LOCALNEARSETSTR, 3, 18, 0,	/* CADDRESS 18*/
	'w', 'w', 'w', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'c', 'o', 'm', '.', 'b', 'r', 0, 
/* 00028 */ HB_P_LINEOFFSET, 1,	/* 17 */
	HB_P_PUSHSYMNEAR, 5,	/* INETINIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00035 */ HB_P_LINEOFFSET, 2,	/* 18 */
	HB_P_PUSHSYMNEAR, 6,	/* INETGETHOSTS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CADDRESS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* AHOSTS */
/* 00046 */ HB_P_LINEOFFSET, 3,	/* 19 */
	HB_P_PUSHLOCALNEAR, 1,	/* AHOSTS */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00065) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 7,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* AHOSTS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00079) */
/* 00067 */ HB_P_LINEOFFSET, 4,	/* 20 */
	HB_P_PUSHSYMNEAR, 8,	/* INETCLEANUP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00074 */ HB_P_LINEOFFSET, 5,	/* 21 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00079 */ HB_P_LINEOFFSET, 7,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* INETCLEANUP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00086 */ HB_P_LINEOFFSET, 8,	/* 24 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00091 */
   };

   hb_vmExecute( pcode, symbols );
}

