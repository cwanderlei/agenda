/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <D:\\GitHub\\agenda\\prg\\Funcoes_Sql.prg>
 * Command: D:\GitHub\agenda\prg\Funcoes_Sql.prg /q /oD:\GitHub\agenda\obj\Funcoes_Sql.c /M /N 
 * Created: 2023.08.25 15:31:02 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "D:\\GitHub\\agenda\\prg\\Funcoes_Sql.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( CONECTAR_SQL );
HB_FUNC( CRIA_TABELAS );

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( FBCREATEDB );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_EXTERN( TFBSERVER );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FUNCOES_SQL )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "CONECTAR_SQL", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CONECTAR_SQL )}, &ModuleFakeDyn },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "CSERVER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VPUSERDIR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "CCOMANDO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "FBCREATEDB", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBCREATEDB )}, NULL },
{ "NRETORNO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "__QUIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __QUIT )}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TFBSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFBSERVER )}, NULL },
{ "OSQL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NETERR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ERRORMSG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CRIA_TABELAS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRIA_TABELAS )}, &ModuleFakeDyn },
{ "STARTTRANSACTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EXECUTE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ROLLBACK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "COMMIT", {HB_FS_PUBLIC}, {NULL}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FUNCOES_SQL, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FUNCOES_SQL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FUNCOES_SQL )
   #include "hbiniseg.h"
#endif

HB_FUNC( CONECTAR_SQL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 5,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 15, 0,	/* 15 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 7,	/* LCONECTOU */
	HB_P_LOCALNEARSETSTR, 8, 1, 0,	/* CLOCALBANCO 1*/
	0, 
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 9,	/* LCRIATABELA */
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 17 */
	HB_P_PUSHLOCALNEAR, 1,	/* CHOST */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 3,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NPORTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* NOMEBANCO */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* CSERVER */
/* 00050 */ HB_P_LINEOFFSET, 3,	/* 18 */
	HB_P_PUSHVARIABLE, 5, 0,	/* VPUSERDIR */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* NOMEBANCO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CLOCALBANCO */
/* 00065 */ HB_P_LINEOFFSET, 6,	/* 21 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 6,	/* LOWER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CHOST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'l', 'o', 'c', 'a', 'l', 'h', 'o', 's', 't', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 00117) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CHOST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'1', '2', '7', '.', '0', '.', '0', '.', '1', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00136) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 7,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CLOCALBANCO */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'F', 'D', 'B', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 00370) */
/* 00139 */ HB_P_LINEOFFSET, 8,	/* 23 */
	HB_P_PUSHSYMNEAR, 7,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* VPUSERDIR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	92, 'i', 'n', 's', 't', 's', 'v', 'c', '.', 'e', 'x', 'e', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 100,	/* 100 (abs: 00265) */
/* 00167 */ HB_P_LINEOFFSET, 9,	/* 24 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'i', 'n', 's', 't', 's', 'v', 'c', '.', 'e', 'x', 'e', ' ', 's', 't', 'o', 'p', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* CCOMANDO */
	HB_P_TRYBEGIN, 69, 0, 0,	/* 69 (abs: 00000260) */
/* 00195 */ HB_P_LINEOFFSET, 11,	/* 26 */
	HB_P_PUSHSYMNEAR, 9,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMANDO */
	HB_P_DOSHORT, 1,
/* 00205 */ HB_P_LINEOFFSET, 12,	/* 27 */
	HB_P_PUSHSYMNEAR, 10,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00213 */ HB_P_LINEOFFSET, 13,	/* 28 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'i', 'n', 's', 't', 's', 'v', 'c', '.', 'e', 'x', 'e', ' ', 's', 't', 'a', 'r', 't', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* CCOMANDO */
/* 00238 */ HB_P_LINEOFFSET, 14,	/* 29 */
	HB_P_PUSHSYMNEAR, 9,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMANDO */
	HB_P_DOSHORT, 1,
/* 00248 */ HB_P_LINEOFFSET, 15,	/* 30 */
	HB_P_PUSHSYMNEAR, 10,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00256 */ HB_P_TRYEND, 9, 0, 0,	/* 9 (abs: 00000265) */
/* 00260 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000260) */
	HB_P_POP,
/* 00265 */ HB_P_LINEOFFSET, 21,	/* 36 */
	HB_P_PUSHSYMNEAR, 11,	/* FBCREATEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CLOCALBANCO */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'F', 'D', 'B', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* CUSR */
	HB_P_PUSHLOCALNEAR, 3,	/* CPASS */
	HB_P_PUSHINT, 0, 64,	/* 16384 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'W', 'I', 'N', '1', '2', '5', '2', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_POPVARIABLE, 12, 0,	/* NRETORNO */
/* 00304 */ HB_P_LINEOFFSET, 22,	/* 37 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 9,	/* LCRIATABELA */
/* 00309 */ HB_P_LINEOFFSET, 24,	/* 39 */
	HB_P_PUSHVARIABLE, 12, 0,	/* NRETORNO */
	HB_P_ONE,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 00370) */
/* 00318 */ HB_P_LINEOFFSET, 25,	/* 40 */
	HB_P_PUSHSYMNEAR, 13,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'F', 'a', 'l', 'h', 'a', ' ', 'n', 'a', ' ', 'c', 'r', 'i', 'a', 231, 227, 'o', ' ', 'd', 'o', ' ', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 't', 'e', 'n', 231, 227, 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00363 */ HB_P_LINEOFFSET, 26,	/* 41 */
	HB_P_PUSHSYMNEAR, 14,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00370 */ HB_P_LINEOFFSET, 31,	/* 46 */
	HB_P_PUSHSYMNEAR, 7,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* VPUSERDIR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	92, 'i', 'n', 's', 't', 's', 'v', 'c', '.', 'e', 'x', 'e', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 100,	/* 100 (abs: 00496) */
/* 00398 */ HB_P_LINEOFFSET, 32,	/* 47 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'i', 'n', 's', 't', 's', 'v', 'c', '.', 'e', 'x', 'e', ' ', 's', 't', 'o', 'p', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* CCOMANDO */
	HB_P_TRYBEGIN, 69, 0, 0,	/* 69 (abs: 00000491) */
/* 00426 */ HB_P_LINEOFFSET, 34,	/* 49 */
	HB_P_PUSHSYMNEAR, 9,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMANDO */
	HB_P_DOSHORT, 1,
/* 00436 */ HB_P_LINEOFFSET, 35,	/* 50 */
	HB_P_PUSHSYMNEAR, 10,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00444 */ HB_P_LINEOFFSET, 36,	/* 51 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'i', 'n', 's', 't', 's', 'v', 'c', '.', 'e', 'x', 'e', ' ', 's', 't', 'a', 'r', 't', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* CCOMANDO */
/* 00469 */ HB_P_LINEOFFSET, 37,	/* 52 */
	HB_P_PUSHSYMNEAR, 9,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMANDO */
	HB_P_DOSHORT, 1,
/* 00479 */ HB_P_LINEOFFSET, 38,	/* 53 */
	HB_P_PUSHSYMNEAR, 10,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00487 */ HB_P_TRYEND, 9, 0, 0,	/* 9 (abs: 00000496) */
/* 00491 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000491) */
	HB_P_POP,
/* 00496 */ HB_P_LINEOFFSET, 44,	/* 59 */
	HB_P_MESSAGE, 15, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 16,	/* TFBSERVER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 4, 0,	/* CSERVER */
	HB_P_PUSHLOCALNEAR, 4,	/* CUSR */
	HB_P_PUSHLOCALNEAR, 3,	/* CPASS */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 4,
	HB_P_POPMEMVAR, 17, 0,	/* OSQL */
/* 00520 */ HB_P_LINEOFFSET, 46,	/* 61 */
	HB_P_MESSAGE, 18, 0,	/* NETERR */
	HB_P_PUSHMEMVAR, 17, 0,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_JUMPFALSENEAR, 98,	/* 98 (abs: 00628) */
/* 00532 */ HB_P_LINEOFFSET, 48,	/* 63 */
	HB_P_PUSHSYMNEAR, 13,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'F', 'a', 'l', 'h', 'a', ' ', 'n', 'a', ' ', 'c', 'o', 'n', 'e', 'x', 227, 'o', ',', ' ', 'f', 'a', 'v', 'o', 'r', ' ', 'v', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'o', ' ', 's', 'e', 'r', 'v', 'i', 231, 'o', ' ', 'd', 'o', ' ', 'F', 'i', 'r', 'e', 'B', 'i', 'r', 'd', '!', 13, 10, 13, 10, 0, 
	HB_P_MESSAGE, 19, 0,	/* ERRORMSG */
	HB_P_PUSHMEMVAR, 17, 0,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 't', 'e', 'n', 231, 227, 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00621 */ HB_P_LINEOFFSET, 49,	/* 64 */
	HB_P_PUSHSYMNEAR, 14,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00628 */ HB_P_LINEOFFSET, 52,	/* 67 */
	HB_P_PUSHLOCALNEAR, 9,	/* LCRIATABELA */
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00641) */
/* 00634 */ HB_P_LINEOFFSET, 53,	/* 68 */
	HB_P_PUSHSYMNEAR, 20,	/* CRIA_TABELAS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00641 */ HB_P_LINEOFFSET, 56,	/* 71 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00646 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( CRIA_TABELAS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 76, 0,	/* 76 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* VSQL 1*/
	0, 
/* 00011 */ HB_P_LINEOFFSET, 3,	/* 79 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'C', 'O', 'N', 'T', 'A', 'T', 'O', 'S', ' ', '(', 13, 10, 0, 
	HB_P_LOCALNEARADD, 1,	/* VSQL */
/* 00043 */ HB_P_LINEOFFSET, 4,	/* 80 */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	' ', ' ', ' ', ' ', 'I', 'D', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'E', 'D', ' ', 'B', 'Y', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'A', 'S', ' ', 'I', 'D', 'E', 'N', 'T', 'I', 'T', 'Y', ',', 13, 10, 0, 
	HB_P_LOCALNEARADD, 1,	/* VSQL */
/* 00100 */ HB_P_LINEOFFSET, 5,	/* 81 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', ' ', ' ', ' ', 'N', 'O', 'M', 'E', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 39, 39, ',', 13, 10, 0, 
	HB_P_LOCALNEARADD, 1,	/* VSQL */
/* 00141 */ HB_P_LINEOFFSET, 6,	/* 82 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', ' ', ' ', ' ', 'T', 'E', 'L', 'E', 'F', 'O', 'N', 'E', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 39, 39, ')', 13, 10, 0, 
	HB_P_LOCALNEARADD, 1,	/* VSQL */
/* 00186 */ HB_P_LINEOFFSET, 8,	/* 84 */
	HB_P_MESSAGE, 21, 0,	/* STARTTRANSACTION */
	HB_P_PUSHMEMVAR, 17, 0,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00197 */ HB_P_LINEOFFSET, 9,	/* 85 */
	HB_P_MESSAGE, 22, 0,	/* EXECUTE */
	HB_P_PUSHMEMVAR, 17, 0,	/* OSQL */
	HB_P_PUSHLOCALNEAR, 1,	/* VSQL */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00210 */ HB_P_LINEOFFSET, 11,	/* 87 */
	HB_P_MESSAGE, 18, 0,	/* NETERR */
	HB_P_PUSHMEMVAR, 17, 0,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 00281) */
/* 00222 */ HB_P_LINEOFFSET, 12,	/* 88 */
	HB_P_PUSHSYMNEAR, 13,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'F', 'a', 'l', 'h', 'a', ' ', 'n', 'a', ' ', 'C', 'r', 'i', 'a', 231, 227, 'o', ' ', 'd', 'a', ' ', 't', 'a', 'b', 'e', 'l', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 't', 'e', 'n', 231, 227, 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00268 */ HB_P_LINEOFFSET, 13,	/* 89 */
	HB_P_MESSAGE, 23, 0,	/* ROLLBACK */
	HB_P_PUSHMEMVAR, 17, 0,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 00308) */
/* 00281 */ HB_P_LINEOFFSET, 15,	/* 91 */
	HB_P_PUSHSYMNEAR, 13,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'm', 'm', 'i', 't', 0, 
	HB_P_DOSHORT, 1,
/* 00297 */ HB_P_LINEOFFSET, 16,	/* 92 */
	HB_P_MESSAGE, 24, 0,	/* COMMIT */
	HB_P_PUSHMEMVAR, 17, 0,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00308 */ HB_P_LINEOFFSET, 19,	/* 95 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00313 */
   };

   hb_vmExecute( pcode, symbols );
}

